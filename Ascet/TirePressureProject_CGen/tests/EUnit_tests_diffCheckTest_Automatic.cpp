// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_lib_diffCheck_Automatic.h"
	#include "tests_diffCheckTest_Automatic.h"
}

namespace {
	// test fixture class
	class tests_diffCheckTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(tests_diffCheckTest_Automatic_SubClass, tests_diffCheckTest_Automatic_testOFDiffCheckInBoundNegative) {
		ASSERT_FALSE(components_lib_diffCheck_Automatic_calc(-0.0005F));
	}

	TEST_F(tests_diffCheckTest_Automatic_SubClass, tests_diffCheckTest_Automatic_testOFDiffCheckInBoundPositive) {
		ASSERT_FALSE(components_lib_diffCheck_Automatic_calc(0.0005F));
	}

	TEST_F(tests_diffCheckTest_Automatic_SubClass, tests_diffCheckTest_Automatic_testOFDiffCheckLower) {
		ASSERT_TRUE(components_lib_diffCheck_Automatic_calc(-0.005F));
	}

	TEST_F(tests_diffCheckTest_Automatic_SubClass, tests_diffCheckTest_Automatic_testOFDiffCheckUpper) {
		ASSERT_TRUE(components_lib_diffCheck_Automatic_calc(0.005F));
	}

}