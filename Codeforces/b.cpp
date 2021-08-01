#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int cnt=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int a = arr[i], b = arr[j];
                int c = a & b;
                int d = a ^b;
                if(c>=d){
                    //printf("%d %d\n", a & b, a ^ b);
                    cnt++;
                }
            }

        }

        //printf("a&b = %d\n", a & b);
        cout<<cnt<<endl;

    }
    // a = 5(00000101), b = 9(00001001)


    // The result is 00000001
    //printf("a&b = %d\n", a & b);

    return 0;
}
