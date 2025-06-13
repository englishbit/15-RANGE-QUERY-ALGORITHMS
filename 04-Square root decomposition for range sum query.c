#include<stdio.h>
#include<math.h>

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


    //logic for filling the block sum array with 0
    int blk_size=(int)ceil(sqrt(n));

    int num_blk=(int)ceil((double)n/blk_size);

    int block_sum[num_blk];



    for(int i=0;i<num_blk;i++){
        block_sum[i]=0;
    }


    //logic for computing the block sum array
    for(int i=0;i<n;i++){
        block_sum[i/blk_size]+=array[i];
    }


    //logic for query

    printf("Enter the queries\n");
    int q;
    scanf("%d",&q);

    while(q--){

        //logic for taking the range
        int sum=0;
        int L,R;
        printf("Enter the range\n");
        scanf("%d %d",&L,&R);

        //logic for special case 
        if(L<0||R>=n||L>R){
            printf("Invalid range\n");
            continue;
        }

        
        int strt_blk=L/blk_size;
        int end_blk=R/blk_size;

        //logic for summing the same block
        if(strt_blk==end_blk){

            for(int i=L;i<=R;i++){
                sum+=array[i];
            }

        }else{


            //logic for summing the start block
            for(int i=L;i<(strt_blk+1)*blk_size&&i<=R;i++){
                sum+=array[i];
            }


            //logic for summing the blocks between start and end block
            for(int i=(strt_blk+1);i<end_blk;i++){
                sum+=block_sum[i];
            }
            
            //logic for summing the end block
            for(int i=end_blk*blk_size;i<=R;i++){
                sum+=array[i];
            }

        }

        //logic for printing the output
        printf("the sum from %d to %d is %d\n",L,R,sum);
        
    }
    

























    return 0;
}
