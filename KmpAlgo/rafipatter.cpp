#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int a[n], i=0, j=-1;
    a[i]=-1;
    while(i<n){
        while(j>=0 && s[i]!=s[j])
            j=a[j];
        i++;
        j++;
        a[i]=j;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
