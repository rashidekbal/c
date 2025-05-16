#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  int roll;
  double marks;
}student1;
void main(){
  strcpy(student1.name,"rashid");
  student1.roll=241117;
  student1.marks=78.3;
  printf("%s\n",student1.name);
struct Student student2={"rashid",24118,78.30};
printf("%s",student2.name);

}