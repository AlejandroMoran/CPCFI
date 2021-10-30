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

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// -----------------------------------------------------------------------------
// Here begins our solution
// -----------------------------------------------------------------------------
int in(int L[],int n){
    int j=n+1,k,z=-1,tot=0,temp;
    for(int i=1;i<n;i++){
        for(int x=(i-1);x<n;x++){
            if(L[x]<j){
                j=L[x];
                k=x;
            }
        }
        reverse(L+(i-1),L+(k+1));
        tot=tot+((k+1)-i)+1;
        j=n+1;
    }
    return tot;
}

void solve() {
    int tc,n,x=1,y;
    si(tc);
    while(tc--){
        si(n);
        int L[n];
        for(int i=0;i<n;i++)
            si(L[i]);
        printf("Caso #%d: %d\n",x,in(L,n));
        x++;
    }
}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
