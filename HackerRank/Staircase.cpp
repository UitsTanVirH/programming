#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=n-1, star=1;
    for(int i=0; i<n; i++){
        for(int j=space; j>=1; j--) cout<<" ";
        for(int k=1; k<=star; k++) cout<<"#";
        space--;
        star++;
        cout<<endl;
    }
    return 0;
}
