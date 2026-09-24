#include<stdio.h>
int main(){

    FILE * fp;

    fp = fopen("data.txt","a");

    if( fp == NULL){
        printf("there something wrong");
        return 1;
    }

    fprintf(fp,"Amit \n");
    fprintf(fp,"Yatharth \n");
    fprintf(fp,"Shreya gupta\n");
    fclose(fp);

    printf("data si written succefully");


    return 0;
}