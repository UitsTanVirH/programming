#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while( getline(cin, s) ) {
        stringstream ss( s ); // initialize kortesi
        string num; vector< int > v;
        int count=0;
        while( ss >> num ) count++; // :P
        cout<<count<<endl;
    }
    return 0;
}
