#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string,string> test;
    //map<string,string>::iterator it;
    string name;

    test["brasil"] = "Feliz Natal!";
    test["alemanha"] = "Frohliche Weihnachten!";
    test["austria"] = "Frohe Weihnacht!";
    test["coreia"] = "Chuk Sung Tan!";
    test["espanha"] = "Feliz Navidad!";
    test["grecia"] = "Kala Christougena!";
    test["estados-unidos"] = "Merry Christmas!";
    test["inglaterra"] = "Merry Christmas!";
    test["australia"] = "Merry Christmas!";
    test["portugal"] = "Feliz Natal!";
    test["suecia"] = "God Jul!";
    test["turquia"] = "Mutlu Noeller";
    test["argentina"] = "Feliz Navidad!";
    test["chile"] = "Feliz Navidad!";
    test["mexico"] = "Feliz Navidad!";
    test["antardida"] = "Merry Christmas!";
    test["canada"] = "Merry Christmas!";
    test["irlanda"] = "Nollaig Shona Dhuit!";
    test["belgica"] = "Zalig Kerstfeest!";
    test["italia"] = "Buon Natale!";
    test["libia"] = "Buon Natale!";
    test["siria"] = "Milad Mubarak!";
    test["marrocos"] = "Milad Mubarak!";
    test["japao"] = "---";

    while(1){
        cin>>name;
        if(cin.eof()) break;
        if(test.find(name)==test.end())
        cout<<"--- NOT FOUND ---"<<endl;
        else
        cout<< test[name]<<endl;
    }

    return 0;
}
