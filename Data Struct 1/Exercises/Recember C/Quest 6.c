#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void shift_string (char* str){
    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            if(str[i] == 'z')
                str[i] = 'a';
            else if(str[i] == 'Z')
                str[i] = 'A';
            else
                str[i] = str[i] + 1;
        }
    }
}

int main(){
    char texto[] = "Abecedario"; /*Calcula ja quantas letras existem*/
    printf("Antes: %s\n", texto);

    shift_string(texto);

    printf("Depois: %s\n", texto);
}