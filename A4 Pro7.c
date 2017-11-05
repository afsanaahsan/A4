#include<stdio.h>
int main()
{
    int ar[10],i;
    printf("Enter ten numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<10;i++){
        printf("%d %d %d %d %d %d %d %d %d %d",ar[0],ar[2],ar[4],ar[6],ar[8],ar[1],ar[3],ar[5],ar[7],ar[9]);
        break;
    }
    return 0;
}
