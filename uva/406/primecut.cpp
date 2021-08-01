#include <bits/stdc++.h>
using namespace std;

bool status[1000007];
vector<int>v;
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}

}


int main(){
    siv();
    int n, c;
    while(cin>>n>>c){
        int count=0;
        for(int i=1; i<=n; i++){
            if(status[i]==0){
                v.push_back(i);
                count++;
            }
        }
        if(c*2>count){
            printf("%d %d:", n, c);
            for(int j=0; j<v.size(); j++)
                cout<<" "<<v[j];
                cout<<endl<<endl;
        }
        else{
            if(count%2==0){
                int half=count/2;
                int lower=half-c;
                int upper=half+(c-1);
                printf("%d %d:", n, c);
                for(int k=lower; k<=upper; k++)
                    cout<<" "<<v[k];
                cout<<endl<<endl;
            }
            else{
                int half=count/2;
                int lower=half-(c-1);
                int upper=half+(c-1);
                printf("%d %d:", n, c);
                for(int i=lower; i<=upper; i++)
                    cout<<" "<<v[i];
                cout<<endl<<endl;
            }
        }
        v.clear();
    }

    return 0;

}

