#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    map<string, string> mp;
    string a, b;
    for(int i=0; i<m; i++){
    	cin>>a>>b;
    	if(b.length()<a.length())
    		mp[a]=b;
    	else
    		mp[a]=a;
    }
    for (int i=0; i<n; i++){
    	cin>>a;
    	cout<<mp[a]<<" ";
    }
    cout<<endl;;
    return 0;
}
