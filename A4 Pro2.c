#include<stdio.h>
int main()
{
    int ar[20],i;
    for(i=0;i<20;i++){
        scanf("%d",&ar[i]);
    }
    for(i=19;i>=0;i--){
        if(ar[i]%2==0){
            printf("%d\t",ar[i]);
        }
    }
    return 0;

}
