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

void solve(vector<char> letras,vector<char> finale) {
    char letra;
    int salir=0;
    vector<char> rev;
    while(salir==0){
        letras.clear();
        rev.clear();
        scanf("%c",&letra);
        while(letra!='\n'){
            if(letra>64&&letra<91||letra>96&&letra<123)
                letras.push_back(letra);
            if(letras==finale){
                salir=1;
                break;
            }
            scanf("%c",&letra);
        }
        if(salir==0){
            for (int it = 0; it<letras.size(); it++){
                rev.push_back(tolower(letras[(letras.size())-it-1]));
                letras[it]=tolower(letras[it]);
            }
            if(letras==rev)
                printf("You won't be eaten!\n");
            else
                printf("Uh oh..\n");
        }
    }
}

int main() {
    vector<char> letras;
    vector<char> finale{'D','O','N','E'};
    int n=1;
    FO(tc, n){
        solve(letras,finale);
    }
    return 0;
}
