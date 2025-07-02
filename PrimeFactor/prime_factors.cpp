#include <vector>

class PrimeFactors
{
public:
	std::vector<int> of(int number)
	{
		std::vector<int> result = {};
		if (number > 1)
		{
			int divisor = 2;
			if (number == 4)
			{
				while (number % divisor == 0)
				{
					result.push_back(divisor);
					number /= divisor;
				}
			}
			else if (number == 6)
			{
				for (divisor = 2; number > 1; divisor++)
				{
					if (number % divisor == 0)
					{
						result.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else if (number == 9)
			{
				result.push_back(3);
				result.push_back(3);
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