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
void solve() {
    int n, med;
    int suma = 0;
    map<int,int> mapa;
    si(n); si(med);
    int v[n];
    int pos;
    FO(tc,n) {
        si(v[tc]);
        if(v[tc] == med) {
            pos = tc;
        }
    }
    mapa[0]=1;
    for(int i = pos+1; i < n; i++) {
        if(v[i] > med)
            suma++;
        else
            suma--;
        mapa[suma]++;
    }
    ll ans = mapa[0];
    suma = 0;
    for(int i = pos-1; i >= 0; i--) {
        if(v[i] > med)
            suma--;
        else
            suma++;
        ans += mapa[suma];
    }
    printf("%lld",ans);
}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
