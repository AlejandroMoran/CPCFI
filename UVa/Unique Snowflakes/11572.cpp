#include<bits/stdc++.h>
using namespace std;
template<typename A, typename B>
pair<B,A> flip_pair(const pair<A,B> &p)
{
    return pair<B,A>(p.second, p.first);
}

template<typename A, typename B>
multimap<B,A> flip_map(const multimap<A,B> &src)
{
    multimap<B,A> dst;
    transform(src.begin(), src.end(), inserter(dst, dst.begin()), 
                   flip_pair<A,B>);
    return dst;
}

int main(void)
{
    //multimap<int, int> src;
    //src.emplace(1,3);
   // src.emplace(2,1);
   // src.emplace(121,4);

   // multimap<int, int> dst = flip_map(src);
   // dst.erase(dst.begin());
   // src = flip_map(dst);
   // for(auto it = src.cbegin(); it != src.cend(); ++it)
    //               cout << it->first << " " << it->second << "\n";
    multimap<long long int,long long int>snow;
    multimap<long long int,long long int>dst;
    multimap<long long int,long long int>::iterator i;
    long long int n,tc,pos,res=0,cont=0;
    scanf("%lld",&tc);
    for(long long int x=1;x<=tc;x++){
        scanf("%lld",&n);
        for(long long int y=0;y<n;y++){
            cont++;
            scanf("%lld",&pos);
            i = snow.find(pos);
            if(i!=snow.end()&&snow.size()>0){
                if(res<cont-1&&cont>0)
                    res=cont-1;
                cont=y-(i->second);
                dst.clear();
                dst = flip_map(snow);
                i = dst.find(i->second);
                snow.clear();
                //printf("y%lld %lld\n",y,i->second);
                dst.erase(dst.begin(),i);
                dst.erase(i);
                dst.emplace(y,pos);
                snow = flip_map(dst);
            }
            else{
                snow.emplace(pos,y);
            }
           // printf("pos%lld %lld\n",pos,cont);
            //for(auto it = snow.cbegin(); it != snow.cend(); ++it)
                 //  std::cout << it->first << " " << it->second << "\n";
        }
        if(res<cont&&cont>0)
            res=cont;
        if(snow.size()==1&&res<1)
            res=1;
        cont=0;
        snow.clear();
        printf("%lld\n",res);
        res=0;
    }
}
