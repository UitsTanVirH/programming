#include <bits/stdc++.h>
using namespace std;

int num_convert(int a){
    int b=0;
    AGAIN: while(a>0){
        b+=a%10;
        a=a/10;
    }
    if(b>9){
        a=b;
        b=0;
        goto AGAIN;
    }
    return b;
}

int string_convert(string s){
    int sz=s.size();
    for(int i=0; i<sz; i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]=tolower(s[i]);
    }
    int num=0;
    for(int i=0; i<sz; i++){
        if(s[i]>='a' && s[i]<='z')
            num+=(int)(s[i])-96;
    }
    return num_convert(num);
}

char percent='%';
int main(){
    string s, k;
    while(getline(cin, s)){
        getline(cin, k);
        string_convert(s);
        string_convert(k);
        double ans=string_convert(s);
        double ans2=string_convert(k);
        if(ans>ans2) swap(ans, ans2);
        printf("%0.2lf %c\n", (ans/ans2)*100, percent);
    }
    return 0;
}


//a = 97
//96
