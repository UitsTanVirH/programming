#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, n, J, a;
    cin>>T;
    while(T--){
        vector<int>v;
        vector<int>t;
        cin>>n>>J;
        int i=1;

        for(int j=0; j<n; j++){
            cin>>a;
            if(a>J)
                t.push_back(i);
            else
                v.push_back(i);
            i++;
        }
        cout<<"Kache Eso"<<endl;
        if(t.size()==0)
            printf("\n");
        else{
            cout<<t[0];
            for(int j=1; j<t.size(); j++)
                cout<<" "<<t[j];
            cout<<endl;
        }
        cout<<"Dure Giya Mor"<<endl;
        if(v.size()==0)
            printf("\n");
        else
        {
            cout<<v[0];
            for(int j=1; j<v.size(); j++)
                cout<<" "<<v[j];
            cout<<endl;
        }


    }
}
