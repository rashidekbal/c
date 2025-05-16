#include<stdio.h>
int binary(int arr[],int size,int target){
  int start=0;
    int end=size-1;
  if(arr[0]<arr[size-1]){
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==target){
        return mid;
      }else if(arr[mid]<target){
        start=mid+1;
      }else{
        end=mid-1;
      }
    }
  }else{
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==target){
        return mid;
      }else if(arr[mid]<target){
        end=mid-1;
      }else{
        start=mid+1;
      }
    }
  }
  return -1;
}
void main(){
  int sortedArray[15]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};

  int size=sizeof(sortedArray)/sizeof(sortedArray[0]);
  int target=18;
  printf("%d",binary(sortedArray,size,target));
}