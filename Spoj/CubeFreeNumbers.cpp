#include <bits/stdc++.h>
#define mx 1000007
using namespace std;

bool mark[mx];
int sq[107], ans[mx];
void call(){
    for(int i=2; i<101; i++){
        sq[i]=pow(i, 3);
    }
    for(int i=2; i<101; i++){
        for(int j=sq[i]; j<=1000000; j+=sq[i]){
            mark[j]=1;
        }
    }
    int alt=1;
    for(int i=1; i<1000; i++){
        if(mark[i]==0){
            ans[alt]=i;
            alt++;
        }
        else alt--;
        //cout<<ans[alt]<<endl;
    }
}

int main(){
    call();
    for(int i=1; i<=100; i++)
        cout<<i<<" = "<<mark[i]<<" ";

    return 0;
}
