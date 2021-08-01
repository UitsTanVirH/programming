#include<cmath>
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

long long int count_zeroes(long long int b)
{
   if (b < 0) return 0;

 // Compute decimal representation of b
 char s[20];
 sprintf(s, "%lld", b);
 int n = strlen(s);

 // Compute powers of 10
 long long ten[20] = { 1 };
 for (int n = 1; n < 20; n++)
  ten[n] = ten[n-1] * 10;

 // Compute suffixes of b.suf[k] = atoll(s+k).
 long long suf[20];
 suf[n] = 0;
 for (int i = n-1; i >= 0; i--)
  suf[i] = suf[i+1] + (s[i] - '0') * ten[n-i-1];

 long long res = 1, pref = 0;
 for (int k = 1; k < n; k++) {
  pref = pref * 10 + (s[k-1] - '0');
  // pref is equal to integer, formed by first k digits of b.

  if (s[k] != '0')
   res += pref * ten[n-k-1];
  else
   res += (pref - 1) * ten[n-k-1] + suf[k+1] + 1;
 }
 return res;
}

int main()
{
    int i,test;
    long long m,n;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>m>>n;
        printf("Case %d: %lld\n",i,count_zeroes(max(m,n))-count_zeroes(min(m,n)-1));
    }
    return 0;
}
