#include<stdio.h>
int main() {
    long int num;
    scanf("%ld",&num);
    printf("%ld ",num);
    while(num!=1){
        if((num%2)==0)
            num=num/2;
        else
            num=(num*3)+1;
        printf("%ld ",num);
    }
    return 0;
}
