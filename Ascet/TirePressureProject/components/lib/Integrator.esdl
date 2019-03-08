package components.lib;

class Integrator {
	real memory;
	characteristic real kI = 4.0;

	@generated("blockdiagram")
	public void calc() {
	}

	@generated("blockdiagram")
	public void integrate(real in inputVal, real in dtVal) {
		memory = ((inputVal * kI * dtVal) + memory); // Main/integrate 1
	}

	@generated("blockdiagram")
	public real outVal() {
		return memory; // Main/outVal 1
	}
}