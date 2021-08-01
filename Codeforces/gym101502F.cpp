#include <bits/stdc++.h>
#define i64 long long
using namespace std;

map<int, int>mpg;
void func(){
    for(int i=1; i<=63; i++){
        i64 a=ceil(pow(2, i-1));
        mpg[a]=i-1;
    }
    return;
}

int main(){
    int T, l, r;
    cin>>T;
    while(T--){
        int n, q;
        cin>>n>>q;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        while(q--){
            cin>>l>>r;
        }

    }
    return 0;
}
