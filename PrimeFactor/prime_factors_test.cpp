#include "gmock/gmock.h"
#include "prime_factors.cpp"

TEST(PrimeFactors, 0f1)
{
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, 0f2)
{
	PrimeFactors prime_factor;
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}