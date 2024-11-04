#include <stdio.h>
#include <stdlib.h>

float largestNum(float num1, float num2, float num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    }else if (num2 > num1 && num2 > num3){
        return num2;
    }else{
        return num3;
    }
}


int main(){
    float num1;
    float num2;
    float num3;

    printf("Type the first number: ");
    scanf("%f", &num1);
    printf("Type the second number: ");
    scanf("%f", &num2);
    printf("Type the third number: ");
    scanf("%f", &num3);


    if(num1 == num2 && num2 == num3){
        printf("All numbers are equal!");
    }else{
        float largest = largestNum(num1, num2, num3);
        printf("The biggest number is: %.3f", largest);
    }

    return 0;
}

