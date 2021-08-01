#include <bits/stdc++.h>
using namespace std;

vector<int> bin1, bin2;
void deciToBin1(int n){
    while(n>0){
        bin1.push_back(n%2);
        n/=2;
    }
}

void deciToBin2(int n){
    while(n>0){
        bin2.push_back(n%2);
        n/=2;
    }
}

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b)!=EOF){
        deciToBin1(a);
        deciToBin2(b);
        int len1=bin1.size();
        int len2=bin2.size();
        int len=len1;
        //for(int i=0; i<len2; i++) cout<<bin2[i]<<" ";
        if(len1<len2){
            for(int i=0; i<len2-len1; i++) bin1.push_back(0);
            len=len2;
        }
        else if(len2<len1){
            for(int i=0; i<len1-len2; i++) bin2.push_back(0);
            len=len1;
        }
        reverse(bin1.begin(), bin1.end());
        reverse(bin2.begin(), bin2.end());
        vector<int> ans;
        for(int i=0; i<len; i++){
            if(bin1[i]==1 && bin2[i]==1 || bin1[i]==0 && bin2[i]==0) ans.push_back(0);
            else ans.push_back(1);
        }
        int fin=0;
        reverse(ans.begin(), ans.end());
        for(int i=0; i<len; i++){
            if(ans[i]==1) fin+=pow(2, i);
        }
        cout<<fin<<endl;
        bin1.clear();
        bin2.clear();
    }
    return 0;
}
