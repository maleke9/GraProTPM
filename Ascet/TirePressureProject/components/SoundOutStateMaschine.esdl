package components;
@generated("statemachine")
type SoundOutStateMaschineStatemachineStates is enum {
	stateLampShort,
	stateLampOff,
	stateLampLong,
	off,
	waitstate
};

class SoundOutStateMaschine {
	@set
	real deltaTime;
	real time = 0.0;
	integer countShort = 0;
	integer countLong = 0;
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
			transition countShort == 3 && countLong == 3 to off;
			transition(time > 0.8) && (countShort < 3) to stateLampShort;
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

		state off {
		}

		state waitstate {
			entry {
				time = 0.0;
			}
			static {
				time = time + deltaTime;
			}
			transition time > 1.0 to stateLampShort;
		}
	}
}