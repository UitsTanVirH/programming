#include<bits/stdc++.h>
using namespace std;
int n;
string s;

int main() {
	cin >> n >> s;
	bool ok = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (i < s.length() - 1 && !ok && s[i + 1] < s[i]) {
			ok = 1;
		} else {
			if (!(i == s.length() - 1 && !ok))
				cout << s[i];
		}

	}
	return 0;
}
