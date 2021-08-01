#include <bits/stdc++.h>
using namespace std;

void kmp(string p, int m, int *a){
        for(int j=0, i=1; ; ){
            if(i==m)
                break;
            else if(p[i]==p[j]){
                a[i]=j+1;
                i++;
                j++;
            }
            else{
                if(j>0)
                    j=a[j-1];
                else{
                    a[i]=0;
                    i++;
                }
            }
        }
}
int main(){
    string s, p;
    cin>>s>>p;
    int n=s.size();
    int m=p.size();
    int a[m];
    a[0]=0;
    kmp(p, m, a);
    for(int i=0, j=0; i<n; ){
        if(s[i]==p[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Found pattern at: "<<i-j<<endl;
            break;
        }
        else if(s[i]!=p[j]){
            if(j!=0)
                j=a[j-1];
            else
                i=i+1;
        }
    }

    return 0;
}
