#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year % 400 ){
        printf("Leap year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}