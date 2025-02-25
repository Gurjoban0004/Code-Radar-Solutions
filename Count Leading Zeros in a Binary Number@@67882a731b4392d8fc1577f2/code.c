#include <stdio.h>
int main(){
    int n , count = 0;
    scanf("%d" , &n);
    for (int i =31; i >= 0; i--){

        if ((n>> i)& 1)break;
        count++;
    }
    printf("%d", count);
    return 0;

}