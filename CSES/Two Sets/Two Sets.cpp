#include <stdio.h>
int main() {
    long long int n,sum,x,mitad;
    long long int c=0,c2=0,s=0;
    scanf("%lld",&n);
    long long int set[n],set2[n];
    sum=(n*(n+1))/2;
    if((sum%2)!=0)
        printf("NO");
    else{
        printf("YES\n");
        mitad=sum/2;
        set[c]=n;
        s=n;
        n--;
        c++;
        while(s!=mitad||n>0){
            if((s+n)<=mitad){
                set[c]=n;
                s=s+n;
                c++;
                n--;
            }
            else{
                set2[c2]=n;
                c2++;
                n--;
            }
        }
        printf("%lld\n",c);
        for(x=0;x<c;x++)
            printf("%lld ",set[x]);
        printf("\n%lld\n",c2);
        for(x=0;x<c2;x++)
            printf("%lld ",set2[x]);
    }
    return 0;
}
