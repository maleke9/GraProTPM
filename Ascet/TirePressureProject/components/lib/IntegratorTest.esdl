package components.lib;

static class IntegratorTest {
	Integrator tester;
	characteristic real integrate_inputVal = 0.0;
	characteristic real integrate_dtVal = 0.0;
	real outVal_return;

	@thread
	public void calc() {
		tester.calc();
	}

	@thread
	public void integrate() {
		tester.integrate(integrate_inputVal, integrate_dtVal);
	}

	@thread
	public void outVal() {
		outVal_return = tester.outVal();
	}
}