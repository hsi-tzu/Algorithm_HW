#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int min(int a,int b,int c);
int main(){
    int times,input,temp,m2,m3,m5,index;

    scanf("%d",&times);
    for(int i=0;i<times;i++){
        scanf("%d",&input);
        if(input==1){
            printf("1\n");
            break;
        }
        int num[input];
        num[0]=1;
        m2=0;
        m3=0;
        m5=0;
        for(index=1;index<input;index++){
            temp =min(num[m2]*2,num[m3]*3,num[m5]*5);
          //  printf("min %d\n",temp);
            if(temp==num[m2]*2){
                m2++;
            }
            if(temp==num[m3]*3){
                m3++;
            }
            if(temp==num[m5]*5){
                m5++;
            }
            num[index]=temp;
        }
        printf("%d\n",num[index-1]);
    }

    return 0;
}

int min(int a,int b,int c){
    int smallest;
    if(a<b){
        smallest=a;
    }
    else{
        smallest=b;
    }
    if(c<smallest){
        smallest=c;
    }
    return smallest;
}
