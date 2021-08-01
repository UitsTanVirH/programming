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
#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)
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

//____________________________________________________________________________

vector<ll>v, v2, v3;
void convertToBinary(ll n){
    if(n/2!=0){
        convertToBinary(n/2);
    }
    v.push_back(n%2);
}

void convertToDecimal(ll decimal){
    int j=v2.size()-1;
    for(int i=0; i<v2.size()-1; i++){
        decimal+=v2[i]*pow(2, j);
        j--;
    }

    cout<<decimal<<endl;
}

int main(){
    for(int i=0; ; i++){
        int n=pow(2, i);
        cout<<n<<endl;
        if(n==2048){
            cout<<i<<endl;
            break;
        }

    }
    return 0;
}



