#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void bubble_sort(int arr[],int len);

int main(){
    int input_time,i,arr_num,j;
    int bubble_arr[50];
    scanf("%d",&input_time);
    for(i=0;i<input_time;i++){
        scanf("%d",&arr_num);
        for(j=0;j<arr_num;j++){
            scanf("%d",&bubble_arr[j]);
        }
        bubble_sort(bubble_arr,arr_num);
    }


    return 0;
}

void bubble_sort(int arr[],int len){
    int time,i,j,temp;
    time=0;
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                time++;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
        }
    }
    printf("Optimal swapping takes %d swaps.\n",time);
    return;

}
