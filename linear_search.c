#include <stdio.h>
#include<conio.h>
int linear(int ar[],int target,int size){
  for(int i=0;i<size;i++){
    if(ar[i]==target){
    return i;
    }
  }
  return -1;
}
void main(){
  int arr[15]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
  int size =sizeof(arr)/sizeof(arr[0]);
  int target=18;
  printf("%d is at %d index",target,linear(arr,target,size) );
}
