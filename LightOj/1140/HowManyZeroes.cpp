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

const int nx=70;

ll dp[2][2][nx][nx];
int vis[2][2][nx][nx];
int lim, tt;

vector<int>digits;

ll digitDp(int pos, int isSmall, int isStart, int zeroes){
    if(pos==lim) return zeroes;
    ll &ret=dp[isSmall][isStart][pos][zeroes];
    int &v=vis[isSmall][isStart][pos][zeroes];
    if(v==tt) return ret;
    v=tt;
    int ses;
    if(isSmall)
        ses=9;
    else ses=digits[pos];
    ret=0;
    if(!isStart){
        for(int i=0; i<=ses; i++){
            ret+=digitDp(pos+1, isSmall | i<digits[pos], 0, (i==0)+zeroes);
        }
    }
    else{
        for(int i=1; i<=ses; i++){
            ret+=digitDp(pos+1, isSmall | i<digits[pos], 0, zeroes);
        }
        ret+=digitDp(pos+1, 1, 1, 0);
    }
    return ret;

}

ll call(ll number){
    if(number<0) return 0;
    if(number<=9) return 1;
    digits.clear();
    while(number){
        digits.pb(number%10);
        number/=10;
    }
    tt++;
    //cout<<tt<<endl;
    reverse(digits.begin(), digits.end());
    lim=digits.size();
    return digitDp(0, 0, 1, 0)+1;
}

int main(){
    int T=II, t=0;
    loop(0, T){
        ll n=LL, m=LL;
        ll ans=call(m)-call(n-1);
        pf("Case %d: %lld\n", ++t, ans);
    }
    return Accepted;
}

