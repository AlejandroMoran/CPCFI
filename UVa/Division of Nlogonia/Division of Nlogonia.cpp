#include<stdio.h>
int main() {
    int n;
    int x1,y1;
    int x,y,z;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d %d",&x1,&y1);
        for(z=0;z<n;z++){
            scanf("%d %d",&x,&y);
            if(x==x1||y==y1)
                printf("divisa\n");
            else if(x>x1&&y>y1)
                printf("NE\n");
            else if(x>x1&&y<y1)
                printf("SE\n");
            else if(x<x1&&y>y1)
                printf("NO\n");
            else if(x<x1&&y<y1)
                printf("SO\n");
        }
        scanf("%d",&n);
    }
    return 0;
}
