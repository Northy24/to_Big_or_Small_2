#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1024];
    printf("Enter 1 string : ");
    scanf("%s",s);
    for(int i = 0; i < strlen(s); i++){
            if(islower(s[i])){
            s[i] = toupper(s[i]);
            }else
            s[i] = tolower(s[i]);
    }
    printf("Result : %s",s);
}
