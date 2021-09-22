#include <bits/stdc++.h>
using namespace std;

#define endl            '\n'
#define FO(i, b)        for (int i = 0; i < (b); i++)
#define FOR(i, a, b)    for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)   for (int i = (a); i > (b); i--)
#define TR(v, arr)      for(auto& (v) : (arr))
#define pint(x)         printf("%d\n", x);
#define pll(x)          printf("%lld\n", x);
#define si(x)           scanf("%d", &x);
#define sl(x)           scanf("%lld", &x);
#define all(x)          x.begin(), x.end()

typedef vector<int> vi;
typedef vector<long long> vll;

// -----------------------------------------------------------------------------
// Here begins our solution
// -----------------------------------------------------------------------------

void solve() {
    int n,num,con1=0,con2=0,ent=0,deci=0,contador=1,d,x;
    float de,sum=0;
    si(n);
    while(n!=0){
        if(contador!=1)
            printf("\n");
        FO(tc,n){
            si(num);
            sum=sum+num;
        }
        if((sum/n)!=(int)(sum/n)){
            de=sum/n;
            ent=sum/n;
            deci=1;
        }
        else
            ent=sum/n;
        if(deci==1){
            sum=sum-(ent*n);
            d = __gcd(abs((int)sum), n);
            num=n/d;
            while(num != 0) {
                    num = num / 10;
                    con1++;
                }
            num=abs((int)sum)/d;
            while(num != 0) {
                    con2++;
                    num = num / 10;
                }
            if(ent>=0&&sum>=0){
                num=ent;
                printf("Case %d:\n",contador);
                while(num != 0) {
                    num = num / 10;
                    printf(" ");
                }
                for(x=0;x<(con1-con2);x++)
                    printf(" ");
                printf("%d\n",abs((int)sum)/d);
                if(ent!=0)
                    printf("%d",abs(ent));
                num=n/d;
                while(num != 0) {
                    num = num / 10;
                    printf("-");
                }
                printf("\n");
                num=ent;
                while(num != 0) {
                    num = num / 10;
                    printf(" ");
                }
                printf("%d",n/d);
            }
            else{
                num=ent;
                printf("Case %d:\n",contador);
                while(num != 0) {
                    num = num / 10;
                    printf(" ");
                }
                for(x=0;x<(con1-con2);x++)
                    printf(" ");
                printf("  %d\n",abs((int)sum/d));
                printf("- ");
                if(ent!=0)
                    printf("%d",abs(ent));
                num=n/d;
                while(num != 0) {
                    num = num / 10;
                    printf("-");
                }
                printf("\n");
                num=ent;
                while(num != 0) {
                    num = num / 10;
                    printf(" ");
                }
                printf("  %d",n/d);
            }
        }
        else{
            printf("Case %d:\n",contador);
            if(ent>=0)
                printf("%d",abs(ent));
            else
                printf("- %d",abs(ent));
        }
        con1=0;
        con2=0;
        deci=0;
        contador++;
        sum=0;
        si(n);
    }

}

int main() {
    int T=1;
    FO(tc, T){
        solve();
    }
    printf("\n");
    return 0;
}
