#include<stdio.h>
#include<ctype.h>

int main(){

    char str[50]="amit";
int i = 0;
    while(str[i] != '\0'){
        int a = toupper(str[i]);
        str[i] = (char)a;
        printf("%c",(char)a);
        i++;
    }

    printf("\nupper case : %s",str);
    int j = 0;

    while(str[j] != '\0'){
        int a = tolower(str[j]);
        str[j] = (char)a;
        printf("%c",(char)a);
        j++;
    }
    printf("\n now lower case %s: ",str);


    return 0;
}