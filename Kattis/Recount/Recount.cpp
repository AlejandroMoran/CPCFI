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
    int max=0,cont=0;
    bool empate=false;
    string maxs;
    string c;
    map<string,int> tabla;
    getline (cin,c);
    while(c!="***"){
        cont++;
        auto it = tabla.find(c);
        if(it != tabla.end())
            tabla[c]++;
        else
            tabla[c]=1;
        if(tabla[c]>max){
            maxs=c;
            max=tabla[c];
        }
        getline (cin,c);
    }
    tabla[maxs]=0;
    for (auto it = tabla.begin(); it != tabla.end(); it++){
        if(it->second==max)
            empate=true;
    }
    if(empate)
        printf("Runoff!");
    else
        printf("%s",((string)maxs).c_str());
}

int main() {
    int n=1;
    FO(tc, n){
        solve();
    }
    return 0;
}
