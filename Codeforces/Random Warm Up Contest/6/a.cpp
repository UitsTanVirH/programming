#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    if(a==0)
        cout<<b<<endl;
    else
    {
       if(n>a+b)
        cout<<b+1<<endl;
        else
        cout<<b<<endl;

    }

    return 0;

}

