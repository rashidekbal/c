#include<stdio.h>
#include<conio.h>
void InsertionSort(int arr[],int size){ // sorting function
  for(int i=0;i<size-1;i++){ //loop till n-2
    for(int j=i+1;j>0;j--){ //loop till i+1
      if(arr[j]<arr[j-1]){// if a>b swapp
        int temp=arr[j-1]; 
        arr[j-1]=arr[j];
        arr[j]=temp;

      }else{
        break;
      }
    }
  }
}
void main(){
  int Unsorted[]={1,2,3,4,5,6,7,8,9,10};//usorted array
  int size=sizeof(Unsorted)/sizeof(Unsorted[0]);//size of array
  InsertionSort(Unsorted,size);//sorting
  for(int i=0;i<size;i++){// printing all elements of array
    printf(" %d",Unsorted[i]);
  }

}