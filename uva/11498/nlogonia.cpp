#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, d;
	while(scanf("%d", &n) && n!=0) {
		cin>>a>>b;
		while(n--){
			cin>>c>>d;
			if(c==a || d==b)
				cout<<"divisa";
			else if(c<a && d>b)
				cout<<"NO";
			else if(c>a && d>b)
				cout<<"NE";
			else if(c>a && d<b)
				cout<<"SE";
			else if(c<a && d<b)
				cout<<"SO";
			cout<<endl;

		}
	}
	return 0;
}
