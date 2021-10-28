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
    deque<int> req;
    int max=1;
    int n,k,x;
    scanf("%d %d",&n,&k);
    FO(tc,n){
        scanf("%d",&x);
        req.push_back(x);
        if(tc>0){
            while((req.back()-req.front())>=1000){
                req.pop_front();
            }
        if(req.size()>max)
            max=req.size();
        }
    }
    if(max%k==0)
        printf("%d\n",max/k);
    else
        printf("%d\n",(max/k)+1);
}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
