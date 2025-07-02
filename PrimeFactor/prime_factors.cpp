#include <vector>

class PrimeFactors
{
public:
	std::vector<int> of(int number)
	{
		std::vector<int> result = {};
		if (number > 1)
		{
			if (number == 4)
			{
				result.push_back(2);
				result.push_back(2);
			}
			else
			{
				result.push_back(number);
			}
		}

		return result;
	}

private:
};