#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    while(cin>>T){
        if(T==-1) return 0;
        map<char, int>mp;
        map<char, int>mp2;
        map<char, int>mp3;
        string s, k;
        cin>>s>>k;
        int len=s.size(), chars=0, hang=0;
        for(int i=0; i<len; i++){
            mp[s[i]]++;
            if(mp[s[i]]==1) chars++;
        }
        int len2=k.size();
        for(int i=0; i<len2; i++){
            if(mp[k[i]] && !mp2[k[i]]){
                chars--;
                if(!chars) break;
                mp2[k[i]]++;
            }
            else if(!mp[k[i]] && !mp3[k[i]]){
                hang++;
                if(hang>=7) break;
                mp3[k[i]]++;
            }
        }
        if(!chars) printf("Round %d\nYou win.\n", T);
        else if(hang>=7) printf("Round %d\nYou lose.\n", T);
        else printf("Round %d\nYou chickened out.\n", T);
    }
}

