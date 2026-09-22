#include<stdio.h>

// returntype funtion_name(){

// }

void greet(){
    printf("Hi from the funtion");
}

int main(){

    int arr[] = {12,15,16,19,34,78,90};

    int size = sizeof(arr)/ sizeof(5);

    printf("%d",size);

    int low = 0;
    int high = size-1;
    int isFound = 0;
    int index = -1;
    int key;
    printf("enter element you want to search");
    scanf("%d",&key);

    while(low <= high){
        int mid = (low + high)/2;
        printf("%d \n",mid);

        if(arr[mid] == key){
            isFound = 1;
            index = mid;
            // return mid;
            break;

        }else if(arr[mid] < key){
            low = mid+ 1;
        }else{
            high = mid -1;
        }
    }

    printf("%d \n",index);

    if(isFound){
        printf("element is founded at index %d: ",index);
    }else{
        printf("not found");
    }

    
    

    return 0;
}