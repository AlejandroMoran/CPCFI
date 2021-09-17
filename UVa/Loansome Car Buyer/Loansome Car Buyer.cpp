#include<stdio.h>
int main (){
    int duracion,mes,entradas,x;
    int salir=0,y=0;
    float meses[100]={0};
    float pagos,pago,valor,deb,devaluo,ant;
    scanf("%d",&duracion);
    while(duracion>0){
        scanf("%f %f %d",&pago,&valor,&entradas);
        pagos=valor/duracion;
        deb=valor+pagos;
        valor=valor+pago;
        for(x=0;x<entradas;x++) {
            scanf("%d %f",&mes,&devaluo);
            meses[mes]=devaluo;
        }
        while(salir==0){
            if(meses[y]!=0){
                valor=valor-(valor*meses[y]);
                ant=meses[y];
            }
            else
                valor=valor-(valor*ant);
            deb=deb-pagos;
            y++;
            if(deb<valor)
                salir=1;

        }
        if((y-1)==1)
            printf("%d month\n",y-1);
        else
            printf("%d months\n",y-1);
        salir=0;
        y=0;
        for(x=0;x<101;x++)
            meses[x]=0;
        scanf("%d",&duracion);
    }
    return 0;
}
