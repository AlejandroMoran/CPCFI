#include<stdio.h>
int main() {
    int n,c;
    long long int x,y;
    scanf("%d",&n);
    for(c=0;c<n;c++) {
        scanf ("%lld %lld",&x, &y);
        if(y>x){
            if((y % 2)!=0)
                printf("%lld\n",((y*y)-(x-1)));
            else
                printf("%lld\n",((y-1)*(y-1))+x);
        }
        else{
            if((x % 2)!=0)
                printf("%lld\n",((x-1)*(x-1))+y);
            else
                printf("%lld\n",((x*x)-(y-1)));
        }
    }
    return 0;
}
