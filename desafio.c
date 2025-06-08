#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int resultado1, resultado2;
    char atributo1, atributo2;
    int populacao1, populacao2, area1, area2, pontosturisticos1, pontosturisticos2, pib1, pib2, densidadepopulacional1, densidadepopulacional2;

    srand(time(0));
    populacao1 = 1;
    populacao2 = 0;
    area1 = 0;
    area2 = 1;
    pontosturisticos1 = 1; 
    pontosturisticos2 = 0;
    pib1 = 1;
    pib2 = 0;
    densidadepopulacional1 = 0;
    densidadepopulacional2 = 1;

    printf("Bem-Vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("P. População\n");
    printf("A. Area\n");
    printf("T. Pontos Turisticos\n");
    printf("I. PIB\n");
    printf("D. Densidade Polulacional\n");

    printf("Escolha a comparação: ");
    scanf("%c", &atributo1);

    switch (atributo1)
    {
    case 'P':
    case 'p':
        printf("Escolheu Polulação!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a':
        printf("Escolheu area!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 'T':
    case 't':
        printf("Escolheu Pontos Turisticos!\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Escolheu PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Escolheu Densidade Polulacional\n");
        resultado1 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;
        break;
    default:
        printf("Opção de jogo invalida\n");
        break;
    }


    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Voce deve escolher um atributo diferente do primeiro.\n");
    printf("P. População\n");
    printf("A. Area\n");
    printf("T. Pontos Turisticos\n");
    printf("I. PIB\n");
    printf("D. Densidade Polulacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Voce escolheu o mesmo atributo!");
    } else { 
        switch (atributo2)
        {
        case 'P':
        case 'p':
            printf("Escolheu Polulação!\n");
            resultado2 = populacao1 > populacao2 ? 0 : 1;
            break;
        case 'A':
        case 'a':
            printf("Escolheu area!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 'T':
        case 't':
            printf("Escolheu Pontos Turisticos\n");
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Escolheu PIB\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Escolheu Densidade Polulacional\n");
            resultado1 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;
            break;
            default:
            printf("Opção de jogo invalida\n");
            break;
        }
        if (resultado1 && resultado2){
            printf("Curitiba cidade vencedora!\n");
        }else if(resultado1 != resultado2){
            printf("Empatou!\n");
        }else { 
            printf("Palmas cidade vencedora!\n");
        }
    }
    
    
}