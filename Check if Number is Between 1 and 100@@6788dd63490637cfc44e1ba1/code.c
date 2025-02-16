#include <stdio.h>
int main(){
    int num;
    scaf("%d" ,&num);
    if(num >= 1 && num <= 100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}