#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int> >v;
    int n, m, mark=0, mov=0;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int arr2[n][m];
    memset(arr2, 0, sizeof arr2);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i+1!=n && j+1!=m){
                if(arr[i][j]==1 && arr[i][j+1]==1 && arr[i+1][j]==1 && arr[i+1][j+1]==1){
                    arr2[i][j]=1;
                    arr2[i+1][j]=1;
                    arr2[i][j+1]=1;
                    arr2[i+1][j+1]=1;
                    mov++;
                    v.push_back(make_pair(i+1, j+1));
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=arr2[i][j]){
                mark=1;
                break;
            }
        }
    }
    if(!mark){
        cout<<mov<<endl;
        int sz=v.size();
        for(int i=0; i<sz; i++) cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}

//Bx,y , Bx,y+1, Bx+1,y and Bx+1,y+1

