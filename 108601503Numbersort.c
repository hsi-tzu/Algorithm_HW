#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void check(char **arr,int row,int col);
int biggest(int a[],int row);
int main(){
    int times,row,col;
    scanf("%d",&times);
    for(int k=0;k<times;k++){

        scanf("%d",&col);//一列幾個
        scanf("%d",&row);//有幾列
        char word[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("\n%c",&word[i][j]);
            }
        }

        char *ptr[row];
        for(int i=0;i<row;i++){
            ptr[i]=word[i];
        }

        check(ptr,row,col);

    }



    return 0;
}
void check(char **arr,int row,int col){
    int count[row];
    int biggest_num;

    for(int i=0;i<row;i++){
        count[i]=0;
        for(int j=0;j<col;j++){
            for(int k=j+1;k<col;k++){
                if(arr[i][j]>arr[i][k]){
                    count[i]++;
                }
            }

        }
    }
    //find
    for(int i=0;i<row;i++){
        biggest_num=biggest(count,row);
        for(int j=0;j<col;j++){
            printf("%c",arr[biggest_num][j]);
        }
        count[biggest_num]=-1;
        printf("\n");

    }
    return 0;
}
int biggest(int c[],int row){
    int biggest=1226;
    int biggest_row=0;
    for(int i=0;i<row;i++){
        if(c[i]>=0&&c[i]<biggest){
            biggest=c[i];
            biggest_row=i;
        }
    }
    return biggest_row;

}
