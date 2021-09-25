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
    int x, y,x2=0,y2=0,salir=0;
    int c=0,co=0,cont=0,con=0,con1=0,con2=0,con3=0,con4=0;
    scanf("%d %d",&x,&y);
    while(salir==0){
        char grande[x][x];
        char peque[y][y];
        char peque1[y][y];
        char peque2[y][y];
        char peque3[y][y];
        FO(row,x){
            FO(col,x){
                scanf(" %c",&grande[row][col]);
            }
        }
        FO(row,y){
            FO(col,y){
                scanf(" %c",&peque[row][col]);
                peque1[col][(y-1)-row]=peque[row][col];
                peque2[(y-1)-row][(y-1)-col]=peque1[col][(y-1)-row];
                peque3[(y-1)-col][row]=peque2[(y-1)-row][(y-1)-col];
            }
        }
        x2=0;
        y2=0;
        while((x2+y)<=x&&(y2+y)<=x){
            FOR(row,x2,y+x2){
                FOR(col,y2,y+y2){
                    if(peque[row-x2][col-y2]!=grande[row][col])
                        c=1;
                    if(peque1[row-x2][col-y2]!=grande[row][col])
                        co=1;
                    if(peque2[row-x2][col-y2]!=grande[row][col])
                        con=1;
                    if(peque3[row-x2][col-y2]!=grande[row][col])
                        cont=1;
                }
            }
            if(c!=1)
                con1++;
            else
                c=0;
            if(co!=1)
                con2++;
            else
                co=0;
            if(con!=1)
                con3++;
            else
                con=0;
            if(cont!=1)
                con4++;
            else
                cont=0;
            x2++;
            if(x2==(x-(y-1))&&y2<=(x-(y-1))){
                y2++;
                x2=0;
            }
        }
        c=0;
        co=0;
        con=0;
        cont=0;
        printf("%d %d %d %d\n",con1,con2,con3,con4);
        con1=0;
        con2=0;
        con3=0;
        con4=0;
        scanf("%d %d",&x,&y);
        if(x==0)
            salir=1;
    }
}

int main() {
    int T=1;
    FO(tc, T){
        solve();
    }
    return 0;
}
