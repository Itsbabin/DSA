#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int a[] = {-4 , - 2 , 1 , -3};
  long long int n = 4;
  long long int k = 2;

  long long maxans = INT_MIN;
  
  for (long long int f = 0; f < n; f++)
  {
    long long int ans = 0;
   long long int tempSum = 0;

  for (long long int i = 0; i < k; i++)
  {
    tempSum += a[i];
  }

  ans = tempSum;

  for (long long int i = 1; (k + i -1) < n; i++)
  {
    long long int fst = i -1;
    long long int snd = i +k -1;
    tempSum = tempSum - a[fst] + a[snd];

    ans = max(tempSum, ans);
  }
    maxans = max(ans , maxans);
  }

     cout  << maxans  << endl;

  return 0;
}