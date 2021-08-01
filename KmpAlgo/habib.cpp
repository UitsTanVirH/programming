#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int arr[n];
    arr[0]=0;
    for(int j=0, i=1; ; ){
        if(i==n)
            break;
        else if(s[i]==s[j]){
            arr[i]=j+1;
            i++;
            j++;
        }
        else{
            if(j>0)
                j=arr[j-1];
            else{
                arr[i]=0;
                i++;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;

}
