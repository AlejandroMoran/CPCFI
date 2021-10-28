#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>,greater<pair<int, pair<int, int>>>> cola;
    int Q,perio;
    int x,y,n;
    char ce;
    scanf("%cegister %d %d\n",&ce,&x,&y);
    while(ce!='#'){
        cola.push(pair<int, pair<int, int> >(y, pair<int, int>(x, y)));
        scanf("%cegister %d %d\n",&ce,&x,&y);
    }
    scanf("%d", &n);
	while (n--) {
		pair<int, pair<int, int> > pr = cola.top();
		cola.pop();
		printf("%d\n", pr.second.first);
		pr.first += pr.second.second;
		cola.push(pr);
	}
}