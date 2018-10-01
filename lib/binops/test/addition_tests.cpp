//

#include <stdio.h>
#include <gtest/gtest.h>
#include "../include/binops.hpp"

using namespace BinOps;

TEST(AdditionTests, TestItIsNotNil)
{
	// when
	Addition a = Addition();

	// then
	ASSERT_NE(&a, nullptr);
}

TEST(AdditionTests, TestItSetsTheLHS)
{
	// given
	Addition a = Addition();

	// when
	a.setLHS(3);

	// then
	ASSERT_EQ(a.getLHS(), 3);
}

TEST(AdditionTests, TestItSetsTheRHS)
{
	// given
	Addition a = Addition();

	// when
	a.setRHS(100);

	// then
	ASSERT_EQ(a.getRHS(), 100);
}

TEST(AdditionTests, TestItGivesTheExpectedResultFor3And5)
{
	Addition a = Addition();
	a.setLHS(3);
	a.setRHS(5);
	int result = a.perform();
	ASSERT_EQ(result, 8);
}

TEST(AdditionTests, TestItGivesTheExpectedResultFor1And2)
{
	Addition a = Addition();
	a.setLHS(1);
	a.setRHS(2);
	int result = a.perform();
	ASSERT_EQ(result, 3);
}