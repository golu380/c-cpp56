#include<stdio.h>
#include<string.h>

int main(){

    // char name[30] ;
    // char fullname[30] ;
 

    // printf("Enter your name: \n");
    // scanf("%s",name);
    // printf("your name is : %s\n",name);
//    char dummy[30] = "shreya";
//     printf("enter your Full name: \n");
//     fgets(fullname,sizeof(fullname),stdin);
//     printf("Your name is: %s\n",fullname);
//     printf("length of full name is: %d",strlen(fullname));
//     printf("length of shreya is: %d",strlen(dummy));


    // str copy

    // char source[30] = "amit dubey";
    // char des[30] ;
    // strcpy(des,source);
    // printf("%s",des);


    //strcat

    // char source[30] = "Hello ";
    // char des[]  = "World";
    // strcat(source,des);
    // printf("merged string is : %s\n",source);

    // strcmp

    char first[30] ;
    char sec[30] ;
    printf("%d\n",'a');
    printf("%d",'A');
    printf("enter first string:");
    scanf("%s",first);
    printf("enter second string: ");
    scanf("%s",sec);

    int res = strcmp(first,sec);
    if(res == 0){
        printf("strings are equal");
    }else if(res < 0){
        printf("first string is smaller");
    }else{
        printf("first string is bigger");
    }

    //

    return 0;
}