#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v;
    cin>>n>>v;
    long long int j=1, cost=0;
    if(n-1<=v)
        cout<<n-1<<endl;
    else{
        n--;
        for(int i=0; ; i++){
            if(n-v>0)
                cost+=v*j;
            else{
                cost+=n*j;
                break;
            }
            n=n-v;
            j++;
        }
        cout<<cost<<endl;
    }
    return 0;
}
