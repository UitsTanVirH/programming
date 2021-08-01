#include <bits/stdc++.h>
using namespace std;
int index1, index2;

void binary1(int a, int n, int *arr){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=(start+end)/2;
        if(a==arr[mid]){
            index1=mid;
            break;
        }
        else if(a<arr[mid]){
            if(mid-1==-1){
                index1=mid;
                break;
            }
            else if(arr[mid-1]<a){
                index1=mid;
                break;
            }
            else
                end=mid-1;
        }

        else if(a>arr[mid]){
            if(arr[mid+1]>a){
                index1=mid+1;
                break;
            }
            else
                start=mid+1;
        }
    }

}

void binary2(int b, int n, int *arr){
    int start=0, end=n-1, mid;
    if(b>arr[n-1])
        index2=n-1;
    else{
        while(start<=end){
            mid=(start+end)/2;
            if(b==arr[mid]){
                index2=mid;
                break;
            }
            else if(b<arr[mid]){
                if(arr[mid-1]<b){
                    index2=mid-1;
                    break;
                }
                else
                    end=mid-1;
            }
            else if(b>arr[mid]){
                if(mid+1==n){
                    index2=mid;
                    break;
                }
                else if(arr[mid+1]>b){
                    index2=mid;
                    break;
                }
                else
                    start=mid+1;
            }
        }

    }

}


int main(){
    int T, t=1;
    scanf("%d", &T);
    while(T--){
        int n, q;
        scanf("%d %d", &n, &q);
        int arr[n];
        for(int i=0; i<n; i++){
            //cout<<"Moitri"<<endl;
            scanf("%d", &arr[i]);
        }
        printf("Case %d:\n", t);
        for(int i=0; i<q; i++){
            int a, b, ans=0;
            scanf("%d %d", &a, &b);
            if(a>arr[n-1])
                printf("0\n");
            else{
                binary1(a, n, arr);
                binary2(b, n, arr);
                //cout<<index1<<" "<<index2<<endl;

                printf("%d\n", index2-index1+1);
            }
        }
        t++;
    }
    return 0;

}
