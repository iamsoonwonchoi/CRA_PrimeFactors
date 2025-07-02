#include "gmock/gmock.h"
#include "prime_factors.cpp"

class PrimeFixture : public testing::Test
{
public:
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
};

TEST_F(PrimeFixture, 0f1)
{
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, 0f2)
{
	expected.push_back(2);
	EXPECT_EQ(expected, prime_factor.of(2));
}