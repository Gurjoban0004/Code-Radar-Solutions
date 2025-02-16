#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num > 0 && num % num == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}