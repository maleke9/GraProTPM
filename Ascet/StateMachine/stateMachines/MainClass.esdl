package stateMachines;

// A *static* class is pre-instantiated 
static class MainClass {
    // Create an instance of Tutorial_StateMachine
    Simple sMachine;
    public void mainProgram() {
        while (sMachine.getCount() <= 50) {
            sMachine.triggerWithCurrentState();  
        }
    }
    
}