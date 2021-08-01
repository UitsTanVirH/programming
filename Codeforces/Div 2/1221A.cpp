#include <bits/stdc++.h>
using namespace std;

int main(){
    //1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048
    int q;
    cin>>q;
    while(q--){
        int n, mark=0,  a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1) a++;
        else if(arr[i]==2) b++;
        else if(arr[i]==4) c++;
        else if(arr[i]==8) d++;
        else if(arr[i]==16) e++;
        else if(arr[i]==32) f++;
        else if(arr[i]==64) g++;
        else if(arr[i]==128) h++;
        else if(arr[i]==256) i++;
        else if(arr[i]==512) j++;
        else if(arr[i]==1024) k++;
        else if(arr[i]==2048) l++;
        }


        if(l>0) mark=1;
        else if(k>=1) mark=1;
        else if(j>=2) mark=1;
        else if(i>=3) mark=1;
        else if(h>=4) mark=1;
        else if(g>=5) mark=1;
        else if(f>=6) mark=1;
        else if(e>=7) mark=1;
        else if(d>=8) mark=1;
        else if(c>=9) mark=1;
        else if(b>=10) mark=1;
        else if(a>=11) mark=1;
        if(mark==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

