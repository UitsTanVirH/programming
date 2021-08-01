#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
int main(){
    map<string, string> mp2;
    string s;
    mp["brasil"]=1;
    mp["alemanha"]=1;
    mp["austria"]=1;
    mp["coreia"]=1;
    mp["espanha"]=1;
    mp["grecia"]=1;
    mp["estados-unidos"]=1;
    mp["inglaterra"]=1;
    mp["australia"]=1;
    mp["portugal"]=1;
    mp["suecia"]=1;
    mp["turquia"]=1;
    mp["argentina"]=1;
    mp["chile"]=1;
    mp["mexico"]=1;
    mp["antardida"]=1;
    mp["canada"]=1;
    mp["irlanda"]=1;
    mp["belgica"]=1;
    mp["italia"]=1;
    mp["libia"]=1;
    mp["siria"]=1;
    mp["marrocos"]=1;
    mp["japao"]=1;

    mp2["brasil"]="Feliz Natal!";
    mp2["alemanha"]="Frohliche Weihnachten!";
    mp2["austria"]="Frohe Weihnacht!";
    mp2["coreia"]="Chuk Sung Tan!";
    mp2["espanha"]="Feliz Navidad!";
    mp2["grecia"]="Kala Christougena!";
    mp2["estados-unidos"]="Merry Christmas!";
    mp2["inglaterra"]="Merry Christmas!";
    mp2["australia"]="Merry Christmas!";
    mp2["portugal"]="Feliz Natal!";
    mp2["suecia"]="God Jul!";
    mp2["turquia"]="Mutlu Noeller";
    mp2["argentina"]="Feliz Navidad!";
    mp2["chile"]="Feliz Navidad!";
    mp2["mexico"]="Feliz Navidad!";
    mp2["antardida"]="Merry Christmas!";
    mp2["canada"]="Merry Christmas!";
    mp2["irlanda"]="Nollaig Shona Dhuit!";
    mp2["belgica"]="Zalig Kerstfeest!";
    mp2["italia"]="Buon Natale!";
    mp2["libia"]="Buon Natale!";
    mp2["siria"]="Milad Mubarak!";
    mp2["marrocos"]="Milad Mubarak!";
    mp2["japao"]="Merii Kurisumasu!";

    while(cin>>s){
        if(mp[s]==1)
            cout<<mp2[s]<<endl;
        else cout<<"--- NOT FOUND ---"<<endl;
    }
    return 0;
}
