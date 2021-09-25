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
    ll n,t;
    ll L,R;
    sl(n);
    vector<pair<ll, ll>> soldados(n+1, make_pair(-1, -1));
    while(n!=0){
        FO(tc,n+1){
            soldados[tc].first=tc-1;
            soldados[tc].second=tc+1;
           //printf("%d %d\n",soldados[tc].first, soldados[tc].second);
        }
        sl(t);
        FO(tc,t){
            scanf("%lld %lld",&L,&R);
            if(soldados[L].first<1)
                printf("* ");
            else
                printf("%lld ",soldados[L].first);
            if(soldados[R].second<1||soldados[R].second>n)
                printf("*\n");
            else
                printf("%lld\n",soldados[R].second);
            soldados[soldados[R].second].first=soldados[L].first;
            soldados[soldados[L].first].second=soldados[R].second;
        }
        printf("-\n");
        soldados.clear();
        sl(n);
        soldados.resize(n+1, make_pair(-1, -1));
    }

}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
