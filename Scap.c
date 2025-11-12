#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int opcao_menu = 0;

    while (opcao_menu != 2)
    {
        system("clear");
        printf("================================\n");
        printf("         Escape Room\n");
        printf("================================\n");
        printf("    1 - Novo Jogo   \n");
        printf("    2 - Sair\n");
        printf("================================\n");
        printf("Escolha uma opção -> \n");
        scanf("%i", &opcao_menu);
        
        while (getchar() != '\n'); // limpar buffer, usar após os 'scanf' para limpar lixos e evitar problemas
        
        switch (opcao_menu)
        {
        case 1:
        {
            int game_on = 0;
            int chave = 0;
            while (game_on != 1)
            {
                int room1 = 0;
                system("clear");
                printf("Você se encontra numa cabana. Tem 5 treco na tua frente.\n");
                printf("Uma chave, uma alavanca, uma cachaça, dois kilos de maconha e uma porta.\n");
                getchar();
                system("clear");
                printf("1- Chave\n2- Alavanca\n3- Cachaça\n4- Dois kg de maconha\n5- Uma porta\n");
                printf("O que você escolhe?\n\n");
                scanf("%i", &room1);
                system("clear");
                while (getchar() != '\n'); // limpar buffer
                
                switch (room1)
                {
                  //  int chave = 0;
                case 1:
                {
                    printf("Você adquiriu uma chave.\n");
                    chave = 1;
                    break;
                }
                case 2:
                    printf("A alavanca quebrou, que droga.\n");
                    break;
                case 3:
                    printf("Você bebe a cachaça e decide morar naquela cabana até a fome ou sede o matar.\n");
                    break;
                case 4:
                    printf("Você fuma toda a maconha e tem uma overdose e morre lentamente.\n");
                    break;
                case 5:
                {
                    if (chave == 1)
                    {
                        printf("Você abre a porta.\n");break;
                    }
                    else
                    {
                        printf("A porta está trancada.\n");break;
                    }
                }
                default: printf("Opção inválida. Pressione ENTER. \n"); getchar();
                }
                getchar();
            }
        }
        case 2:
            printf("Até logo!\n");
            break;
        default:
            printf("Opção inválida. Pressione ENTER.\n");
            getchar();
        }
    }

    return 0;
}