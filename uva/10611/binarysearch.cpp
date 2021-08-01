#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    long long int chimp, item, check=0;
    int n, q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>chimp;
        if(chimp!=check)
            v.push_back(chimp);
        check=chimp;
    }
    int sz=v.size();
    cin>>q;
    int mid;
    while(q--){
        cin>>item;
        int start=0, end=sz-1;
        while(start<=end){
            mid=(start+end)/2;
            if(v[mid]==item){
                if(mid-1!=-1)
                    cout<<v[mid-1]<<" ";
                else
                    cout<<"X"<<" ";
                if(mid+1!=sz){
                    cout<<v[mid+1]<<endl;
                }
                else
                    cout<<"X"<<endl;
                break;
            }

            else if(v[mid]<item){
                if(mid+1!=sz && v[mid+1]>item){
                    cout<<v[mid]<<" "<<v[mid+1]<<endl;
                    break;
                }
                else{
                    if(mid+1==sz){
                        cout<<v[mid]<<" "<<"X"<<endl;
                        break;
                    }
                    else{
                        start=mid+1;
                    }
                }
            }

            else if(v[mid]>item){
                if(mid-1!=-1 && v[mid-1]<item){
                    cout<<v[mid-1]<<" "<<v[mid]<<endl;
                    break;
                }
                else{
                    if(mid-1==-1){
                        cout<<"X"<<" "<<v[mid]<<endl;
                        break;
                    }
                    else
                        end=mid-1;
                }
            }
        }
    }
    return 0;

}
