#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, t=0;
    while(scanf("%d", &a) && a>0){
        if(a==0)
            printf("Case %d: 0\n", ++t);
        else if(a==1)
            printf("Case %d: 0\n", ++t);
        else{
            int count=0, c=1;
            for(int i=0; ; i++){
                c*=2;
                if(c<a)
                    count++;
                else if(c>=a){
                    count++;
                    printf("Case %d: %d\n", ++t, count);
                    break;
                }

            }
        }
    }
    return 0;
}
