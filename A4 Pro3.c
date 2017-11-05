#include<stdio.h>
int main()
{
    int ar[10],i,num,flag=0;
    printf("Enter ten numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter your search number: ");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(num==ar[i]){
            flag++;
        }
    }
    if(flag==1){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
