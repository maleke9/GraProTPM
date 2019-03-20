package stateMachines;

type HierarchyStatemachineStates is enum {
	A,
	A1,
	A2,
	A11,
	B,
	B1,
	B2,
	B11
};

/*
 * In the class HierarchicalStateMachine, we define state machine with states which may be hierarchical (nested) states
 */
class Hierarchy {
	integer x;
	public void HierarchyTrigger() triggers HierarchyStatemachine;

	statemachine HierarchyStatemachine using HierarchyStatemachineStates {
		state A {
			state A1 {
				state A11 {
					transition true to B11;
				}
			}
			state A2 {
				transition true to B2;
				
			}
		}

		state B {
			state B1 {
				state B11 {
					transition true to A11;
				}
			}
			state B2 {
				transition true to A2;
			}
		}
	}

}