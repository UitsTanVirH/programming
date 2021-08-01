#include <bits/stdc++.h>
#define max 100000
using namespace std;
bool arr[max];

int main(){
    vector<int>v;
    int arr2[max];
    for(int i=0; i<max; i++)
        arr2[i]=0;

    int a;
    while(scanf("%d", &a)!=EOF){
        if(arr[a]==0){
            v.push_back(a);
            arr[a]++;
        }
        arr2[a]++;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "<<arr2[v[i]]<<endl;
    }

    return 0;

}
