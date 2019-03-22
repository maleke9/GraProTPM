package tests;

import assertLib.Assert;
import components.lib.average;

static class AverageTest {
	average avg;

	@Test
	public void testAverageNormal() {
		Assert.assertTrue(avg.calc(1.0,2.0,3.0,4.0)==2.5);
	}
	
	@Test
	public void testAverageSpecial() {
		Assert.assertTrue(avg.calc(1.0,1.0,1.0,1.0)==1.0);
	}
	
	@Test
	public void testAverageNegative() {
		Assert.assertTrue(avg.calc(-1.0,2.0,-3.0,4.0)==0.5);
	}
}
