#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int left, right;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a==0)
            left=i+1;
        else right=i+1;
    }
    cout<<min(left, right)<<endl;
    return 0;
}
