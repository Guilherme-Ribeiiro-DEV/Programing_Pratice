#include <stdio.h>
#include <string.h>
int main()
{
    char txtName[50];
    printf("Insira o nome do arquivo de texto a ser criado: \n");
    scanf("%s", txtName);
    strcat(txtName, ".txt");

    FILE *archives = fopen(txtName, "w");

    if (archives == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    } else {
        printf("Arquivo criado com sucesso! Você já pode abri-lo e edita-lo.\n");
    }

    fclose(archives);
    return 0;
}