#include <stdio.h>
int main(void){
    int arrA[5]= { 1, 2, 3, 4, 5};
    int arrB[5]= { 6, 7, 8, 9, 10};
    int arrC[5];
    int i;
    for (i=0;i<5;i++){
        arrC[i]=arrA[i]+arrB[i];
    }
    printf("[ ");
    for (i=0;i<5;i++){
        printf("%d  ",arrC[i]);
    }
    printf(" ]");
    return 0;
}