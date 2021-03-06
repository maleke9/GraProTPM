package tests;

import assertLib.Assert;
import components.lib.percentCompare;

static class percentCompareTest {
	percentCompare pc;

	@Test
	public void testPerCompNormal() {
		real x = pc.calc(9.5, 10.0);
		Assert.assertTrue(x == -0.05);
	}
	
	@Test
	public void testPerCompNegativeVal() {
		real x = pc.calc(-5.1, 10.0);
		Assert.assertTrue(x == -1.51);
	}
	
	@Test
	public void testPerCompNegativeAvg() {
		real x = pc.calc(9.5, -10.0);
		Assert.assertTrue(x == -1.95);
	}
	
	@Test
	public void testPerCompZeroVal() {
		real x = pc.calc(0.0, 10.0);
		Assert.assertTrue(x == -1.0);
	}
	
	@Test
	public void testNoiseZeroAvg() {
		real x = pc.calc(9.4, 0.0);
		Assert.assertTrue(x == 0.0);
	}
}