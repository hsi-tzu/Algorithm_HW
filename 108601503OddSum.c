#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int i,num,first_num,second_num,sum,n;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=0;
        scanf("%d",&first_num);
        scanf("%d",&second_num);
        if(first_num%2==0){
            first_num=first_num+1;
        }
        if(second_num%2==0){
            second_num=second_num-1;
        }
        n=((second_num-first_num)/2)+1;
        sum=((second_num+first_num)/2)*n;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;

}
