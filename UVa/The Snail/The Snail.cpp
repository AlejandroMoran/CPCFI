#include<stdio.h>
int main(){
    float H,U,D,F;
    int dia=0,salir=0,exito=0;
    float pos=0;
    while(1){
        scanf("%f %f %f %f",&H,&U,&D,&F);
        if(H==0)
            break;
        F=U*(F/100);
        while(salir==0){
            dia++;
            pos=pos+U;
            if((U-F)>0){
            U=U-F;
            }
            else{
                U=U-(U+.00000001);
            }
            if(pos>H){
                exito=1;
                salir=1;
            }
            pos=pos-D;
            if(pos<0){
                salir=1;
            }
        }
        if(exito==1)
            printf("success on day %d\n",dia);
        else
            printf("failure on day %d\n",dia);
        dia=0;
        salir=0;
        pos=0;
        exito=0;
    }
    return 0;
}
