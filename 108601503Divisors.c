#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int times,L,U,most_d,count_d,num_of_d;
    scanf("%d",&times);
    for(int i=0;i<times;i++){
        scanf("%d",&L);
        scanf("%d",&U);
        most_d=0;
        num_of_d=0;
        for(int j=L;j<=U;j++){
            count_d=0;
            for(int k=1;k<=sqrt(j);k++){
                if(j%k==0 && (j/k)!=k){
                    count_d=count_d+2;
                }
                if(j%k==0 && (j/k)==k){
                    count_d++;
                }
            }
            if(count_d>most_d){
                most_d=count_d;
                num_of_d=j;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,U,num_of_d,most_d);

    }
    return 0;
}
