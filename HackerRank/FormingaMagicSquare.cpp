#include <bits/stdc++.h>
using namespace std;

int mp[30];
int main(){
    int arr[3][3], cnt=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cin>>arr[i][j];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cnt+=arr[i][j];
        mp[cnt]++;
        cnt=0;
    }
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++)
            cnt+=arr[i][j];
        mp[cnt]++;
        cnt=0;
    }
    for(int i=0, j=0; i<3; i++, j++){
        cnt+=arr[i][j];
    }
    mp[cnt]++;
    int mark=0, pos;
    for(int i=0; i<30; i++){
        if(mp[i]>mark){
            mark=mp[i];
            pos=i;
        }
    }
    int ans=0;
    for(int i=0; i<30; i++){
        if(mp[i]>0 && i!=pos) ans+=abs(pos-i);
    }
    cout<<ans<<endl;
    return 0;
}
