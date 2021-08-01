#include <bits/stdc++.h>
#define max 1000011
using namespace std;

void kmp(char *p, int m, int *a){
    int i=0, j=-1;
    a[i]=-1;
    while(i<m){
        while(j>=0 && p[i]!=p[j])
            j=a[j];

        i++;
        j++;
        a[i]=j;
    }
}
int main(){
    int T, t=1;
    scanf("%d", &T);
    while(T--){
        char s[max], p[max];
        scanf("%s", s);
        scanf("%s", p);
        int n=strlen(s);
        int m=strlen(p);
        int a[m], ans=0;
        kmp(p, m, a);
        for(int i=0, j=0; i<n; ){
            while(j>=0 && s[i]!=p[j])
                j=a[j];
            i++;
            j++;
            if(j==m){
                ans++;
                j=a[j];
            }
        }
        printf("Case %d: %d\n", t, ans);
        t++;

    }

    return 0;
}

