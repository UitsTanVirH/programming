
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define db double
#define ull unsigned long long
#define MIN INT_MIN
#define MAX INT_MAX
#define all(x) (x).begin(), (x).end()
#define ii pair <int,int>
#define iii pair <int,ii>
#define pll pair <ll,ll>
#define plll pair <ll,pll>
#define ff first
#define ss second
#define minQueue priority_queue <int,vector<int>,greater<int> >
#define maxQueue priority_queue<int,vector<int>,less<int> >
#define pb push_back
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define GCD(x,y) __gcd((x), (y))
#define LCM(x,y) ((x / GCD((x), (y))) * y)
#define loop(a,n) for(int i=a; i<n; i++)
#define mem(x,y) memset((x), (y), sizeof (x));
#define Case int T; scanf("%d", &T); for(int cas = 1; cas <= T; ++cas)
#define pf printf
#define sf scanf
#define Accepted 0
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define powerOfTwo(x) (x && !(x & (x - 1)))
#define Iterator(type) type <int> :: iterator
#define mapIterator map <int,int> :: iterator //it->ff it->ss
using namespace std;

/*----------------------Graph Moves----------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1}; int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
/*------------------------------------------------*/


/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

const int MAXN =1.5e7 + 10; // MAXN=1.5 * 10^7 +10
const double eps = (double)1e-8; // eps = 10^-8
const double PI = acos(-1.0);
inline bool eq(double a,double b){ return abs(b - a) < eps; }

inline double getdouble(){
    double x;
    scanf("%lf",&x);
    return x;
}
#define DB getdouble()

inline int getint(){
    int x;
    scanf("%d", &x);
    return x;
}
#define II getint()

inline long long getlonglong(){
    long long x;
    scanf("%lld", &x);
    return x;
}
#define LL getlonglong()

inline unsigned long long getunsignedlonglong(){
    unsigned long long x;
    scanf("%llu", &x);
    return x;
}
#define ULL getunsignedlonglong()

//_________________________________________________________________________________________________________________

__


struct point{
    double x,y;
    point(){}
    point(double i, double j){
        x=i; y=j;
    }

    point operator - (point b){
        point c;
        c.x=x-b.x;
        c.y=y-b.y;
        return c;
    }

    double operator * (point b){ //dot product
        return x*b.x+y*b.y;
    }

    double operator ^ (point b){ //cross product
        return x*b.y-y*b.x;
    }

    bool operator < (point b){
        return (x<b.x || (x==b.x && y<b.y));
    }

    bool operator == (point b){
        return (eq(x,b.x) && eq(y,b.y)); //check line 50 and 52
    }

    double norm(){
        return x*x+y*y;
    }

    double abs(){
        return sqrt(norm()); //value of a vector
    }

    point rotate(double theta){ //rotate a point by theta radian around origin point
        point c;
        c.x=cos(theta)*x - sin(theta)*y;
        c.y=sin(theta)*x + cos(theta)*y;
        return c;
    }

    point rotate90(){
        return point(-y,x);
    }

    friend ostream& operator << (ostream& os, point p){ // point p; cin>>p;
        return os<<"("<<p.x<<","<<p.y<<")";
    }

    friend istream& operator >> (istream& is, point& a){ //point p; cin>>p; cout<<p<<endl;
        return is>>a.x>>a.y;
    }
};

int ccw(point a, point b, point c){
    b=b-a, c=c-a;
    if((b^c) > 0)    return +1;  // counter clockwise
    if((b^c) < 0)    return -1; // clockwise
    if((b*c) < 0)      return +2;  // c -- a -- b
    if(b.norm() < c.norm()) return -2; // a -- b -- c
    return 0;  // a -- c -- b
}

double dis(point a, point b){
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

bool parallel(point a, point b){ // a and b is vector
    return abs(a^b)<eps;         // eps = 0.00000001
}

bool orthogonal(point a, point b){  // a and b is vector
    return abs(a*b)<eps;            // eps = 0.00000001
}

bool intersect(point a, point b, point c, point d){ //a,b segment and b,c segment
    return (ccw(a,b,c)*ccw(a,b,d)<=0 && ccw(c,d,a)*ccw(c,d,b)<=0);
}

int slope(point a, point b){
    if(a.x*b.y==a.y*b.x) return 0;  //slope of a is equal b
    if(a.x*b.y < a.y*b.x) return 1; // slope of a is less than b
    return -1; // slope of a is greater than b;
}

double line_To_Point_Dis(point a, point b, point c, bool isSegment){
    double dist = ((b-a)^(c-a)) / sqrt((b-a)*(b-a));
    if(isSegment){
        if(((b-a)*(c-b)) > 0) return dis(b,c);
        if(((a-b)*(c-a)) > 0) return dis(a,c);
    }
    return abs(dist);
}


int n;
point a[500];

ll cross(point o, point a, point b){
    return ((a-o)^(b-o));
}

vector <point> monoTone_chain_convexHull(){
    vector <point> hull(2*n);
    sort(a,a+n); int k=0;

    // top hull
    for(int i=0; i<n; i++){
        while(k>=2 && cross(hull[k-2],hull[k-1],a[i])<=0) k--;
        hull[k++]=a[i];
    }

    //down hull
    for(int i=n-2, t=k+1; i>=0; i--){
        while(k>=t && cross(hull[k-2],hull[k-1],a[i])<=0) k--;
        hull[k++]=a[i];
    }

    hull.resize(k);
    return hull;
}

int main(){
    point p;
    cin>>p;
    cout<<p<<endl;
    return Accepted;
}
