#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;

int main(){

	double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	double vx = x2 - x1, vy = y2 - y1;
	double norm = vx * vx + vy * vy;

	int q;
	cin >> q;

	for(int loop = 0; loop < q; loop++){
		double x, y, vx2, vy2;
		cin >> x >> y;
		vx2 = x - x1;
		vy2 = y - y1;
		double inn = vx * vx2 + vy * vy2;
		double qx = x1 + vx * inn / norm;
		double qy = y1 + vy * inn / norm;

		printf("%.10f %.10f\n", 2 * qx - x, 2 * qy - y);
	}

	return 0;
}
