#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int time,i,j,sum;
    char word[7];
    scanf("%d",&time);
    for(i=0;i<time;i++){
        scanf("%s",&word);
        j=0;
        sum=0;
        while(j<strlen(word)){
            sum=sum+(word[j]-64)*(pow(26,strlen(word)-j-1));
            j++;
        }
        printf("%d\n",sum);

    }


    return 0;
}
