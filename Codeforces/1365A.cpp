#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin>>arr[i][j];
        }
        int mark=0, cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]==0){
                    if(i-1!=-1){
                        if(arr[i-1][j]==1) mark=1;
                    }
                    if(j-1!=-1){
                        if(arr[i][j-1]==1) mark=1;
                    }
                    if(i+1!=n){
                        if(arr[i+1][j]==1) mark=1;
                    }
                    if(j+1!=m){
                        if(arr[i][j+1]==1) mark=1;
                    }
                    if(mark!=1){
                        arr[i][j]=1;
                        cnt+=1;
                    }
                    mark=0;
                }
            }
        }
        if(cnt%2==0) cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;
    }
    return 0;
}
