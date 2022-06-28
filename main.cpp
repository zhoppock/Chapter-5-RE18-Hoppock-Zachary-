#include <iostream>
using namespace std;

void tricky_swap(int& a, int& b)
{
   a = a - b;
   b = a + b;
   a = b - a;
}

int main()
{
  int a = 2;
  int b = 3;
  int c = 5;
  tricky_swap(a, b);
  cout << a << " " << b << endl;
  tricky_swap(c, c);
  cout << c << " " << c << endl;

}