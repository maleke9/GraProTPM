package tests;

import assertLib.Assert;
import components.lib.Integrator;

static class IntegratorTest {

	Integrator integ1;
	Integrator integ2;
	Integrator integ3;
	Integrator integ4;

	@Test
	public void testIntegratorNormal() {
		integ1.integrate(50.0, 10.0);
		Assert.assertTrue(integ1.outVal() == 500.0);
	}
	
	@Test
	public void testIntegratorNegative() {
		integ2.integrate(-50.0, 10.0);
		Assert.assertTrue(integ2.outVal() == -500.0);
	}
	
	@Test
	public void testIntegratorZero() {
		integ3.integrate(0.0, 10.0);
		Assert.assertTrue(integ3.outVal() == 0.0);
	}
	
	@Test
	public void testIntegratorFlow() {
		integ4.integrate(2.0, 10.0);
		integ4.integrate(5.0, 10.0);
		integ4.integrate(1.0, 10.0);
		integ4.integrate(3.0, 10.0);
		
		Assert.assertTrue(integ4.outVal() == 110.0);
	}
}