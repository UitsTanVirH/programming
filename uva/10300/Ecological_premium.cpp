#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    while(cin>>T){
        while(T--){
            long long int f, space, animals, eco, sum=0;
            cin>>f;
            for(int i=0; i<f; i++){
                cin>>space>>animals>>eco;
                sum+=space*eco;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
