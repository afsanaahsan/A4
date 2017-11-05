#include<stdio.h>
int main()
{
    int ar[20],i,count=0;
    printf("Enter fifteen numbers: ");
    for(i=0;i<15;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<15;i++){
        if(ar[i]>=0 && ar[i]<=9){
            count++;
        }
    }
    printf("%d times",count);
    return 0;
}
