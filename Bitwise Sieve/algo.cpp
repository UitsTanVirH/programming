/*unsigned char a = 39, b = 31; // a = 5(00000101), b = 9(00001001)
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a&b); // The result is 00000001
    printf("a|b = %d\n", a|b);
    int res=a^b;  // The result is 00001101
    printf("a^b = %d\n", res+1); // The result is 00001100
    printf("~a = %d\n", a = ~a);   // The result is 11111010
    printf("b<<1 = %d\n", b<<1);  // The result is 00010010
    printf("b>>1 = %d\n", b>>1);  // The result is 00000100*/

#include <bits/stdc++.h>
#define mx 100
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
	 for(i=3;i<=N;i+=2){
        if( Check(status[i>>5],i&31)==0)
            printf("%d\n",i);
	 }

}

int main(){
    Bitwise_Sieve();
    return 0;
}
