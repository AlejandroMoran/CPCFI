#include<bits/stdc++.h>
using namespace std;
int Elementos[30005];
int Gets[30005];
multiset<int> numeros;
int main(){
    int tc;
    scanf("%d\n",&tc);
    while (tc--){
        int M, N;
        scanf("%d %d",&M,&N);        
        for (int i = 0; i < M; ++i)
            scanf("%d",&Elementos[i]);
        for (int i = 0; i < N; ++i)
            scanf("%d",&Gets[i]);
        numeros.clear();
        numeros.insert(Elementos[0]);
        auto it=numeros.begin();
        int in=0;
        for(int num=1;num<M;num++) {
            while(in<N&&Gets[in]==num){
                in++;
                printf("%d\n",*it);
                it++;
            }
            numeros.insert(Elementos[num]);
            if (it==numeros.end()||Elementos[num]<*it){
                it--;
            }
        }
        while (in<N&&Gets[in]==M){
                in++;
                printf("%d\n",*it);
                it++;
        }
        if(tc>0)
            printf("\n");
    }
}