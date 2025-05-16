#include<stdio.h>
void withfullObjectptr(int *ptr,int size){
  for(int x=0;x<size;x++){
    printf(" %d ",*(ptr+x));
  }

}

void main(){
  int list[]={2,5,9,7,8,35,64,24,35};

  withfullObjectptr(list,9);
 
}