#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1){
        printf("wrong input\n");
        return -1;
    }

    
    //logic for taking input
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    //logic for building the prefix sum array
    int prefix[n];
    prefix[0]=array[0];

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+array[i];
    }


    //logic for printing the array 
    for(int i=0;i<n;i++){
        printf("%d ",prefix[i]);
    }







    return 0;
}
