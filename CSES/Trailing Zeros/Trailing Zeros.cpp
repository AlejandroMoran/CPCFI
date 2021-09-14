#include<stdio.h>
int main() {
    long long int n,x,res;
    scanf("%lld",&n);
    res=0;
    for(x=5;(n/x)>0;x=x*5)
        res=res+(n/x);
    printf("%lld",res);
    return 0;
}
