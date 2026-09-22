#include<stdio.h>
struct student{
    int roll;
    float marks;
};

union data{
    int roll;
    float marks;
    int age;
};


int main(){

    struct student s1 ;
    s1.roll = 101;
    s1.marks = 45.55;

    printf("roll no of student is : %d\n",s1.roll);
    printf("Marks of student is : %f \n" , s1.marks);

    union data e1 ;
    e1.roll = 102;
    printf("roll no of student is : %d\n",e1.roll);
     e1.marks = 67.77;
     printf("Marks of student is : %f \n" , e1.marks);
     e1.age = 12;
    

    
    printf("age of student is : %d \n" , e1.age);


    return 0;
}