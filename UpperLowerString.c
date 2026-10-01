#include<stdio.h>
#include<ctype.h>

int main(){

    char str[50];
    printf("enter string which you want to change in cap\n");
    scanf("%49s",str);

    for(int i = 0;str[i] != '\0';i++){
        printf("%d ",toupper(str[i]));
        str[i] = (char)toupper(str[i]);
    }
    printf("\n Upper case: %s\n",str);

        for(int i = 0;str[i] != '\0';i++){
        printf("%d ",tolower(str[i]));
        str[i] = (char)tolower(str[i]);
    }
    printf("\n Lower case: %s",str);




    return 0;
}