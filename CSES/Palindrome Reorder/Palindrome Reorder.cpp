#include<stdio.h>
int main() {
    int letras[26]={0};
    int x,y,z,salir=0;
    char letra;
    while(scanf("%c",&x)==1&&x!='\n'){
        if(x!=21)
            letras[x-65]++;
    }
    for(x=0;x<26;x++){
        if((letras[x]%2)!=0){
            salir++;
            z=x+65;
        }
    }
    if(salir!=1&&salir!=0)
        printf("NO SOLUTION");
    else{
        x=0;
        for(x=0;x<26;x++){
            for(y=0;y<(letras[x]/2);y++)
                printf("%c",(x+65));
        }
        if(salir!=0)
            printf("%c",z);
        for(x=25;x>-1;x--){
            for(y=0;y<(letras[x]/2);y++)
                printf("%c",(x+65));
        }
    }
    return 0;
}
