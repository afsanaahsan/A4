#include<stdio.h>
int main()
{
    int ar[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d\t",ar[i]);
    }
    return 0;
}
