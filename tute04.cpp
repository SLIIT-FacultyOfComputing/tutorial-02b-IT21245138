/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int x;
  no = 1;
  for(x = no; x >= 1; x--)
    {
      no = no * x;
    }
  return no;
}
long nCr(int n, int r)
{
  int y, nCr;
  for(y = r; y >= 1; y--)
    {
      r = r * y;
    }
  nCr = n / r * (n - r);
  return nCr;
}
