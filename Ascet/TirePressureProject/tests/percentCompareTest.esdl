package tests;

import assertLib.Assert;
import components.lib.percentCompare;

static class percentCompareTest {

	percentCompare pc;

	@Test
	public void testPerCompNormal() {
		real x = pc.calc(9.4, 10.0);
		Assert.assertTrue(x == -0.06);
	}
	
	@Test
	public void testPerCompNegativeVal() {
		real x = pc.calc(-5.1, 10.0);
		Assert.assertTrue(x == -1.51);
	}
	
	@Test
	public void testNoiseNegativeAvg() {
		real x = pc.calc(9.4, -10.0);
		Assert.assertTrue(x == -1.94);
	}
	
	@Test
	public void testNoiseZeroVal() {
		real x = pc.calc(0.0, 10.0);
		Assert.assertTrue(x == -1.0);
	}
	
	@Test
	public void testNoiseZeroAvg() {
		// TODO: Teilen durch 0?
		//xx
		real x = pc.calc(9.4, 0.0);
		Assert.assertTrue(x == -1.51);
	}
}