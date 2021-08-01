#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, b, h, w, ans=100000000;
    while(scanf("%d", &n)!=EOF){
        cin>>b>>h>>w;
        long long int price, arr[w];
        for(int i=0; i<h; i++){
            long long int mark=0, ans2=-1;
            cin>>price;

            for(int j=0; j<w; j++){
                cin>>arr[j];
            }

            for(int j=0; j<w; j++){
                if(arr[j]<n){
                    mark=-1;
                    break;
                }
            }
            if(mark==0){
                if(price*n<=b)
                    ans2=price*n;
            }
            if(ans2>0){
                if(ans2<ans)
                ans=ans2;
            }

        }
        if(ans!=100000000)
            cout<<ans<<endl;
        else cout<<"stay home"<<endl;
        ans=100000000;

    }
    return 0;
}
