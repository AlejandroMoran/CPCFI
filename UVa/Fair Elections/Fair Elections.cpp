#include<bits/stdc++.h>

int main() {
    using namespace std;
    int T, M, N, votosM, votosN;
    int n, m,res=0;
    priority_queue<int> jack;
    priority_queue<int, vector<int>, std::greater<int> > john;
    scanf("%d", &T);
    while(T--){
        votosM=0;
        votosN=0;
        scanf("%d %d",&N,&M);
        int auxN=N;
        while(auxN--){
            scanf("%d", &n);
            john.push(n);
            votosN+=n;
        }
        while(M--){
            scanf("%d", &m);
            jack.push(m);
            votosM+=m;
        }
        while(votosN<=votosM){
            if(john.top()<jack.top()){
                N=john.top();
                M=jack.top();
                john.pop();
                jack.pop();
                john.push(M);
                jack.push(N);
                votosN = votosN - N + M;
                votosM = votosM + N -M;
                res++;
            }
            else {
                res=-1;
                break;
            }
        }
        printf("%d\n",res);
        res=0;
        jack =priority_queue <int>();
        john = priority_queue<int, vector<int>, std::greater<int> > ();
    }
    return 0;
}
