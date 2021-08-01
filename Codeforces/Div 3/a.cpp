#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, L, l, v, r;
    cin>>t;
    while(t--){
        cin>>L>>v>>l>>r;
        int ans=0, temp_ans=0;
        if(r-l>=100000000){
            for(int i=1; i<l; i++){
                if(i%v==0)
                    ans++;
            }
            for(int i=r+1; i<=L; i++){
                if(i%v==0)
                    ans++;
            }
        }
        else{
            if(l==r){
                if(l%v==0)
                    temp_ans=1;
            }
            else {
                int start=l-(l%v);
                for(int i=start; i<=r; i+=v){
                    if(i%v==0){
                        if(i>=l)
                            temp_ans++;
                    }
                }
            }
            ans=L/v-temp_ans;
        }

        cout<<ans<<endl;

    }
    return 0;
}
