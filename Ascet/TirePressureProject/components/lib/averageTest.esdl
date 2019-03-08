package components.lib;

import assertLib.Assert;

import components.lib.average;

static class AverageTest {
	average test;

	@Test
	public void testavgOn4Inputs() {
		
			Assert.assertTrue(test.avgOn4Inputs(1.0,1.0,1.0,1.0) == 1.0);
			Assert.assertFalse(test.avgOn4Inputs(1.0,2.0,3.0,4.0) == 20.0);
		}
}
