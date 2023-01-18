#include <stdio.h>

int multipleOneToFive(){
    int result = 0;
    for(int i=0;i<=5;i++){
        result *= i;
    }
    return result;
}

int main(){
    printf("%d\n", multipleOneToFive());
    return 0;
}
