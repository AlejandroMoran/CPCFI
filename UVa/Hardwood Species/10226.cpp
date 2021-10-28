#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    int contador;
    string s;
    map<string,int>arbo;
    map<string,int>::iterator i;
    scanf("%d\n\n",&x);
    for(int tc=0;tc<x;tc++){
        contador=0;
        while(getline(cin,s)){
            if(s.length()==0)
                break;
            i = arbo.find(s);
            if(i!=arbo.end()&&arbo.size()!=0)
                i->second++;
            else
                arbo.emplace(s,1);
            contador++;
        }
        for(i=arbo.begin();i!=arbo.end();i++)
            cout << i->first << " " <<fixed<<setprecision(4)<<((double)i->second/(double)contador)*100.0<<"\n";
        if(tc<x-1)
            printf("\n");
        arbo.clear();
        contador=0;
    }
}