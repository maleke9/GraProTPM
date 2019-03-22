package tests;

import assertLib.Assert;
import components.lib.NoiseGenerator;

static class noiseGeneratorTest {

	NoiseGenerator ng1;
	NoiseGenerator ng2;
	NoiseGenerator ng3;
	NoiseGenerator ng4;

	@Test
	public void testOfNoiseNormal() {
		real x = ng1.calc(2, 7, 17, 0.01);
		Assert.assertTrue((x < 0.1) || (x > 0.08));
	}
	
	@Test
	public void testNoiseNegativeA() {
		real x = ng2.calc(-2, 7, 17, 0.01);
		Assert.assertTrue((x < 0.06) || (x > 0.04));
	}
	
	@Test
	public void testNoiseNegativeC() {
		real x = ng2.calc(2, -6, 17, 0.01);
		Assert.assertTrue((x < 0.05) || (x > 0.03));
	}
	
	@Test
	public void testNoiseZeroA() {
		real x = ng3.calc(0, 7, 17, 0.01);
		Assert.assertTrue((x < 0.08) || (x > 0.06));
	}
	
	@Test
	public void testNoiseZeroC() {
		real x = ng3.calc(2, 0, 17, 0.01);
		Assert.assertTrue((x < 0.03) || (x > 0.01));
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