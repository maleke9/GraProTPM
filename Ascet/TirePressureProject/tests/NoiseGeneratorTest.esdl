package tests;

import assertLib.Assert;
import components.lib.NoiseGenerator;

static class noiseGeneratorTest {

	NoiseGenerator ng1;
	NoiseGenerator ng2;
	NoiseGenerator ng3;
	NoiseGenerator ng4;

	@Test
	public void testNoiseNormal() {
		real x = ng1.calc(2, 7, 17, 0.01);
		Assert.assertTrue(x == 0.09);
	}
	
	@Test
	public void testNoiseNegativeA() {
		real x = ng2.calc(-2, 7, 17, 0.01);
		Assert.assertTrue(x == 0.05);
	}
	
	@Test
	public void testNoiseNegativeC() {
		real x = ng2.calc(2, -6, 17, 0.01);
		Assert.assertTrue(x == 0.04);
	}
	
	@Test
	public void testNoiseZeroA() {
		real x = ng3.calc(0, 7, 17, 0.01);
		Assert.assertTrue(x == 0.07);
	}
	
	@Test
	public void testNoiseZeroC() {
		real x = ng3.calc(2, 0, 17, 0.01);
		Assert.assertTrue(x == 0.02);
	}
	
	@Test
	public void testNoiseFlow() {
		real x;
		
		ng4.calc(2, 7, 17, 0.01);
		ng4.calc(2, 7, 17, 0.01);
		ng4.calc(2, 7, 17, 0.01);
		x = ng4.calc(2, 7, 17, 0.01);
		
		Assert.assertTrue(x == 0.02);
	}
}