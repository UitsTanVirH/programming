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
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
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

const double eps = (double)1e-10;
const double PI = acos(-1.0);

int bigmod(int a, int b, int m){
    if(b==0) return 1;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}

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

//___________________________________________________________________________________________________________________

vector <int> graph[10000000];
bool vis[50];
int level[50];

void dfs(int u){
    vis[u]=1;
    int len=graph[u].size();
    for(int i=0; i<len; i++){
        int v=graph[u][i];
        if(!vis[v]) {
            dfs(v);
        }
    }
}

int cnt=0;
void bfs(int u, int ttl){
    queue <int> q;
    q.push(u);
    level[u]=0;
    vis[u]=1;

    while(!q.empty()){
        u=q.front();
        q.pop();
        int len=graph[u].size();
        for(int i=0; i<len; i++){
            int v=graph[u][i];
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
                level[v]=level[u]+1;
                cout << "level of " << v << " : " << level[v] << endl;
                if(level[v]>ttl) cnt++;
            }
        }
    }
}

int main(){
    map<int, int>mp;
    int nc, t=1;
    while(sf("%d",&nc) && nc!=0){
        int cnt2=0;
        for(int i=0; i<nc; i++){
            int u,v;
            cin >> u >> v;
            if(mp[u]==0) u=mp[u]=++cnt2;
            else u=mp[u];
            if(mp[v]==0) v=mp[v]=++cnt2;
            else v=mp[v];
            graph[u].pb(v);
            graph[v].pb(u);
        }
        int sn, ttl;
        while(sf("%d %d",&sn,&ttl) && sn!=0 && ttl!=0){
            bfs(sn, ttl);
            pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",t++,cnt,sn,ttl );
            cnt=0;
            loop(0,50){
                vis[i]=0;
                level[i]=0;
            }
        }
        loop(0,50)
            graph[i].clear();
    }

    return 0;
}
