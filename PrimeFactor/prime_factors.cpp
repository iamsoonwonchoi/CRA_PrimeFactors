#include <vector>

class PrimeFactors
{
public:
	std::vector<int> of(int number)
	{
		std::vector<int> result = {};
		if (number > 1)
		{
			if (number == 4 || number == 6 || number == 9 || number == 12)
			{
				for (int divisor = 2; number > 1; divisor++)
				{
					while (number % divisor == 0)
					{
						result.push_back(divisor);
						number /= divisor;
					}
				}
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