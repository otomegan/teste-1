#include <stdio.h>  
#include <stdlib.h>
#include <string.h> //para strctspn()
/*
==================================================================
            SISTEMA DA BIBLIOTECA DE CADASTRO DE LIVROS
==================================================================
*/

// ---constantes globais ---
#define MAX_LIVROS 50
#define TAM_STRING 100
// o #define serve  para criar constantes para mudar valores de uma vez só


//definição do struct --- livros ---
struct Livro {
    char titulo[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING]
    int edição;
};
//função de limpar o buffer de entrada
void limparBuffer() {
    int c; // variavel temporária para guardar o caractere lido

    // loop que aspira os caracteres e limpa o que sobrou para funcionar fget e scanf
    while ((c = getchar()) != '\n' && c != EOF) {
        /* o corpo é vazio de propósito!! pega um caracter pelo getchar e guardado na variavel c
         * o loop continua até encontrar a tecla enter '\n' ai
         && c != EOF: Uma segurança extra, significa "e enquanto não for o fim da entrada".
        O ponto e vírgula no final (ou chaves vazias {}) significa: "não faça nada com o caractere,
         apenas jogue-o fora e continue o loop".


         Regra simples: Sempre que você usa scanf para ler um número (%d) 
         ou float (%f), e a próxima coisa que você vai ler é um texto 
         (com fgets ou scanf("%s")), chame o limparBuffer() entre eles.
        */
}

int main() {
    struct Livro Biblioteca [MAX_LIVROS];
    /* 
    a struct, o primeiro termo "Livro" define o timo de struct, o segundo
    o segundo termo "Biblioteca" é o nome da nova variável e entre cochetes é o tamanho.
    */
    int TotaldeLivros = 0;
    int opcao;

    // ---- FUNÇÃO DO PARA REALIZAR O LAÇO ----
        do{
            printf("========================================\n");
            printf("BIBLIOTECA - PARTE 1\n")
            printf("========================================\n");
            printf("1 - Cadastrar novo livro\n");
            printf("2 - Listar livros cadastrados\n");
            printf("0 - Sair\n");
            printf("========================================\\n")
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            limparBuffer(); //limpar o buffer de entrada


            //--- processamento das opções ---

            switch(opcao){
                case 1: // CADASTRO DE LIVRO
                printf("cadastros de livros\n");
                if(TotaldeLivros < MAX_LIVROS){
                    printf("Digite o título do livro: ");
                    fgets(Biblioteca[TotaldeLivros].titulo, TAM_STRING, stdin);
                   
                    /*
                    Foi usado o fgets porque o scanf para de ler entre os espaços
                    Portanto, em livros como "senhor dos aneis" ele não iria ler
                    além de que o scanf não sabe o tamanho de sua variavel, ai ia ficar
                    escrevendo sem limites, causando Buffer Overflow.

                    a primeira parte do fgets indica o destino para guardar os dados,
                    a segunda parte indica a parte título aonde vai ser digitado o nome do livro
                    o stdin indica que vai ser digitado pelo teclado.
                    */
                    printf("Digite o nome do autor: ");
                    fgets(Biblioteca[TotaldeLivros].autor, TAM_STRING, stdin);

                    printf("Digite o nome da editora: ");
                    fgets(Biblioteca[TotaldeLivros].editora, TAM_STRING, stdin);

                    printf("Digite a edição do livro: ");
                    scanf("%d", &Biblioteca[TotaldeLivros].edição);
                    limparBuffer();


                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")];
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")];
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")];
                    
                    printf("Digite a edicao: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada();
                    
                    totalLivros++;
                    
                    printf("\nLivro cadastrado com sucesso!\n");
                } else {
                    printf("Biblioteca cheia! Não é possível cadastrar mais livros!\n");
                }
                
                printf ("\nPressione Enter para continuar...");
                getchar(); //pausa para o usuário ler a mensagem antes de voltar ao menu.
                break;
                
            case 2: // Listagem de livros
                printf("--- Lista de Livros Cadastrados---\n\n");
                
                if (totalLivros == 0){
                    printf("Nenhum livro cadastrado ainda. \n");
                } else {
                    for (int i = 0; i <totalLivros; i++){
                        printf("--------------------------------\n");
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edicao: %d\n", biblioteca[i].edicao);
                    }
                    printf("--------------------------------\n");
                }
                
                // A pausa é crucial para que o usuário veja a lista antes
                // do próximo loop limpar a tela. 
                printf("\nPressione Enter para continuar...");
                getchar();
                break;
                
            case 0: // Sair
                printf("\nSaindo do sistema...\n");
                break;
                
            default: // OPÇÃO INVÁLIDA
                printf("\nOpcao invalida! Tente novamente.\n");
                printf("\nPressione Enter para continuar...");
                getchar();
                break;
        }
    } while (opcao != 0);
    
    return 0; //Fim do programa.
}

                }

        }

    return 0;
}


