#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int area[99], quantidade[99], resposta, cont, i;
    float percent1, percent2, percent3;
    float valor_produto[99], valor_base[99], valor_desconto[99], valor_final[99];
    char respostas[1];
    char nome_produto[99][30];
    char tipo[3][30];

    percent1 = 0.05;
    percent2 = 0.08;
    percent3 = 0.10;
    resposta = 1;
    cont = 0;

    while(resposta == 1){
        printf("Seja Bem Vido!\n\n");
        printf("Digite o Nome do Produto\n\n");
        scanf("%s", nome_produto[cont]);
        printf("\nSelecione uma opção:\n");
 
        printf("#####################\n");
        printf("# 1 [INFORMÁTICA]   #\n");
        printf("# 2 [JOGOS]         #\n"); 
        printf("# 3 [ELETRÔNICOS]   #\n");
        printf("#####################\n\n");
        scanf("%i", &area[cont]);

        printf("Informe a Quantidade:\n");
        scanf("%i", &quantidade[cont]);

        printf("Digite o Valor do Produto:\n");
        scanf("%f", &valor_produto[cont]);

        printf("Produto Selecionado: %s \n", nome_produto[cont]);
        printf("Quantidade: %i \n", quantidade[cont]);
 

        switch (area[cont]) 
        {
            case 1:
                printf("\nOpção Selecionada: INFORMÁTICA\n");
                valor_base[cont] = valor_produto[cont] * quantidade[cont];
                valor_desconto[cont] = valor_base[cont]*percent1;
                valor_final[cont] = valor_base[cont] - valor_desconto[cont];

                printf("O Valor Base é: R$ %.2f\n", valor_base[cont]);
                printf("Desconto é: R$ %.2f\n", valor_desconto[cont]);
                printf("Percentual de 5 por cento\n");
                printf("Valor Total de: R$ %.2f \n", valor_final[cont]);
                printf("Deseja Continuar as Compras? Digite S para sim e N para não\n");
                scanf("%s", respostas);

                if(strcmp(respostas, "s") == 0)
                {
                    resposta = 1;
                }
                else
                {
                    resposta = 2;
                }
            break;

    
            case 2:
                printf("/nOpção selecionada: JOGOS\n");
                valor_base[cont] = valor_produto[cont] * quantidade[cont];
                valor_desconto[cont] = valor_base[cont]*percent2;
                valor_final[cont] = valor_base[cont] - valor_desconto[cont];

                printf("O Valor Base é R$ %.2f \n", valor_base[cont]);
                printf("Desconto de R$ %.2f \n", valor_desconto[cont]);
                printf("Percentual de 8 por cento\n");
                printf("Valor Total de: R$ %.2f \n", valor_final[cont]);
                printf("Deseja Continuar as Compras? Digite S para sim e N para não\n");
                scanf("%s", respostas);

                if(strcmp(respostas, "s") == 0)
                {
                    resposta = 1;
                }
                else
                {
                    resposta = 2;
                }
            break;


            case 3:
                printf("Opção Selecionada: ELETRONICOS\n");
                valor_base[cont] = valor_produto[cont] * quantidade[cont];
                valor_desconto[cont] = valor_base[cont]*percent3;
                valor_final[cont] = valor_base[cont] - valor_desconto[cont];

                printf("O Valor Base é: R$ %.2f \n", valor_base[cont]);
                printf("Desconto de: R$ %.2f \n", valor_desconto[cont]);
                printf("Percentual de 10 por cento \n");
                printf("Valor Totalde: R$ %.2f \n", valor_final[cont]);
                printf("Deseja Continuar as Compras? Digite S para sim e N para não\n");
                scanf("%s", respostas);

                if(strcmp(respostas, "s") == 0)
                {
                    resposta = 1;
                }
                else
                {
                    resposta = 2;
                }
            break;

        default:
            printf("A Opção Selecionada é Invalida.\n");
            printf("Gostaria de Continuar Suas Compras? Digite S para sim e N para não.\n");
            scanf("%s", respostas);

            if(strcmp(respostas, "s") == 0)
            {
                resposta = 1;
            }
            else
            {
                resposta = 2;
            }

    cont = cont+1;
    if(cont > 99)
    {
        resposta = 2;
        printf("Você Acaba de Realizar 100 Compras.\n");
    }
    else
    {
        printf("Boa Escolha! Continue Suas Compras\n\n\n");
    }

    
    printf("Lista dos Produtos: \n");

    printf("################################################################## \n");

    /*listagem de produtos, valores e quantidades*/
    for(i = 0; i<=99; i++)
    {
        if((unsigned)strlen(nome_produto[i]) != 0)
        {
            printf("Produto Selecionado: %s\n", nome_produto[i]);
        }
        else
        {
            printf("Produto Selecionado: Sem Vetor \n");
        }

        printf("Produto Selecionado: %i\n", area[i]);

        switch (area[i]) 
        {
            case 1:
                printf("Produto Selecionado: INFORMÁTICA\n");
                printf("Percentual de 5 por cento. \n");
            break;

            case 2:
                printf("Produto Slecionado: JOGOS\n");
                printf("Percentual de 8 por cento. \n");
            break;

            case 3:
                printf("Produto Selecionado: ELETRÔNICOS\n");
                printf("Percentual de 10 por cento. \n");
            break;

        default:
            printf("Produto Selecionado: ERRADO\n");
            printf("Percentual não gerado. \n");
        }

    printf("Quantidade: %i \n", quantidade[i]);
    printf("Valor Unitario: %.2f \n", valor_produto[i]);
    printf("Valor Base: R$ %.2f \n", valor_base[i]);
    printf("Desconto de: R$ %.2f \n", valor_desconto[i]);
    printf("Valor Total: R$ %.2f \n", valor_final[i]);

    printf("################################################################\n\n\n");
            }
        }
    } return 0;
}