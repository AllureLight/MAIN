#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* shift_string (char* str){

    int len = strlen(str);
    char* prov = (char*)malloc(len+1);

     if (prov == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }

    for(int i = 0; i < len; i++){
            if(prov[i] == 'z')
                prov[i] = 'a';
            else if(prov[i] == 'Z')
                prov[i] = 'A';
            else
                prov[i] = str[i] + 1;
    }

    prov[len] = '\0';
    
    return prov;
}

int main(){
    char texto[] = "A";

    printf("Antes: %s\n", texto);

    char *result = shift_string(texto);

    if(result != NULL){
        printf("\nPalavra trocada: %s", result);
        free(result);
    }
    return 0;
}