#include <bits/stdc++.h>
using namespace std;

bool arr1[1007], arr2[1007];
int main(){
    string s, t;
    cin>>s>>t;
    int lenA, lenB, sz, mark=0;
    lenA=s.size(), lenB=t.size();
    if(lenA!=lenB)
        cout<<"No"<<endl;
    else {
        for(int i=0; i<lenA; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                arr1[i]=1;
        }
        for(int i=0; i<lenB; i++){
            if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                arr2[i]=1;
        }
        for(int i=0; i<lenA; i++){
            if(arr1[i]!=arr2[i])
                mark=1;
        }
        if(mark)
            cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}
