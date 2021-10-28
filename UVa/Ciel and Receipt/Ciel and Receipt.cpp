#include<bits/stdc++.h>
int main(){
    int tc,x,cont=0,y=0,ans=0;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++){
        scanf("%d",&x);
        y=pow(2, ceil(log(x)/log(2)));
        cont=ceil(log(x)/log(2));
        if(y>x){
            cont--;
            y=pow(2, cont);
        }
        if(y>2048){
            y=2048;
            cont=11;
        }
        if(x==y)
            ans=1;
        else{
            ans=1;
            while(y!=x){
                if(cont==0){
                    ans=ans+(x-y);
                    break;
                }
                else if(y+pow(2,cont)>x)
                    cont--;
                else{
                    y=y+pow(2,cont);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
        cont=0;
        x=0;
        y=0;
        ans=0;
    }
}
