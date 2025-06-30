/******************************************************************************
 * @file ErrorHandler_test.cpp
 * @brief Unit tests for the ErrorHandler project using Google Test.
 *****************************************************************************/

#include "gtest/gtest.h"

extern "C" {
    #include "ErrorHandler.h"
}

//------------------------------------------------------------------------------
// Basic Init Test
//------------------------------------------------------------------------------
TEST(ErrorHandler_BasicTest, InitReturnsE_OK) {
    EXPECT_EQ(ErrorHandler_init(), E_OK);
}

/*
//------------------------------------------------------------------------------
// Example: Test Fixture (TEST_F)
//------------------------------------------------------------------------------
class ErrorhandlerTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(ErrorhandlerTest, InitTest) {
    EXPECT_EQ(ErrorHandler_init(), E_OK);
}

//------------------------------------------------------------------------------
// More tests can go here
*/
