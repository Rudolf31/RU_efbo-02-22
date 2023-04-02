#include "list"

list()
{
	n = 1;
	nums = new int[n];
	nums[0] = 0;
}

list(int N, int* Nums)
{
	n = N;
	nums = Nums;
}

std::ostream& operator<<(std::ostream& stream, list& l)
{
	for (int i = 0; i < N; i++)
	{
		stream << i << " ";
	}
	return stream;
}