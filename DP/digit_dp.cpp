#include <bits/stdc++.h>
#define Long long long
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
const int NX = 70 ;

Long dp[2][2][NX][NX];
int vis[2][2][NX][NX];
int lim , tt ;
vector < int > inp ;

Long DP( int pos , int isSmall ,int isStart, int value)
{
    if( pos == lim ) return value ;
    Long &ret = dp[isSmall][isStart][pos][value];
    int &v = vis[isSmall][isStart][pos][value];
    if( v == tt ) return ret ;
    v = tt;
    int ses = isSmall ? 9 : inp[pos];
    int i;
    ret = 0 ;
    if( !isStart ) {
        for ( i = 0 ; i <= ses ; i++ ){
            ret += DP( pos + 1 , isSmall | i < inp[pos] ,0, (i == 0) + value );
        }
    } // আগেই নাম্বার বসানো শুরু করে দিছি

    else{
        for ( i = 1 ; i <= ses ; i++ ){
            ret += DP( pos + 1 , isSmall | i < inp[pos] ,0, (i == 0) + value );
        }
        ret += DP( pos + 1 , 1 ,1, 0 );
    }
    return ret ;
}

Long Cal( Long x )
{
    if( x < 0 ) return 0 ;
    if( x <= 9 ) return 1 ;
    inp.clear();
    while( x )
    {
        inp.pb(x%10);
        x/=10;
    }
    reverse(inp.begin(),inp.end()); // সুবিধার জন্য রিভারস করে নিচ্ছি , এইটা করতেই হবে
    lim = inp.size();
    tt++;
    return DP( 0 , 0 , 1 , 0 ) + 1; // শুধু ০ টা আলাদা এড করছি
}
int main()
{
   // I will always use scanf and printf
   // May be i won't be a good programmer but i will be a good human being
  // cout << fixed << setprecision(10) ;

     int cs , t = II ;
     for ( cs = 1 ; cs <= t ; cs++ )
     {

        Long n = LL , m = LL ;
        Long ans = Cal(m) - Cal(n-1);
        printf("Case %d: %lld\n",cs,ans);
     }
     return 0;
}
