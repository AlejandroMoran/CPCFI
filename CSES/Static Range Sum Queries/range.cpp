#include<bits/stdc++.h>
using namespace std;
void build(long long int n,long long int que[], long long int temp[]){
    for(int i=n;i<(2*n);i++)
        que[i]=temp[i-n];
    for(int i=(n-1);i>=1;i--)
        que[i]=(que[2*i]+que[2*i+1]);
};
long long int solu(long long int que[],long long int n,long long int i,long long int j,long long int L,long long int R){
    if(L > j || R < i) return 0;
    if(L >=i && R<=j) return que[n];
    long long int M = (L+R)/2;
    return solu(que,n*2, i, j, L, M)+solu(que,n*2+1, i, j, M+1, R);
};
int main(){
    long long int x,n,y=0,i,j;
    scanf("%lld %lld",&x,&n);
    while(__builtin_popcount(x)!=1){
        x++;
        y++;
    }
    long long int que[2*x]={0};
    long long int temp[x]={0};
    for(int i=0;i<(x-y);i++){
        scanf("%lld ",&temp[i]);
    }
    build(x,que,temp);
    printf("\n");
    printf("\n");
    for(int p=0;p<n;p++){
        scanf("%lld %lld",&i,&j);
        i--;
        j--;
        cout << solu(que,1,i,j,0,x-1) << endl;
    }
}