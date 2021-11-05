#include<bits/stdc++.h>
using namespace std;
int main(){
    int dif=0,n,open=0,tc;
    string num;
    scanf("%d\n",&tc);
    for(int x=0;x<tc;x++){
        getline (cin,num);
        printf("Caso #%d: ",x+1);
        for(int k=0;k<num.size();k++){
            n=num.at(k)-48;
            dif=n-open;
            if(dif>0){
                for(int i=0;i<dif;i++){
                    open++;
                    printf("(");
                }
            }
            else if(dif<0){
                for(int i=0;i>dif;i--){
                    open--;
                    printf(")");
                }
            }
            printf("%d",n);
        }
        for(int i=0;i<open;i++)
                printf(")");
        printf("\n");
        open=0;
    }
    return 0;
}
