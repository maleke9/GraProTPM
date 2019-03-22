package tests;

import assertLib.Assert;
import components.lib.diffCheck;

static class diffCheckTest {


		@Test
	public void testOFDiffCheckUpper() {
	
		Assert.assertTrue(diffCheck.calc(0.005));

	}
		@Test
	public void testOFDiffCheckInBoundPositive() {
	

		Assert.assertFalse(diffCheck.calc(0.0005));	
	}
		@Test
	public void testOFDiffCheckInBoundNegative() {
	

		Assert.assertFalse(diffCheck.calc(-0.0005));
	
	}
			@Test
	public void testOFDiffCheckLower() {
			Assert.assertTrue(diffCheck.calc(-0.005));
	
	}
}