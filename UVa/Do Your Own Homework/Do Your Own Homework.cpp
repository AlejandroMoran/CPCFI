#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> temas;
    int d,n,y;
    map<string,int>::iterator i;
    string s;
    scanf("%d",&y);
    for(int l=0;l<y;l++){
        scanf("%d",&n);
        for(int x=0;x<n;x++){
            cin >> s;
            scanf("%d",&d);
            temas.emplace(s,d);
        }
        scanf("%d",&d);
        cin >> s;
        printf("Case %d: ",l+1);
        i = temas.find(s);
        if (i != temas.end()){
            if((i->second)<=d)
                printf("Yesss\n");
            else if((i->second)<=(d+5))
                printf("Late\n");
            else
                printf("Do your own homework!\n");
        }
        else
            printf("Do your own homework!\n");
        temas.clear();
    }
    return 0;
}
