#include<stdio.h>
#include<string.h>

void reverseStr(char str[]){
    int low = 0;
    int high = strlen(str)-1;

    char temp;

    while(low < high){
        temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++;
        high--;
    }
    
}
int main(){

    char str[] = "sherya";
    printf("orginal string %s \n",str);
    strrev(str);
    printf("reversed string %s \n",str);
    reverseStr(str);
    printf("reversec string by function  %s\n ",str);
    



}