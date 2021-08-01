#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, x, a, ss=0;
    cin>>n>>x;
    long long int sum=x;
    for(int i=0; i<n; i++){
        char c;
        cin>>c>>a;
        if(c=='+')
            sum+=a;
        else{
            if(sum>=a)
                sum-=a;
            else
                ss++;
        }
    }
    cout<<sum<<" "<<ss<<endl;
    return 0;
}
