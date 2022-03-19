#include <iostream>
#include <string>
using namespace std;
void quick_sort(int *pivot,int left,int right,int counting);


int main(){

    int *ans;
    string input;
    int n,j;
    int arr[100000];
    int i=0,count=0;

    while(cin>>n){
        arr[i] = n;
        count++;
        i++;
        if (getchar() == '\n')  break;
    }
    for(j=0;j<count-1;j++){
        cout<<arr[j]<<" ";
    }
    cout<<arr[count-1]<<endl;

    quick_sort(arr,0,count-1,count);


    return 0;
}
void quick_sort(int array[],int left,int right,int counting){
    if(left>=right){
        return;
    }
    //printf("in left %d right %d\n ",left,right);
    int pivot;
    int i,temp,l,r;
    pivot=array[right]; //pivot為最右邊
    //printf("\npivot %d \n",pivot);
    l=left;
    r=right;
    while(l!=r){ //
        while(array[l]<pivot && l<r){
            //printf("left %d ",l);
            l++;
            //printf("left %d \n",l);
        }
        while((array[r]>=pivot) && l<r){
            //printf("right %d ",r);
            r--;
            //printf("right %d \n",r);
        }
        if(l<r){
            temp=array[l];
            array[l]=array[r];
            array[r]= temp;
            for(i=0;i<counting-1;i++){
                printf("%d ",array[i]);
            }
            printf("%d\n",array[counting-1]);
        }

    }
    if(array[l]!=pivot){
         //對調pivot和l
        array[right]=array[l];
        array[l]= pivot;
        for(i=0;i<counting-1;i++){
            printf("%d ",array[i]);
        }
        printf("%d\n",array[counting-1]);

    }

        quick_sort(array,left,l-1,counting);
        quick_sort(array,l+1,right,counting);


    return;
}


