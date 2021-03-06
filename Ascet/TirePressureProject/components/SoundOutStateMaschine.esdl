package components;
@generated("statemachine")
type SoundOutStateMaschineStatemachineStates is enum {
	stateLampShort,
	stateLampOff,
	stateLampLong,
	waitstate
};

class SoundOutStateMaschine {
	@set
	real deltaTime;
	real time = 0.0;
	integer countShort = 0;
	integer countLong = 0;
	@set
	boolean lampOn = false;

	@generated("statemachine")
	public void soundOutStateMaschineStatemachineTrigger() triggers SoundOutStateMaschineStatemachine;

	@generatedStateMachine
	statemachine SoundOutStateMaschineStatemachine using SoundOutStateMaschineStatemachineStates {
		start waitstate;

		state stateLampShort {
			entry {
				time = 0.0;
				lampOn = true;
			}
			static {
				time = time + deltaTime;
			}
			exit {
				lampOn = false;
				countShort = countShort + 1;
			}
			transition(time > 0.8) to stateLampOff;
		}

		state stateLampOff {
			entry {
				time = 0.0;
			}
			static {
				time = time + deltaTime;
			}
			transition(time > 0.8) && (countShort == 3) && (countLong < 3) to stateLampLong;
			transition(time > 0.8) && (countShort < 3) to stateLampShort;
			transition countShort == 3 && countLong == 3 to waitstate;
		}

		state stateLampLong {
			entry {
				time = 0.0;
				lampOn = true;
			}
			static {
				time = time + deltaTime;
			}
			exit {
				lampOn = false;
				countLong = countLong + 1;
				if (countLong == 3) {
					countShort = 0;
				}
			}
			transition time > 1.6 to stateLampOff;
		}

		state waitstate {
			entry {
				time = 0.0;
			}
			static {
				time = time + deltaTime;
			}
			exit {
				countShort = 0;
				countLong = 0;
			}
			transition time > 1.0 to stateLampShort;
		}
	}
}