#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    int t, n, m, b, c=1;
    string a;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<"Case "<<c<<":"<<endl;
        for(int i=0; i<m; i++){
            cin>>a;
            if(a=="pushLeft"){
                cin>>b;
                if(n!=dq.size()){
                    dq.push_front(b);
                    cout<<"Pushed in left: "<<b<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(a=="pushRight"){
                cin>>b;
                if(n!=dq.size()){
                    dq.push_back(b);
                    cout<<"Pushed in right: "<<b<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(a=="popLeft"){
                if(!dq.empty()){
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
            else if(a=="popRight"){
                if(!dq.empty()){
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
        }
        c++;
        dq.clear();
    }
    return 0;
}
