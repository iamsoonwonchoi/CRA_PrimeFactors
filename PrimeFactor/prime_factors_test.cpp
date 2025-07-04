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

TEST_F(PrimeFixture, 0f3)
{
	expected.push_back(3);
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, 0f4)
{
	expected = { 2,2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, 0f6)
{
	expected = { 2,3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, 0f9)
{
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, 0f12)
{
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}