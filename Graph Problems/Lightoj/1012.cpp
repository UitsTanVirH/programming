#include <bits/stdc++.h>
#define mx 23
using namespace std;
char ch[mx][mx];
int arr[mx][mx], cnt, h, w;

int dfs(int i, int j){
    if(i+1<h && arr[i+1][j]==0 && ch[i+1][j]=='.'){
        cnt++;
        arr[i+1][j]=1;
        dfs(i+1, j);
    }
    if(i-1>=0 && arr[i-1][j]==0 && ch[i-1][j]=='.'){
        cnt++;
        arr[i-1][j]=1;
        dfs(i-1, j);
    }
    if(j+1<w && arr[i][j+1]==0 && ch[i][j+1]=='.'){
        cnt++;
        arr[i][j+1]=1;
        dfs(i, j+1);
    }
    if(j-1>=0 && arr[i][j-1]==0 && ch[i][j-1]=='.'){
        cnt++;
        arr[i][j-1]=1;
        dfs(i, j-1);
    }
    return cnt;
}

int main(){
    int T, t=1, a, b;
    cin>>T;
    while(T--){
        cnt=0;
        cin>>w>>h;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin>>ch[i][j];
                if(ch[i][j]=='@'){
                    a=i; b=j; cnt++;
                }
            }
        }
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++)
                arr[i][j]=0;
        }
        arr[a][b]=1;
        dfs(a, b);
        printf("Case %d: %d\n", t++, cnt);

    }
    return 0;
}
