#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, num, even=0, odd=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num;
        if(num%2==0)
            even++;
        else odd++;
    }
    if (even>odd) cout<<odd<<endl;
    else cout<<even<<endl;
    return 0;
}
