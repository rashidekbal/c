#include <stdio.h>
void bubble(int arr [],int size){
  
  for(int i=0;i<size;i++){
    int swapped =0;
   for(int j=1;j<size-i;j++){
    if(arr[j]<arr[j-1]){
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    swapped=1;
    }
   }
 if(!swapped){
   break; }}}
void main(){
  int arr[]={2,49,9,962,9,4,6,1,91,8,1,46,9,8,1,3,5,4,9,1,8,1,6,4,8,1,8,1,8,41,8,4,8,1,8,
    4,1,159,465,6,499,-2,9,61,-12,-89,-16};//target array;
  int size=sizeof(arr)/sizeof(arr[0]);
  bubble(arr,size);
  for(int i=0;i<size;i++){
    printf(" %d",arr[i]);
  }

}
