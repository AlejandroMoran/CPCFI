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
    int days,npart,perdidos=0,no=0,viernes=6,sabado=7,semana=-1;
    scanf("%d",&days);
    scanf("%d",&npart);
    int partidos[npart];
    FO(tc,npart)
        scanf("%d",&partidos[tc]);
    FO(tc,days){
        FO(x,npart){
            if((tc+1)!=0&&((tc+1)%partidos[x])==0&&(tc+1)!=(viernes+(7*semana))&&(tc+1)!=(sabado+(7*semana))&&no==0){
                perdidos++;
                no=1;
            }
        }
        if((tc%7)==0)
            semana++;
        no=0;
    }
    printf("%d\n",perdidos);
}

int main() {
    int n=1;
    scanf("%d",&n);
    FO(tc, n){
        solve();
    }
    return 0;
}
