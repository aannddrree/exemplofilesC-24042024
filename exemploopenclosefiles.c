#include <stdio.h>

int main() {
    FILE *arquivo; // Declaração de um ponteiro de arquivo


    // Abrindo o arquivo para escrita (modo "w")
    arquivo = fopen("exemplo.txt", "w");

    // Verificando se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Termina o programa com código de erro
    }

    // Escrevendo no arquivo
    fprintf(arquivo, "Este é um exemplo de arquivo em C.\n");
    fprintf(arquivo, "Aprendendo a manipular arquivos.\n");

    // Fechando o arquivo
    fclose(arquivo);

    printf("Arquivo criado e escrito com sucesso.\n");

    return 0;
}
