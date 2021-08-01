#include<bits/stdc++.h>
using namespace std;

#define  ll long long
/*
 L = length of vector v

 Description of states

 [12] = length of the number  since integer contains (2^32/10^10 means )10 digit at best,
 [2]  = number under construction already small in relation with  given number or not?,
 [2]  = number under construction already has taken its first digit or not?,
 [12] = number of zeroes in a number
*/

ll L,dp[12][2][2][12];
vector<int>v;

//------DP function--------

ll DP(ll indx,int small,int started,ll zeroes)
{
    if(indx==L)                              return zeroes;

    if(dp[indx][small][started][zeroes]!=-1) return dp[indx][small][started][zeroes];

    ll till,ans=0;
    if(small)
        till=9;
    else
        till=v[indx];
//------number under construction already has taken its first digit-------
    if(started)
    {
        if(small || 0<v[indx])
            ans=ans+DP(indx+1,1,started,zeroes+1);      //only this portion contains a new zero
        else
            ans=ans+DP(indx+1,0,started,zeroes+1);      //only this portion contains a new zero

        for(int i=1;i<=till;i++)
        {
            if(small || i<v[indx])
                ans=ans+DP(indx+1,1,1,zeroes);
            else
                ans=ans+DP(indx+1,0,1,zeroes);
        }
    }
    else
    {
        for(int i=1;i<=till;i++)
        {
            if(small || i<v[indx])
                ans+=DP(indx+1,1,1,zeroes);
            else
                ans+=DP(indx+1,0,1,zeroes);
        }
        ans+=DP(indx+1,1,0,zeroes);
    }
    return dp[indx][small][started][zeroes]=ans;
}


//------dpcaller function-----------

ll dpcaller(ll nn)
{
    if(nn<0)    return 0;
    if(nn<10)  return 1;
    v.clear();
    while(nn)
    {
        ll rr=nn%10;
        nn/=10;
        v.push_back(rr);
        L++;
    }
    reverse(v.begin(),v.end()); //reversing cause i want to start from msb

    ll ans=DP(0,0,0,0)+1;  //if nn>9 the '0' digit number is missing in our determination,so at last it's added up
    return ans;
}

//--------------main function------------

int main()
{
    int T;
    scanf("%d",&T);
    ll m,n;
    for(int tt=1;tt<=T;tt++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld %lld",&m,&n);
        L=0;
        ll ans=dpcaller(n);
        L=0;memset(dp,-1,sizeof(dp));
        ans=ans-dpcaller(m-1);
        printf("Case %d: %lld\n",tt,ans);
    }
    return 0;
}
