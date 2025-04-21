#include <iostream>
using namespace std;

int main()
{
  int prev2 = 0;
  int prev1 = 1;
  for (int i = 2; i < 20; i++)
  {
    int nextFibonacci = prev1 + prev2;
    prev2 = prev1;
    prev1 = nextFibonacci;
    cout << nextFibonacci << " ";
  }
  cout << endl;
  return 0;
}