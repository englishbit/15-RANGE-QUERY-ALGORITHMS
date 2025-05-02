#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    if(n<1){
        printf("wrong input\n");
        return -1;
    }

    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }


    int prefix[n];
    prefix[0]=array[0];

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+array[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ",prefix[i]);
    }







    return 0;
}