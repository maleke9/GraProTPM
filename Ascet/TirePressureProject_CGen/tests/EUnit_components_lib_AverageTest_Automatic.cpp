// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_lib_average_Automatic.h"
	#include "components_lib_AverageTest_Automatic.h"
}

namespace {
	// test fixture class
	class components_lib_AverageTest_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_lib_AverageTest_Automatic_SubClass, components_lib_AverageTest_Automatic_testavgOn4Inputs) {
		ASSERT_TRUE(components_lib_average_Automatic_avgOn4Inputs(1.0F, 1.0F, 1.0F, 1.0F) == 1.0F);
		ASSERT_FALSE(components_lib_average_Automatic_avgOn4Inputs(1.0F, 2.0F, 3.0F, 4.0F) == 20.0F);
	}

}