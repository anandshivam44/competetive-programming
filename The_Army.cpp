//#include<algorithm> 
//#include <stdlib.h>
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}
int abs(int a){
    if(a<0){
        return (-1)*a;
    }
    return a;
}
int main() {
    int t;
    scanf("%d",&t);
    int N,M;
    while (t--)
    {
        scanf("%d%d",&N,&M);
        int position;
        int pos_min=1111111;
        int pos_max=-pos_min;
        int army[N];
        while (M--)
        {
            scanf("%d",&position);
            pos_max=max(pos_max,position);
            pos_min=min(pos_min,position);
            }
            //printf("%d    %d",pos_max,pos_min);
        for (int j  = 0; j < N; j++)
        {
            printf("%d ",max(abs(j-pos_max),abs(j-pos_min)));
        }
        printf("\n");
    }
    return 0;
}
