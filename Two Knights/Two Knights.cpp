#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    long long int res;
    printf("0\n");
    for (long long i=2;i<=n;i++){
        res=(((i*i)*((i*i)-1))/2)-(4*(i-1)*(i-2));
        printf("%lld\n",res);
    }
    return 0;
}
