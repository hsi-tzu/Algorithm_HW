#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Fibonacci(int n);

int main(){
    int input_time,i,F_num,j;

    scanf("%d",&input_time);
    for(i=0;i<input_time;i++){
        scanf("%d",&F_num);
        printf("%d\n",Fibonacci(F_num));
    }

    return 0;
}
int Fibonacci(int n){
    if(n==1||n==2){
        return 1;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);

}
