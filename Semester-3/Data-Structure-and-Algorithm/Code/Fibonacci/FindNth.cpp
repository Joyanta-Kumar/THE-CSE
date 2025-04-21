#include <iostream>
using namespace std;

int getFibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return getFibonacci(n-1) + getFibonacci(n-2);
  }
}

int main()
{
  cout << getFibonacci(10) << endl;
  return 0;
}