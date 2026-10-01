#include<stdio.h>

int main(){

    int kanika[] = {12,13,145,56,78,90,45};



    int size = sizeof(kanika)/sizeof(kanika[0]);
    printf("the size of array is %d: \n",size);
    
    for (int i = 0;i<size;i++){
        printf("%d ",kanika[i]);
    }

    // linear search 

    printf("enter a element which you want search: ");
    int tosearch;
    scanf("%d",&tosearch);

    int index = -1;

    for (int i = 0;i<size;i++){
        if(tosearch == kanika[i]){
          index = i;
        }
    }

    if(index == -1){
        printf("element not found");
    }else{
        printf("element found at index %d: ",index);
    }

    return 0;


}