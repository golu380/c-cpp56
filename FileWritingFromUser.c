#include<stdio.h>

int main(){

    FILE * fp;

    fp = fopen("data1.txt","w");

    if(fp == NULL){
        printf("some thing went wrong");
        return 0;
    }

    int a ;
    printf("enter a number you want to write in file \n");
    scanf("%d",&a);

    fprintf(fp,"%d",a);
    fclose(fp);

    printf("File is written succesfully");

    return 0;
}