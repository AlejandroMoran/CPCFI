#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,bool>temp;
    map<string,int>comb;
    map<string,int>::iterator it;
    map<int,bool>::iterator i;
    string combi="";
    string tempo;
    string maximo;
    int max=0;
    int n,a,res;
    scanf("%d",&n);
    while(n!=0){
        for(int num=0;num<n;num++){
            for(int x=0;x<5;x++){
                scanf("%d",&a);
                temp.emplace(a,1);
                }
            i = temp.begin();
            while(i!=temp.end()){
                tempo=to_string(i->first);
                combi=combi+tempo;
                i++;
            }
            temp.clear();
            it=comb.find(combi);
            if(it!=comb.end()){
               it->second++;
            }
            else
                comb.emplace(combi,1);
            combi="";
            
        }
        it = comb.begin();
        
        while(it!=comb.end()){
            if(it->second>max){
                max = it->second;
                res=it->second;
            }
            else if(it->second==max)
                res=res+it->second;
            it++;
        }
        comb.clear();
        printf("%d\n",res);
        scanf("%d",&n);
        max=0;
        res=0;
    }
 }