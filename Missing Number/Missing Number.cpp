#include<stdio.h>
int main() {
    int n,x,temp,res;
    scanf("%d\n",&n);
    int num[n];
    for(x=1;x<n;x++){
        scanf("%d",&temp);
        num[temp]=1;
    }
    for(x=1;x<=n;x++){
        if(num[x]!=1)
            res=x;
    }
    printf("%d",res);
    return 0;
}
