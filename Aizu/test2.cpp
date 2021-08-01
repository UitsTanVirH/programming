#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
struct Point { long double px, py; };
long double crs(const Point& a, const Point& b) {
	return a.px * b.py - a.py * b.px;
}
Point crp(Point a1, Point a2, Point b1, Point b2) {
	Point c; c.px = b2.px - b1.px; c.py = b2.py - b1.py;
	Point d; d.px = a1.px - b1.px; d.py = a1.py - b1.py;
	Point e; e.px = a2.px - b1.px; e.py = a2.py - b1.py;
	Point f; f.px = a2.px - a1.px; f.py = a2.py - a1.py;
	long double d1 = abs(crs(c, d));
	long double d2 = abs(crs(c, e));
	f.px *= (d1 / (d1 + d2));
	f.py *= (d1 / (d1 + d2));
	Point g; g.px = a1.px + f.px; g.py = a1.py + f.py;
	return g;
}
int main() {
	int N;
	Point A1, A2, B1, B2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A1.px >> A1.py >> A2.px >> A2.py;
		cin >> B1.px >> B1.py >> B2.px >> B2.py;
		Point G = crp(A1, A2, B1, B2);
		printf("%.1919Lf %.1919Lf\n", G.px, G.py);
	}
	return 0;
}

