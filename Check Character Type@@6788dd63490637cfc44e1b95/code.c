#include <stdio.h>
int main(){
    char ch;
    scanf("%c" ,&ch);
    if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u'
       ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O'|| ch == 'U' ){
        printf("Vowel");
       }
    else if(ch == '1' || ch == '2'|| ch == '3' || ch == '4'|| ch == '5'
       ch == '6' || ch == '7'|| ch == '8' || ch == '9'|| ch == '0' 
        printf("Digit");){
    else if(ch >= 'a' && ch <= 'z' && ch >= 'A' && ch <= 'Z' ){
        printf("Conconant");
        }
    else{
        printf("Special Character");
        }
    return 0;
}