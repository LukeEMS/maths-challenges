#include <gtest/gtest.h>
#include <vector>
#include "Circle.h"

// Test data structure
struct Case
{
    int x;
    int y;
    bool expected;
};

// Parameterized test class
class CheckInsideTests : public ::testing::TestWithParam<Case>
{
};

// Test method
TEST_P(CheckInsideTests, ReturnsCorrectResult)
{
    // Arrange
    Circle circ;

    circ.centerCoordinates = {0, 0};

    auto testCase = GetParam();

    // Act
    bool result = circ.CheckCoordsAreWithinCircle(testCase.x, testCase.y);

    // Assert
    EXPECT_EQ(result, testCase.expected)
        << "Failed for x=" << testCase.x
        << " y=" << testCase.y;
}

// Input data
INSTANTIATE_TEST_SUITE_P(
    CircleTests,
    CheckInsideTests,
    ::testing::Values(
        Case{0, 0, true},     // center
        Case{1, 1, true},     // edge
        Case{0.5, 0.5, true}, // inside
        Case{6, 0, false},    // outside
    )
);