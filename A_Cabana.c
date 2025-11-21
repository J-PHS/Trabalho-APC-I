#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");
    int opcao_menu = 0;
    int come_pao = 0;
    int game_on = 0;
    int alavanca_quebrada = 0;
    int room1 = 0;
    enum opcoes_room1_e
    {
        chave = 1,
        alavanca,
        pao,
        porta,
        fecha_game
    };
    enum opcoes_room2_e
    {
        nintendo = 1,
        ps5,
        xbox,
        pc,
        fecha_game2
    };

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

        while (getchar() != '\n')
            ; // limpar buffer, usar após os 'scanf' para limpar lixos e evitar problemas

        switch (opcao_menu)
        {
        case 1:
        {
            game_on = 0;
            alavanca_quebrada = 0;
            come_pao = 0;

            while (game_on != 1)
            {

                system("clear");
                printf("Você se encontra numa cabana. Diante de você existem 4 coisas.\n");
                printf("Uma chave, uma alavanca, um pão, e uma porta.\n(ENTER para continuar)\n");
                getchar();
                system("clear");
                printf("%i- Chave\n%i- Alavanca\n%i- Pão\n%i- Porta\n\n%i- Sair do jogo\n\n", chave, alavanca, pao, porta, fecha_game);
                printf("O que você escolhe?\n(Digite o número correspondente a opção.)\n");
                scanf("%i", &room1);
                system("clear");

                while (getchar() != '\n')
                    ; // limpar buffer

                switch (room1)
                {
    
                case chave:
                {
                    printf("Você se vê consumido pela vontade de comer esta chave.\n");
                    getchar();
                    printf("Você come a chave. E morre lentamente de intoxicação por metais pesados.(Enter para continuar)\n");
                    getchar();
                    game_on = 1;
                    system("clear");
                    printf("GAME OVER\nPressione ENTER para encerrar.");
                    getchar();
                   // opcao_menu = 2;
                    break;
                }
                case alavanca:
                {
                    if (alavanca_quebrada == 0)
                    {
                        printf("A alavanca quebrou, que droga.\n");
                        getchar();
                        alavanca_quebrada = 1;
                    }
                    else
                    {
                        printf("A alavanca já está quebrada.\n");
                        getchar();
                    }
                }
                break;
                case pao:
                {
                    if (come_pao == 1)
                    {
                        printf("Você já comeu o pão e encolheu, não pode comer de novo.\n");
                        getchar();
                        come_pao = 2;
                    }
                    else if (come_pao == 0)
                    {
                        printf("Você come o pão.\nSeu corpo começa a encolher, você está virando um hobbit!\n");
                        printf("Você encolheu tanto que agora é possível passar pela fresta da porta e escapar!\n(Enter para continuar)\n");
                        getchar();
                        come_pao = 1;
                    }
                    else if (come_pao == 2)
                    {
                        printf("Você insiste em comer o pão, você encolhe tanto que some!\n");
                        getchar();
                        game_on = 1;
                        system("clear");
                        printf("GAME OVER\nPressione ENTER para encerrar.");
                        getchar();
                       // opcao_menu = 2;
                    }
                }
                break;
                case porta:
                {
                    if (come_pao == 1)
                    {
                        printf("Você passa pela fresta debaixo da porta\n");
                        getchar();
                        int room2 = 0;
                        system("clear");
                        printf("Após passar pela porta, você ainda se encontra trancado em uma sala branca.\n");
                        printf("Diante de você, há 4 pedestais iluminados, cada um com um aparelho diferente.\n(ENTER para continuar)\n");
                        getchar();
                        system("clear");
                        printf("Um nintendo switch 2, um playstation 5, um xbox series X, e um PC gamer.\n\n");
                        printf("Uma placa na parede diz: 'A liberdade só sorri para quem escolhe com sabedoria... e com melhor custo-benefício.(ENTER para continuar)'\n\n");
                        getchar();
                        system("clear");
                        printf("E outra placa, escrita à mão com canetinha Bic, acrescenta: 'Em caso de escolha errada, sua fatura do cartão será atualizada com IOF, juros e correção monetária. Ass: Receita Federal.'\n");
                        printf("Qual é a sua escolha para escapar vivo e com o nome limpo?(ENTER para continuar)\n");
                        getchar();
                        system("clear");
                        printf("Escolha: \n%i - Nintendo Switch 2\n%i - Playstation 5\n%i - Xbox Series X\n%i - PC\n%i - Sair do jogo.\n", nintendo, ps5, xbox, pc, fecha_game2);
                        scanf("%i", &room2);
                        while (getchar() != '\n')
                            ; // limpar buffer
                        system("clear");
                        switch (room2)
                        {
                        case nintendo:
                        {
                            printf("Você pega o nintendo switch.\nO peso no seu bolso cresce.\nUma mensagem vinda do teto diz:\n\n'R$ 4.999,99 em um console que roda Pokemon com queda de FPS. Parabéns meu guerreiro.'\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Você ignora o aviso e começa a jogar Pokemon.\nDepois de algumas horas, Arceus, o deus dos pokemons, aparece diante de você.\n\n");
                            getchar();
                            system("clear");
                            printf("O que você faz?");
                            printf("\n1 - Pedir perdão pelos seus pecados e oferecer o console em sacrifício a Arceus.\n2 - Desafiar Arceus para uma batalha pokemon.\n3 - Dar um soco em Arceus.\n");
                            int escolha_arceus = 0;
                            scanf("%i", &escolha_arceus);
                            while (getchar() != '\n')
                                ; // limpar buffer
                            system("clear");
                            enum arceus_e
                            {
                                perdao = 1,
                                batalha,
                                soco
                            };
                            switch (escolha_arceus)
                            {
                            case perdao:
                            {
                                printf("Arceus aceita seu sacrifício e te concede a liberdade.\nVocê escapa da sala branca e volta para casa, onde vive feliz para sempre.\n(ENTER para continuar)");
                                getchar();
                                game_on = 1;
                                system("clear");
                                printf("PARABÉNS! VOCÊ VENCEU!(Com todas as dívidas inclusas.)\nPressione ENTER para encerrar.");
                                getchar();
                              //  opcao_menu = 2;
                            }
                            break;
                            case batalha:
                            {
                                printf("Arceus é muito poderoso e derrota você facilmente.\nVocê é lançado para fora da sala branca e cai em um precipício, morrendo na queda.\n(ENTER para continuar)");
                                getchar();
                                game_on = 1;
                                system("clear");
                                printf("GAME OVER\nPressione ENTER para encerrar.");
                                getchar();
                             //   opcao_menu = 2;
                            }
                            break;
                            case soco:
                            {
                                printf("Dar um soco em um deus nunca é uma boa ideia.\nArceus fica furioso e te transforma em pedra.\n(ENTER para continuar)");
                                getchar();
                                game_on = 1;
                                system("clear");
                                printf("GAME OVER\nPressione ENTER para encerrar.");
                                getchar();
                             //   opcao_menu = 2;
                            }
                            break;
                            default:
                            {
                                printf("Opção inválida. Pressione ENTER.\n");
                                getchar();
                            }
                            break;
                            }
                        }
                        break;
                        case ps5:
                        {
                            printf("Você liga o playstation, uma tela de atualização aparece.\nVocê espera por minutos, horas, dias...\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Após uma eternidade, seu corpo fraqueja, e você morre.\n(ENTER para continuar)");
                            getchar();
                            game_on = 1;
                            system("clear");
                            printf("GAME OVER\nPressione ENTER para encerrar.");
                            getchar();
                          //  opcao_menu = 2;
                        }
                        break;
                        case xbox:
                        {
                            printf("Você tenta ligar o xbox, você percebe que é só uma caixa com um X no meio.\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Você percebe que o xbox é na verdade um mímico, que te devora por inteiro.\nE uma mensagem aparece 'You Died, E sua fatura do cartão foi atualizada com IOF, juros e correção monetária.'\n(ENTER para continuar");
                            getchar();
                            game_on = 1;
                            system("clear");
                            printf("GAME OVER\nPressione ENTER para encerrar.");
                            getchar();
                          //  opcao_menu = 2;
                        }
                        break;
                        case pc:
                        {
                            printf("Você tenta ligar o PC mas ele não tem configurações muito boas.\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Você decide desmontar o PC por inteiro e utilizar as peças para sair da sala branca.\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Com as peças você faz o seguinte:\nCom a ventoinha você cria uma serra.\nO gabinete serve como escudo.\nA fonte vira uma arma improvisada.\n(ENTER para continuar)");
                            getchar();
                            system("clear");
                            printf("Você usa a serra para cortar a porta, o escudo para se proteger dos cacos de madeira.\nE ao sair da sala branca, você se depara com um mundo pós-apocalíptico zumbi, onde você terá que usar a serra, escudo e a arma improvisada para se defender e sobreviver.\n\nBoa sorte!\n(ENTER para continuar)\n");
                            getchar();
                            game_on = 1;
                            system("clear");
                            printf("PARABÉNS! VOCÊ VENCEU!(Mais ou menos né, agora é só sobreviver aos zumbis.)\nPressione ENTER para encerrar.");
                            getchar();
                          //  opcao_menu = 2;
                        }
                        break;
                        case fecha_game2:
                        {
                            game_on = 1;
                            system("clear");
                            printf("Até logo!\nPressione ENTER para encerrar.");
                            getchar();
                          //  opcao_menu = 2;
                            break;
                        }
                        break;
                        default:
                        {
                            printf("Opção inválida. Pressione ENTER. \n");
                            getchar();
                        }
                        break;
                        }
                        break;
                    }
                    else
                    {
                        printf("A porta está trancada.\n");
                        getchar();
                        break;
                    }
                }
                break;
                case fecha_game:
                {
                    game_on = 1;
                    system("clear");
                    printf("Até logo!\nPressione ENTER para encerrar.");
                    getchar();
                  //  opcao_menu = 2;
                    break;
                }
                default:
                    printf("Opção inválida. Pressione ENTER. \n");
                    getchar();
                }
                getchar();
            }
        }
        break;
        case 2:
        {
            system("clear");
            printf("Até logo!\n");
        }
        break;
        default:
            printf("Opção inválida. Pressione ENTER.\n");
            getchar();
        }
    }

    return 0;
}