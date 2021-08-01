#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a=n;
    int flag=0, cnt=0;
    if(n==m)
        cout<<"0"<<endl;
    else{
        for(int i=0; ; i++){
            n=n*2;
            cout<<n<<endl;
            if(n>m)
                break;
            else if(n==m){
                flag=1;
                cnt++;
                //cout<<cnt<<endl;
                break;
            }
            cnt++;
        }
        if(flag!=1){
            cnt=0;
            for(int i=0; ; i++){
                a*=3;
                if(a>m)
                    break;
                else if(a==m){
                    flag=1;
                    cnt++;
                    break;
                }
                cnt++;
            }
        }
        if(flag==1)
            cout<<cnt<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
