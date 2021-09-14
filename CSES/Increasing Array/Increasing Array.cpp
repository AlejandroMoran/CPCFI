#include<stdio.h>
int main() {
    int n,x;
    long long int res=0;
    scanf("%d",&n);
    long long int arr[n];
    arr[0]=0;
    for(x=1;x<=n;x++) {
        scanf("%lld",&arr[x]);
        if(arr[x-1]>arr[x]){
            res=res+(arr[x-1]-arr[x]);
            arr[x]=arr[x-1];
        }
    }
    printf("%lld",res);
    return 0;
}
