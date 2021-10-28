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
    int n, m;
    si(n); si(m);
    unordered_map<char, string> reglas;
    FO(tc,n){
        char c;
        cin >> c;
        cin.ignore(4);
        string s;
        cin >> s;
        reglas[c] = s;
    }
    string s, e;
    cin >> e;
    for(int i = 0; i < m; i++) {
        s=e;
        e="";
        for(auto j : s) {
            if(reglas.count(j) > 0) {
                e=e+reglas[j];
            }
            else {
                e=e+j;
            }
        }
    }
    cout << e << endl;
}


int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
