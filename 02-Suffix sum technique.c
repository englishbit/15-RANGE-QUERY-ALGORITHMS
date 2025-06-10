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



    //logic for building the suffix sum array
    int suffix[n];
    suffix[n-1]=array[n-1];

    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+array[i];
    }


    //logic for printing the suffix sum array
    for(int i=0;i<n;i++){
        printf("%d ",suffix[i]);
    }







    return 0;
}
