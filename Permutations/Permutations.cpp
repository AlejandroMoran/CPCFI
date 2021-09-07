#include<stdio.h>
int main() {
    int n,x;
    scanf("%d",&n);
    if(n<=3&&n!=1)
        printf("NO SOLUTION");
    else{
        for(x=2;x<=n;x+=2)
            printf("%d ",x);
        for(x=1;x<=n;x+=2)
           printf("%d ",x);
    }
    return 0;
}
