#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string>tra;
    string temp,clave;
    int trac,tc;
    scanf("%d\n",&trac);
    for(int i=0;i<trac;i++){
        getline(cin,temp);
        getline(cin,clave);
        tra.emplace(temp,clave);
    }
    scanf("%d\n",&tc);
    for(int i=0;i<tc;i++){
        getline(cin,temp);
        printf("%s\n",tra[temp].c_str());
    }
}