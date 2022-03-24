#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int times,sum,temp_sum,j,lost;

    scanf("%d",&times);
    for(int i=0;i<times;i++){
        scanf("%d",&sum);
        temp_sum=0;
        j=1;
        while(1){
            temp_sum=temp_sum+j;
            if(temp_sum>sum){
                break;
            }
            j++;
        }
        lost=temp_sum-sum;
        printf("%d %d\n",lost,j);
    }

    return 0;
}
