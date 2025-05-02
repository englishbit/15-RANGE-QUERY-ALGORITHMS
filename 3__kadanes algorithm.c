#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);


    //logic for special case
    if(n<1){
        printf("wrong input\n");
        return 0;
    }

    //logic for taking input
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }



    //logic for kadanes algorithm 
    int crnt_max=array[0];
    int glbl_max=array[0];




    for(int i=1;i<n;i++){
        if(array[i]>crnt_max+array[i]){
            crnt_max=array[i];
            
        }else{ crnt_max=crnt_max+array[i];}
        
           
        

        if(crnt_max>glbl_max){
            glbl_max=crnt_max;
        }
    }

    printf("%d",glbl_max);













    return 0;
}