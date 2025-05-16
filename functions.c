#include<stdio.h>
// swapping two numbers using call by value
void  swap(int a, int b){
  
  int temp=b;
  b=a;
  a=temp;
  printf("value of a is : %d and value of b is : %d  after swapping with call by value \n", a, b);

}
void main(){
  int a=97;
  int b=95;
  printf("before swapping values of a : %d and value of b : %d  in main function are \n",a,b);
  swap(a,b);
  printf("after swapping values of a : %d and value of b : %d  in main function are \n",a,b);
  
}