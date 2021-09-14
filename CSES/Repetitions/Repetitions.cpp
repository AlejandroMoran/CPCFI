#include<stdio.h>
int main(){
    char letra;
    char temp='o';
    int rep=1;
    int res=0;
    while(scanf("%c",&letra)==1&&letra!='\n'){
        if(temp==letra){
            rep++;
        }
        else{
            if(res<rep){
            res=rep;
            }
            rep=1;
        }
        if(res<rep){
            res=rep;
            }
        temp=letra;
    }
    printf("%d",res);
    return 0;
}
