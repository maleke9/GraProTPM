package stateMachines;

type SimpleStatemachineStates is enum {
	TrafficLightRed,
	TrafficLightYellow,
	TrafficLightGreen
};
// ESDL also allows you to define the behaviour of a method through a state machine
type BoundedInt is integer 0 .. 100;
// Declare an enumeration with triggers
type smTriggerState is enum {
	trigger1,
	trigger2
};

/*
 * The state machine which is defined in class Simple, show us how to declare: states, entry block, static block, exit block and transition
 */
class Simple {
	real time;
	BoundedInt count = 0;
	real timeRed = 30.0;
	real timeYellow = 5.0;
	real timeGreen = 20.0;
	smTriggerState currentTrigger;
	integer triggerNumber;
	// Methods to set the current trigger

	public void trigger1() {
		currentTrigger = smTriggerState.trigger1;
		triggerNumber = 1;
		simpleTrigger();
	}

	public void trigger2() {
		currentTrigger = smTriggerState.trigger2;
		triggerNumber = 2;
		simpleTrigger();
	}
	// Using getState() method to get the current state of state machine and base on this to choose the trigger method

	public void triggerWithCurrentState() {
		switch (SimpleStatemachine.getState()) {
			case SimpleStatemachineStates.TrafficLightRed : {
				trigger1();
			}
			case SimpleStatemachineStates.TrafficLightGreen : {
				trigger2();
			}
			default : {
				trigger1();
			}
		}
	}
	// other methods of this class can server to communicate with the outside
	@no_side_effect
	public integer getCount() {
		return count;
	}

	@no_side_effect
	public real getTime() {
		return time;
	}
	// we have to define a method to be implemented as by a state machine
	// this method must return void

	public void simpleTrigger() triggers SimpleStatemachine;
    
    //State machine can have multiple trigger, but only one trigger which has argument
	public void secondTrigger() triggers SimpleStatemachine;
	
	
	//State machine must define default trigger if it associates to multiple triggers
	statemachine SimpleStatemachine  default trigger simpleTrigger using  SimpleStatemachineStates{
		start TrafficLightRed;

		state TrafficLightRed {
			entry {
				time = 0.0;
			}
			static {
				time = time + 0.1;
			}
			exit {
				time = time + 0.5;
			}
			transition(currentTrigger == smTriggerState.trigger1) && (triggerNumber == 1) && (time >= timeRed) to
					TrafficLightYellow {
				count += 1;
			};
		}

		state TrafficLightYellow {
			entry {
				time = 0.0;
			}
			static {
				time = time + 0.1;
			}
			//Inside transition, it can associate explicitly to a trigger. if no, it means that the transition associates to default trigger
			transition(time >= timeYellow) trigger secondTrigger to TrafficLightGreen {
				count += 1;
			};
		}

		state TrafficLightGreen {
			entry {
				time = 0.0;
			}
			static {
				time = time + 0.1;
			}
			transition(currentTrigger == smTriggerState.trigger2) && (triggerNumber == 2) || (time >= timeGreen) to junction1;
		}
		junction junction1 {
			transition(time >= timeGreen) to TrafficLightRed {
				count += 1;
			};
		}
	}
}