#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num,i,sum,n,time;
    scanf("%d",&time);
    for(i=1;i<=time;i++){
        scanf("%d",&num);
        while((num!=4) &&(num!=1)){
            sum=0;
            while(num!=0){
                n=num%10;
                sum=sum+(n*n);
                num=num/10;
            }
            num=sum;


        }
        if(num==1){
            printf("Happy\n");
        }
        else{
            printf("Not Happy\n");
        }
    }
    return 0;

}

