#include <bits/stdc++.h>
using namespace std;

void PrintBin(int n)
{
   for (int i = 10; i >= 0; i--)
   {
      cout << ((n >> i) & 1);
   }
   cout << endl;
}

int main()
{
   int n, k;
   cin >> n >> k;

   // Check even or odd
   if (n & 1)
   {
      cout << "Odd" << endl;
   }
   else
   {
      cout << "Even" << endl;
   }

   // Check n is power of 2 or not and it is not applicable for n=0
   if (n & (n - 1))
   {
      cout << "n is not power of 2" << endl;
   }
   else
   {
      cout << "n is power of 2" << endl;
   }

   // check kth bit is set or not
   if (n & (1 << k))
   {
      cout << "kth bit is set" << endl;
   }
   else
   {
      cout << "kth bit is unset" << endl;
   }

   // set the kth bit
   int s = n | (1 << k);
   PrintBin(s);

   // unset the kth bit
   int us = n & ~(1 << k);
   PrintBin(us);

   // Multiply or Divide n by 2^k
   int rs = (n >> k); // Divide
   int ls = (n << k); // Multiply
   cout << rs << endl;
   cout << ls << endl;

   // Find out the (n % (2^k))
   int rem = n & ((1 << k) - 1);
   cout << rem << endl;

   // Swap two number without using temp variable
   int x, y;
   cin >> x >> y;
   cout << "Berfore swap x = " << x << " and y = " << y << endl;
   x = x ^ y;
   y = x ^ y;
   x = x ^ y;
   cout << "After swap x = " << x << " and y = " << y << endl;

   /*
   Property :
      No of set bits in A = X
      No of set bits in B = Y
      No of set bits in A^B = Z

      then
      Z is even if X+Y is even
      Z is odd if X+Y is odd
   */

   // Toggle M=A to M=B by M = A^B^A
   int M = 10;
   // Now I want to put the value of M is 5
   M = 10 ^ 5 ^ 10;
   cout << M << endl;

   /*
    Property :
    A + B = (A ^ B) + 2*(A & B)
    A + B = (A | B) + (A & B)
   */

   /*
    Find the no of set bits of a number n.
    It is only for C++..C++ has a inbuilt fuction for count set bits
    int ct = __builtin_popcount(n); for n is int
    int ct = __builtin_popcountll(n); for n is long long
   */
}