#include <bits/stdc++.h>
#define mx 100000000
using namespace std;

int status[(mx/32)+2], N=mx;
bool Check(int m,int pos){
    return (bool)(m & (1<<pos));
}

int Set(int m,int pos){
    return m=m | (1<<pos);
}

void Bitwise_Sieve(){
	 int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 ) {
		 if( Check(status[i>>5],i&31)==0){
	 		 for( j = i*i; j <= N; j += (i<<1) ){
				 status[j>>5]=Set(status[j>>5],j & 31);
	 		 }
		 }
	 }
	 printf("2\n");
	 int cnt=1, out=101;
	 for(i=3; i<N; i+=2){
        if( Check(status[i>>5],i&31)==0){
            cnt++;
            if(cnt==out){
                printf("%d\n",i);
                out+=100;
            }
        }
	 }
}

int main(){
    Bitwise_Sieve();
    return 0;
}

