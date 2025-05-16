#include<stdio.h>
#include<conio.h>
int findMaxIndex(int arr[],int lastIndex){ // find max element position
  int maxIndex=0; // intially max index =0
  int maxElement=arr[0]; // intially max elemt is first element
  for(int i=0;i<=lastIndex;i++){ 
    if(arr[i]>maxElement){ //if arr[i] is more than the previous max element run code inside
      maxElement=arr[i];//put new max element
      maxIndex=i;//put new max index
    }
  }
  return maxIndex; //return location of max element
}
void swapItems(int arr[],int maxIndex,int lastIndex){ //swapping function
  int temp=arr[lastIndex]; // storing element of last index for future
  arr[lastIndex]=arr[maxIndex];//putting max element in last index
  arr[maxIndex]=temp;//putting temp in max elements position
}
void SelectionSort(int arr[],int size){ //sorting function
  for(int i=0;i<size;i++){ //loop runs till n-1
    int lastIndex=size-1-i; //last index is changed on every loop 
    int maxIndex=findMaxIndex(arr,lastIndex); // index of max element if searched
    swapItems(arr,maxIndex,lastIndex); // max item is swapped with index last element


  }

}
void printAll( int arrp[],int size){ //simple function for printing any array
  for(int i=0;i<size;i++){
    printf(" %d",arrp[i]);
  }
}

// main function
void main(){
  int nums[]={-2,75,0,-35};//unsorted array
  int size=sizeof(nums)/sizeof(nums[0]); //checking array size
  SelectionSort(nums,size); //sorting
  printAll(nums,size); //printing

  
}



