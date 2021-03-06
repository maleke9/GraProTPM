package components.lib;
import components.Component;

class Integrator {
	real memory = 0.0;
	characteristic real kI = 1.0;

	@generated("blockdiagram")
	public void integrate(real in inputVal, real in dtVal) {
		memory = ((inputVal * kI * dtVal) + memory); // Main/integrate 1
	}

	@generated("blockdiagram")
	public real outVal() {
		if (Component.reset) {
			memory = 0.0; // Main/outVal 1/if-then 1
		} // Main/outVal 1
		return memory; // Main/outVal 2
	}
}