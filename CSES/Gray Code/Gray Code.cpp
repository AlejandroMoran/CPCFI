#include<stdio.h>
#include<math.h>
int num(int n,int pos, long int numero[16][66000]){
    int x,y,cont;
    numero[0][0]=0;
    numero[0][1]=1;
    if(pos<n){
        cont=pow(2,pos);
        for(x=0;x<cont;x++)
            numero[pos][x]=numero[pos-1][x];
        for(x=cont;x>0;x--){
            numero[pos][2*cont-x]=(numero[pos-1][x-1]+pow(10,pos));
        }
        num(n,pos+1,numero);
    }
    return 0;
}
int main(){
    int n,pos=1,x;
    scanf("%d",&n);
    long int numero[16][66000]={0};
    num(n,pos,numero);
    for(x=0;x<(pow(2,n));x++)
        printf("%0*ld\n",n,numero[n-1][x]);
    return 0;
}
