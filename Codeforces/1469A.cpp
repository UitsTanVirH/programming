#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        std::string s;
        std::cin >> s;
        if (s.length() % 2 == 0 && s[0] != ')' && s.back() != '(') {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
