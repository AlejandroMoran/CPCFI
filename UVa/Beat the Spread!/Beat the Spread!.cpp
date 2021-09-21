#include <stdio.h>
int main() {
    long long int n,x;
    long long int tot,dif;
    scanf("%lld",&n);
    for(x=0;x<n;x++){
        scanf("%lld %lld",&tot,&dif);
        if(tot<dif||(tot+dif)%2!=0)
            printf("impossible\n");
        else{
            dif=(tot+dif)/2;
            printf("%lld %lld\n",dif,tot-dif);
        }
    }
    return 0;
}
