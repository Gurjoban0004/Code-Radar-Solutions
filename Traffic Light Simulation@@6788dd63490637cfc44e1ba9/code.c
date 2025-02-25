#include<stdio.h>
int main(){
    char be;
    scanf("%c",&be);
    if(be =='R'){
        printf("Stop");
    }
    else if(be =='G'){
        printf("Go");
    }
    else if(be =='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}