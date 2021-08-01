#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
  scanf("%d%d%d", &n, &a, &b);
  int v[n+1];
  for (int i = 1; i <= n; ++i) scanf("%1d", &v[i]);
  printf("%d\n", v[a]==v[b]?0:1);
  return 0;
}
