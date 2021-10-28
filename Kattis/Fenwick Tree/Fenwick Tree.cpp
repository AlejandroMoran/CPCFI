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
int N,Q,i;
char c;
ll B[5000001],d;
void update(int x, long long y){
    for(; x <= N; x += x&-x){
        B[x] += y;
    }
}
long long query(int x) {
    long long sum = 0;
    for(; x > 0; x -= x&-x)
    sum += B[x];
    return sum;
}
void solve() {
scanf("%d%d",&N,&Q);
while (Q--){
    scanf(" %c ",&c);
    if (c=='+'){
        scanf("%d%lld",&i,&d);
        update(i+1,d);
        }
    else {
        scanf("%d",&i);
        if(i) printf("%lld\n",query(i));
        else printf("0\n");
        }
    }

}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
