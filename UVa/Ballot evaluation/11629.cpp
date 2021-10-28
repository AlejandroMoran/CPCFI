#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,double> temas;
    int p,a,g,cont=0;
    double por,tot=0.0;
    string s;
    string op;
    string ope[6]={"+","<","<=",">",">=","="};
    map<string,double>::iterator i;
    scanf("%d %d",&p,&g);
    string s2;
    for(int x=0;x<p;x++){
            cin >> s;
            scanf("%lf",&por);
            temas.emplace(s,por);
    }     
    for(int x=0;x<g;x++){
        cin >> s2 >> op;
        i = temas.find(s2);
        tot=tot + i->second;
        while((op.compare(ope[0]))==0){
            cin >> s2 >> op;
            i = temas.find(s2);
            tot=tot + i->second;
        }
        scanf("%lf",&por);
        if((op.compare(ope[1]))==0){
            if(tot<por&&fabs(tot - por) > 0.01)
                printf("Guess #%d was correct.\n",x+1);
            else
                printf("Guess #%d was incorrect.\n",x+1);
        }
        else if((op.compare(ope[3]))==0){
            if(tot>por&&fabs(tot - por) > 0.01)
                printf("Guess #%d was correct.\n",x+1);
            else
                printf("Guess #%d was incorrect.\n",x+1);
        }
        else if((op.compare(ope[2]))==0){
            if(tot<por&&fabs(tot - por) > 0.01||fabs(tot - por) < 0.001)
                printf("Guess #%d was correct.\n",x+1);
            else
                printf("Guess #%d was incorrect.\n",x+1);
        }
        else if((op.compare(ope[4]))==0){
            if(tot>por&&fabs(tot - por) > 0.01||fabs(tot - por) < 0.001)
                printf("Guess #%d was correct.\n",x+1);
            else
                printf("Guess #%d was incorrect.\n",x+1);
        }
        else if((op.compare(ope[5]))==0){
            if(fabs(tot - por) < 0.001)
                printf("Guess #%d was correct.\n",x+1);
            else
                printf("Guess #%d was incorrect.\n",x+1);
        }
        tot=0;
    }   
}