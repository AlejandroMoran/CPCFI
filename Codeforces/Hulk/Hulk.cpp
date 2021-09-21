#include <stdio.h>
int main() {
    int n,x;
    scanf("%d",&n);
    printf("I hate");
    for(x=1;x<n;x++){
        printf(" that ");
        if((x%2)==0)
            printf("I hate");
        else
            printf("I love");
            }
    printf(" it\n");

    return 0;
}
