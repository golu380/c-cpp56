#include<stdio.h>
int main(){

    FILE *fp;
    fp = fopen("data.txt","r");

    if(fp == NULL){
        printf("file is not at that location");
        return 1;
    }

    char ch;

    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }

    fclose(fp);


    return 0;
}