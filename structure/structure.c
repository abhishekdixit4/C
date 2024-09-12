#include <stdio.h>
#include <string.h>
struct Person
 {
 char name[50];
 int stu_id;
 float cgpa;
} person1;
int main()
{
 strcpy(person1.name, "Abhishek");
 person1.stu_id = 830;
 person1.cgpa = 9.68;
 printf("Name: %s\n", person1.name);
 printf("student id :%d\n",person1.stu_id );
 printf("student cgpa : %.2f", person1.cgpa);
 return 0;
}