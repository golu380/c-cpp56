#include<stdio.h>

struct Student
{
    int roolno;
    int marks;
    char name[50];
};
int main(){
struct Student s1;
s1.roolno = 101;
s1.marks = 90;
// s1.name = "Amit";
printf("roll no of student: %d\n",s1.roolno);
printf("marks of student: %d",s1.marks);
struct Student s2  = {104,89,"yatharth"};
printf("roll no of student: %d\n",s2.roolno);
printf("marks of student: %d",s2.marks);
printf("name of student: %s\n",s2.name);

printf("enter the student name: \n");
scanf("%49s",s1.name);
printf("student name is: %s",s1.name);

struct Student st[3];
for (int i = 0;i<3;i++){
    printf("Enter the name of student\n");
    scanf("%49s",st[i].name);
      printf("Enter the roll no of student\n");
    scanf("%d",&st[i].roolno);
      printf("Enter the marks of student\n");
    scanf("%d",&st[i].marks);
}
printf("\n \t student details are: \n");
for (int i = 0;i<3;i++){
    printf("name of student is: \n");
    printf("%s",st[i].name);
      printf("the roll no of studentis: \n");
    printf("%d",st[i].roolno);
      printf("the marks of student is: \n");
    printf("%d",st[i].marks);
}
    return 0;
}