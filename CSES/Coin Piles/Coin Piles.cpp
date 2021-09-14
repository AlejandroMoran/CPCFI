#include<stdio.h>
int main() {
    int n,x;
    int M=1,m=0;
    long long int pila[2];
    scanf("%d",&n);
    for(x=0;x<n;x++){
        scanf("%lld %lld",&pila[0],&pila[1]);
        if(pila[m]>pila[M]){
            M=0;
            m=1;
        }
        if(pila[M]>2*pila[m])
            printf("NO\n");
        else if((pila[M]+pila[m])%3==0)
            printf("YES\n");
        else
            printf("NO\n");
        M=1;
        m=0;
    }
    return 0;
}
