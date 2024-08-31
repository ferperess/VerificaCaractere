#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char letra, minhaString[100];
    int qtdLetra = 0;

    printf("Digite uma string: ");
    scanf("%s", minhaString);

    printf("Digite a letra a ser verificada: ");
    scanf(" %c", &letra); // Lê apenas um caractere

    // Converte a letra para minúscula
    letra = tolower(letra);

    // Percorre a string e verifica cada caractere
    for (int i = 0; i < strlen(minhaString); i++) {
        char caractere = tolower(minhaString[i]); // Converte o caractere para minúscula

        if (caractere == letra) {
            qtdLetra++;
        }
    }
    
    if (qtdLetra == 1){
        printf("A letra '%c' aparece %d vez na string.\n", letra, qtdLetra);
    } else{
    printf("A letra '%c' aparece %d vezes na string.\n", letra, qtdLetra);
    }
   
    return 0;
}
