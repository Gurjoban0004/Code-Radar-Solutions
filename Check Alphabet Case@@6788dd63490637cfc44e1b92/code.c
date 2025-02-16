#include <stdio.h>
int main(){
    char ch[100];
    scanf("%c", &ch);
    if(ch >= "a" && ch <= "z"){
        printf("Lowercase");
    }
    else if(ch >= "A" && ch <= "Z"){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}