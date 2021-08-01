#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, num1;
    int cnt=0;
    while(scanf("%lf", &a)){
        if(a<0.0 || a>10.0){
            cout<<"nota invalida"<<endl;
        }
        else{
            if(cnt==0){
                num1=a;
                cnt+=1;
            }
            else{
                printf("media = %0.2lf\n", (num1+a)/2.0);
                cnt=0;
                break;
            }
        }
    }
    printf("novo calculo (1-sim 2-nao)\n");
    while(1){
        int nw;
        cin>>nw;
        if(nw==1){
            while(scanf("%lf", &a)){
                if(a<0.0 || a>10.0){
                    cout<<"nota invalida"<<endl;
                }
                else{
                    if(cnt==0){
                        num1=a;
                        cnt+=1;
                    }
                    else{
                        printf("media = %0.2lf\n", (num1+a)/2.0);
                        cnt=0;
                        break;
                    }
                }
            }
        }
        else if(nw==2) break;
        else{
            printf("novo calculo (1-sim 2-nao)\n");
        }
    }
    return 0;
}
