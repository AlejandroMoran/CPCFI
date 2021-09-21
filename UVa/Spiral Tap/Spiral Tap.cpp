#include <stdio.h>
int main() {
    long long int n,x=1,nume,num,cantidad=0,numeros=1,mitad,mitad2;
    scanf("%lld %lld",&n,&nume);
    while(n!=0&&nume!=0){
        num=nume;
        while((num-1)>0){
            cantidad++;
            numeros=numeros+((4*(x))+4);
            num=num-((4*(x))+4);
            x=x+2;
        }
        x=x-2;
        mitad=numeros-(((4*(x))+4)/4);
        mitad2=mitad-(((4*(x))+4)/2);
        if(nume<=numeros&&nume>(mitad-(((4*(x))+4)/4))){
            if(nume>=mitad)
                printf("Line = %lld, column = %lld.\n",(nume-mitad+1)+((n/2)-cantidad),(((n/2)+1)+cantidad));
            else
                printf("Line = %lld, column = %lld.\n",((n/2)-cantidad)+1,(((n/2)+1)+cantidad)-(mitad-nume));
        }
        else{
             if(nume>=mitad2)
                printf("Line = %lld, column = %lld.\n",((n/2)+cantidad)-(nume-mitad2-1),(((n/2)+1)-cantidad));
            else
                printf("Line = %lld, column = %lld.\n",((n/2)+cantidad)+1,(((n/2)+1)-cantidad)+(mitad2-nume));
        }
        cantidad=0;
        numeros=1;
        x=1;
        scanf("%lld %lld",&n,&nume);
    }
    return 0;
}
