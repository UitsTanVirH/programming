#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-8, PI = acos(-1);
inline bool eq(double a,double b){ return abs(b - a) < EPS; }
#define curr(P,i) P[i]
#define next(P,i) P[(i+1)%P.size()]
#define prev(P,i) P[(i+P.size()-1) % P.size()]
enum { OUT, ON, IN };

struct Geometory { // Geometory Library
  struct Point {
    double x, y;
    Point(){};
    Point(double x,double y):x(x),y(y){};
    Point operator+(const Point& b) const { return Point(x + b.x,y + b.y); }
    Point operator-(const Point& b) const { return Point(x - b.x,y - b.y); }
    Point operator*(const double b) const { return Point(x * b,y * b); }
    Point operator*(const Point& b) const { return Point(x * b.x - y * b.y,x * b.y + y * b.x); }
    Point operator/(const double b) const { return Point(x / b,y / b); }
    bool operator< (const Point& b) const { return x != b.x ? x < b.x : y < b.y; }
    bool operator==(const Point& b) const { return eq(x,b.x) && eq(y,b.y); }
    double norm(){ return x * x + y * y; }
    double arg(){ return atan2(x,y); }
    double abs(){ return sqrt(norm()); }
    Point rotate(double theta){ return Point(cos(theta) * x - sin(theta) * y,sin(theta) * x + cos(theta) * y); }
    Point rotate90(){ return Point(-y,x); }
    friend ostream& operator<<(ostream& os, Point& p){ return os<<"("<<p.x<<","<<p.y<<")"; }
    friend istream& operator>>(istream& is, Point& a){ return is>>a.x>>a.y; }
  };

  struct Line {
    Point a, b;
    Line(){};
    Line(Point a,Point b):a(a),b(b){};
  };
  struct Segment {
    Point a, b;
    Segment(){};
    Segment(Point a,Point b):a(a),b(b){};
  };
  struct Circle {
    Point p; double r;
    Circle(){};
    Circle(Point p, double r) : p(p),r(r){};
  };
  typedef vector< Point > Polygon;
  typedef vector< Segment > Segments;
  typedef vector< Line > Lines;
  typedef vector< Circle > Circles;
  typedef pair< Point, Point > PointPoint;

  double cross(const Point& a,const Point& b){
    return a.x * b.y - a.y * b.x;
  }
  double dot(const Point& a,const Point& b){
    return a.x * b.x + a.y * b.y;
  }

  int ccw(const Point& a,Point b,Point c){
    b = b - a, c = c - a;
    if(cross(b,c) > 0)    return +1;  // a → b で 反時計方向におれて c
    if(cross(b,c) < 0)    return -1; // a → b で 時計方向におれて c
    if(dot(b,c) < 0)      return +2;  // c -- a -- bで一直線上
    if(b.norm() < c.norm()) return -2; // a -- b -- cで一直線上
    return 0;  // a -- c -- bで一直線上
  }
  Point Projection(const Line& l, const Point& p){
    double t = dot( p - l.a, l.a - l.b) / (l.a - l.b).norm();
    return l.a + (l.a - l.b) * t;
  }
  Point Projection(const Segment& l, const Point& p){
    double t = dot( p - l.a, l.a - l.b) / (l.a - l.b).norm();
    return l.a + (l.a - l.b) * t;
  }
  Point Reflection(const Line& l, const Point& p){
    return p + (Projection( l, p) - p) * 2.0;
  }

  double Distance( const Line& l,const Point& p) { //OK
    return (p - Projection( l, p)).abs();
  }

  bool Intersect(const Line& l, const Line& m){
    return abs(cross(l.b - l.a, m.b - m.a)) > EPS || abs(cross(l.b-l.a, m.b-l.a)) < EPS;
  }
  bool Intersect(const Line& l, const Segment& s){
    return cross( l.b - l.a, s.a - l.a) * cross( l.b - l.a, s.b - l.a) < EPS;
  }
  bool Intersect(const Line& l, const Point& p){
    return abs(ccw(l.a, l.b, p)) != -1;
  }
  bool Intersect(const Segment& s, const Segment& t){
    return ccw(s.a, s.b, t.a) * ccw(s.a, s.b, t.b) <= 0 && ccw(t.a, t.b, s.a) * ccw(t.a, t.b, s.b) <= 0;
  }
  bool Intersect(const Segment& s, const Point& p){
    return ccw(s.a, s.b, p) == 0;
  }
  bool Intersect(const Circle& c,const Line& l){
    return Distance( l, c.p) <= c.r + EPS;
  }
  bool Intersect(const Circle& c,const Point& p){
    return abs( ( p - c.p).abs() - c.r ) < EPS;
  }
  int Intersect(const Circle& c, const Segment& l){
    if( (Projection( l, c.p) - c.p).norm() - c.r * c.r > EPS) return 0;
    const double d1 = ( c.p - l.a).abs(), d2 = ( c.p - l.b).abs();
    if( d1 < c.r + EPS && d2 < c.r + EPS) return 0;
    if( d1 < c.r - EPS && d2 > c.r + EPS || d1 > c.r + EPS && d2 < c.r - EPS ) return 1;
    const Point h = Projection( l, c.p);
    if( dot( l.a - h, l.b - h) < 0) return 2;
    return 0;
  }
  bool Intersect(const Circle& a,const Circle& b){
    return ( ( a.p - b.p).norm() - ( a.r + b.r) * ( a.r + b.r) < EPS) &&
      ( ( a.p - b.p).norm() - ( a.r - b.r) * ( a.r - b.r) > -EPS);
  }
  double Distance(const Segment& s,const Point& p){
    Point r = Projection(s, p);
    if ( Intersect( s, r)) return ( r - p).abs();
    return min( ( s.a - p).abs(), ( s.a - p).abs());
  }
  double Distance(const Segment& a,const Segment& b){
    if(Intersect( a, b)) return 0;
    return min( min( Distance( a, b.a), Distance( a, b.b)), min( Distance( b, a.a), Distance( b, a.b)));
  }
  double Distance(const Line& l,const Line& m) {
    return Intersect( l, m) ? 0 : Distance( l, m.a);
  }
  double Distance(const Line& l,const Segment& s) { //OK
    if (Intersect(l, s)) return 0;
    return min(Distance(l, s.a), Distance(l, s.b));
  }
  double Distance(const Point& a,const Point& b){ //OK
    return ( a - b).abs();
  }
  Point Crosspoint(const Segment& l,const Segment& m) { //OK
    double A = cross(l.b - l.a, m.b - m.a);
    double B = cross(l.b - l.a, l.b - m.a);
    if (abs(A) < EPS && abs(B) < EPS) return m.a; // same line
    return m.a + (m.b - m.a) * B / A;
  }
  PointPoint Crosspoint(const Circle& c,const Line l){
    Point hp = Projection( l, c.p), h =  hp - c.p;
    const double d2 = h.norm();
    Point v = ( l.b - l.a) * sqrt( c.r * c.r - d2) / ( l.b - l.a).abs();
    return PointPoint(hp - v, hp + v);
  }
  PointPoint Crosspoint(const Circle& c,const Segment& l) {
    Line aa = Line( l.a, l.b);
    if(Intersect(c, l) == 2) return Crosspoint(c, aa);
    PointPoint ret = Crosspoint(c, aa);
    if(dot(l.a - ret.first, l.b - ret.first) < 0) ret.second = ret.first;
    else ret.first = ret.second;
    return ret;
  }
  PointPoint Crosspoint(const Circle& c1,const Circle& c2){ //OK
    double d = (c1.p - c2.p).abs();
    double s = (c1.r + c2.r + d) / 2;
    double S = sqrt( s * ( s - c1.r) * ( s - c2.r) * ( s - d));
    double h = 2 * S / d;
    Point v = ( c2.p - c1.p) / ( c2.p - c1.p).abs();
    double m = sqrt( c1.r * c1.r - h * h);
    return PointPoint( c1.p + v * m + Point(0,1) * h * v, c1.p + v * m - Point(0,1) * h * v);
  }
  bool parallel(const Segment& a,const Segment& b){
  return abs( cross( a.b - a.a, b.b - b.a)) < EPS;
  }
  bool orthogonal(const Segment& a,const Segment& b){
    return dot( a.a - a.b, b.a - b.b) < EPS;
  }
  int Contains(const Polygon& Q,const Point& p){
    bool in = false;
    for(int i = 0 ; i < Q.size() ; i++ ){
      Point a = curr(Q,i) - p, b = next(Q,i) - p;
      if(a.y > b.y) swap(a,b);
      if(a.y <= 0 && 0 < b.y && cross(a,b) < 0) in = !in;
      if(cross(a,b) == 0 && dot(a,b) <= 0) return ON;
    }
    return in ? IN : OUT;
  }
  bool Contains(const Circle& c,const Point& p){
    return ( c.p - p).abs() < c.r + EPS;
  }
  double Area2(const Polygon& p){ //OK
    double A = 0;
    for (int i = 0; i < p.size(); ++i){
      A += cross(curr(p, i), next(p, i));
    }
    return A;
  }
};

Geometory geo;
typedef Geometory::Point P;
typedef Geometory::Line L;
typedef Geometory::Segment S;
typedef Geometory::Circle C;

int main(){
  int x0, y0, x1, y1;
  cin >> x0 >> y0 >> x1 >> y1;
  L line = L( P( x0, y0), P( x1, y1));

  int q;
  cin >> q;
  while(q--){
    int x, y;
    cin >> x >> y;
    P ans =  geo.Reflection( line, P( x, y));
    cout << fixed << setprecision(8) << ans.x << " " << ans.y << endl;
  }
  return 0;

}
