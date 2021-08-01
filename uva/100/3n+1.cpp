#include <bits/stdc++.h>
using namespace std;

int sum=0;
void recursion(int n){
    if(n==1)
        return;
    if(n%2==0){
        sum++;
        recursion(n/2);
    }
    else{
        sum++;
        recursion(3*n+1);
    }
}

int main(){
    int a, b, temp_a, temp_b, mx_sum;
    while(scanf("%d %d", &a, &b)!=EOF){
        temp_a=a, temp_b=b, mx_sum=0;
        if(a>b)
            swap(a, b);
        for(int i=a; i<=b; i++){
            recursion(i);
            if(sum>mx_sum)
                mx_sum=sum;
            sum=0;
        }
        printf("%d %d %d\n", temp_a, temp_b, mx_sum+1);
    }

    return 0;
}
