#include <iostream>
using namespace std;

int i = 2;

void fibonacci(int prev1, int prev2)
{
	i++;
	if (i <= 19)
	{
		int nextFibonacci = prev1 + prev2;
		cout << nextFibonacci << endl;
		fibonacci(nextFibonacci, prev1);
	}
	else
	{
		return;
	}
}

int main()
{
	cout << 0 << endl;
	cout << 1 << endl;

	fibonacci(1, 0);

	return 0;
}
