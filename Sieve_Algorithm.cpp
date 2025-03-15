// Sieve Algorithm ----->
// Time Complexity --> 0(N*log(log(N)))
// Find the all prime numbers from Lower limit to Upper limit using Sieve Algorithm

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, true);

int main()
{
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i < N; i++)
  {
    if (isPrime[i])
    {
      for (int j = 2 * i; j < N; j += i)
      {
        isPrime[j] = false;
      }
    }
  }

  int lw, up;
  cout << "Enter the Lower limit : ";
  cin >> lw;
  cout << "Enter the Upper limit : ";
  cin >> up;
  for (int i = lw; i <= up; i++)
  {
    if (isPrime[i])
    {
      cout << i << " is Prime" << endl;
    }
    else
    {
      cout << i << " is not Prime" << endl;
    }
  }
}