#include<stdio.h>
int main() {
    long long int n,x;
    long long int res=1;
    long long int mod =1e9+7;
    scanf("%lld",&n);
    for(x=0;x<n;x++){
        res*=2;
        res%=mod;
    }
    printf("%lld",res);
    return 0;
}
