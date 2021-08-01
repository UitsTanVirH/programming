#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    string s;
    cin>>s;
    n=s.size();
    for(i=1; i<n; i++)
        if(islower(s[i])) break;
    if(i==n) {
        for(i=0; i<n; i++)
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
    }
    cout<<s<<endl;

    return 0;
}

