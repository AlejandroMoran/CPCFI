#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    scanf("%d",&k);
    while(k){
        vector<int> num;
        while(k--){
            scanf("%d",&n);
            num.push_back(n);
        }
        for(auto i = num.begin();i != num.end()-5; i++)
            for(auto it = i+1;it != num.end()-4; it++)
                for(auto itt = it+1;itt != num.end()-3; itt++)
                    for(auto ittt = itt+1;ittt != num.end()-2; ittt++)
                        for(auto itttt = ittt+1;itttt != num.end()-1; itttt++)
                            for(auto ittttt = itttt+1;ittttt != num.end(); ittttt++)
                                printf("%d %d %d %d %d %d\n",*i,*it,*itt,*ittt,*itttt,*ittttt);
        scanf("%d",&k);
        if(k)
            printf("\n");
    }
}
