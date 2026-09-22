#include<stdio.h>

void greet(){
    printf("hi from the greet function\n");
}
int add(char a,char b,int c, int d){
    printf("\n%c %c \n",a,b);
    return  c+ d;
}

//function overloading is not supporting 

int add1(int a, int b){
    return a + b;

}

void displayArr(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int Binarrysearch(int arr[],int size,int key){
    
    int low = 0;
    int high = size-1;
    int isFound = 0;
    int index = -1;
 

    while(low <= high){
        int mid = (low + high)/2;
        // printf("%d \n",mid);

        if(arr[mid] == key){
           
            return mid;

        }else if(arr[mid] < key){
            low = mid+ 1;
        }else{
            high = mid -1;
        }
    }
}

int main(){

    // greet();
    // greet();

    // for (int i = 0;i<5;i++){
    //     greet();
    // }

    int arr[] = {12,13,14,15,17,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    // displayArr(arr,size);

    // int sm = add('a','d',23,24);
    // printf("the sum is :%d ",sm);
    // int sm1 = add1(23,24);
    // printf("\n%d",sm1);
    int ind = Binarrysearch(arr,size,17);
    printf("%d",ind);

    return 0;
}