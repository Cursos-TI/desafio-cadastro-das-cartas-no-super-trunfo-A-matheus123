#include <stdio.h>

int main() {

    char estado = 'A', estado2 = 'B'; //Usei o char (que indica apenas um caractere) para indicar o estado;
    char nomeestado[50] = "Distrito Federal", nomeestado2[50] = "São Paulo";
    char codigoc[20] = "A01", codigoc2[20] = "B01"; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade;
    char nomecidade[50] = "Brasília", nomecidade2[50] = "São Paulo"; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade;
    float populacao = 2.817, populacao2 = 12.325; //Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro) eu não estava conseguindo interagir no scanf da área. População está em milhões;
    float area = 5.779, area2 = 15.211; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km2;
    float pib = 328.8, pib2 = 699.2; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões de reais;
    int pturisticos = 32, pturisticos2 = 50; //Usei o int (que indica números inteiros) para indicar o número de pontos turísticos;
    float denspopul, denspopul2; //No nível intermediário eu acrescentei essa variável para poder calcular densidade populacional;
    float pibpercap, pibpercap2; //Aqui acrescentei essa variável para poder calcular o PIB per capita;
    long double todasprop, todasprop2; //Variável long float para comparar todas as propriedades;
    float comparacao, comparacao2;
    int opcao, opcao2;


    denspopul = (populacao / area); //Densidade baseada na população dividida pela área;
    pibpercap = (pib / populacao); //PIB per capita baseada no PIb dividido pela população;

    denspopul2 = (populacao2 / area2); //Densidade baseada na população dividida pela area;
    pibpercap2 = (pib2 / populacao2); //PIB per capita baseada no PIb dividido pela população;

    todasprop = (populacao + area + pib + pturisticos + denspopul + pibpercap); //Soma de todas as propriedades;
    todasprop2 = (populacao2 + area2 + pib2 + pturisticos2 + denspopul2 + pibpercap2);  //Soma de todas as propriedades;

    printf("*** menu principal ***\n");// Aqui eu começo a acrescentar o menu de interação;
    printf("1. Iniciar o jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do jogo\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1://aqui ele diz o que acontece se o usuário selecionar a opção 1;
        printf("Jogo iniciado\n");
        printf("Digite o código da primeira cidade:\n");//Pede para o usuário inserir o código da primeira cidade;
        scanf("%s", &codigoc);//Usuário insere o código da primeira cidade (A01);

        printf("\nPrimeira carta:\n"); //Imprime "Primeira carta";

    printf("Estado: %c\n", estado);//Imprime o código do estado;
    printf("Nome do estado: %s\n", nomeestado);//Imprime o nome do estado;
    printf("Código da cidade: %s\n", codigoc);//Imprime o código da cidade;
    printf("Nome da cidade: %s\n", nomecidade);//Imprime o nome da cidade;
    printf("População da cidade: %.2f milhões de habitantes\n", populacao);//Imprime a população da cidade;
    printf("Densidade populacoinal: %.2f pessoas por Km2\n", denspopul); //Imprime a densidade populacional;
    printf("Área da cidade: %.2f Km2\n", area);//Imprime a área da cidade;
    printf("Pib da cidade: %.1f bilhões de reais\n", pib);//Imprime o PIB da cidade;
    printf("PIB per capita: %.2f\n", pibpercap); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d\n\n", pturisticos);//Imprime o número de pontos turísticos;

        printf("Digite o código da segunda cidade:\n");//Pede para o usuário inserir o código da segunda cidade;
        scanf("%s", &codigoc2);//Usuário insere o código da segunda cidade (B01);

    printf("Segunda carta\n");//Imprime "Segunda carta"

    printf("Estado: %c\n", estado2);//Imprime o código do segundo estado;
    printf("Nome do estado: %s\n", nomeestado2);//Imprime o nome do segundo estado;
    printf("Código da cidade: %s\n", codigoc2);//Imprime o nome da segunda cidade;
    printf("Nome da cidade: %s\n", nomecidade2);//Imprime o nome da segunda cidade;
    printf("População da cidade: %.2f milhões de habitantes\n", populacao2);//Imprime a população da segunda cidade;
    printf("Densidade populacoinal: %.2f pessoas por Km2\n", denspopul2); //Imprime a densidade populacional;
    printf("Área da cidade: %.2f Km2\n", area2);//Imprime a área da segunda cidade;
    printf("Pib da cidade: %.1f bilhões de reais\n", pib2);//Imprime o PIB da segunda cidade;
    printf("PIB per capita: %.2f\n", pibpercap2); //Imprime o pib per capita;
    printf("Número de pontos turísticos: %d\n\n\n", pturisticos2);//Imprime o número de pontos turísticos;

        printf("Comparações possíveis:\n");
        printf("1. População;\n");
        printf("2. Densidade populacional;\n");
        printf("3. Área;\n");
        printf("4. PIB;\n");
        printf("5. PIB per capita;\n");
        printf("6. Pontos turísticos;\n");
        printf("7. Comparação geral;\n\n");
        printf("Escolha um dos números acima: ");
        scanf("%d", &opcao2);//Aqui eu uso mais uma variável;

        switch (opcao2)
        {
        case 1:// O que deve fazer se a opção 1 for selecionada;
            if (populacao > populacao2)
            {
                printf("População da carta 1 é maior do que a carta 2!");
            } else {
                printf("População da carta 2 é maior do que a carta 1!");
            }
            
            break;
        case 2:// O que deve fazer se a opção 2 for selecionada;
        if (denspopul > denspopul2)
            {
                printf("Densidade populacional da carta 1 é maior do que a carta 2, carta 2 ganha!");
            } else {
                printf("Densidade populacional da carta 2 é maior do que a carta 1, carta 1 ganha!");
            }

        break;
        case 3:// O que deve fazer se a opção 3 for selecionada;
        if (area > area2)
            {
                printf("Área da carta 1 é maior do que a carta 2!");
            } else {
                printf("Área da carta 2 é maior do que a carta 1!");
            }

        break;
        case 4:// O que deve fazer se a opção 4 for selecionada;
        if (pib > pib2)
            {
                printf("PIB da carta 1 é maior do que a carta 2!");
            } else {
                printf("PIB da carta 2 é maior do que a carta 1!");
            }

        break;
        case 5:// O que deve fazer se a opção 5 for selecionada;
        if (pibpercap > pibpercap2)
            {
                printf("PIB per capita da carta 1 é maior do que a carta 2!");
            } else {
                printf("PIB per capita da carta 2 é maior do que a carta 1!");
            }

        break;
        case 6:// O que deve fazer se a opção 6 for selecionada;
        if (pturisticos > pturisticos2)
            {
                printf("Pontos turísticos da carta 1 é maior do que a carta 2!");
            } else {
                printf("Pontos turísticos da carta 2 é maior do que a carta 1!");
            }

        break;
        case 7:// O que deve fazer se a opção 7 for selecionada;
        if (todasprop > todasprop2)
            {
                printf("*** CARTA 1 VENCEU O JOGO ***\n");
            } else {
                printf("*** CARTA 2 VENCEU O JOGO ***\n");
            }

        break;
        default:// O que deve fazer se a opção 1, 2 ou 3 não for selecionada;
            printf("Digite uma opção válida!");
        }

        
        break;
    case 2://aqui ele diz o que acontece se o usuário selecionar a opção 2;
        printf("REGRAS DO JOGO:\n");
        printf("Primeiro digite o código da carta selecionada (A01 ou B01);\n");
        printf("Escolha qual propriedade você quer comparar;\n");
        printf("Independente da opção de comparação, o que vai determinar a carta vencedora é a opção 'comparação geral';\n");
        printf("Você pode jogar quantas vezes você quiser;\n");
        printf("Divirta-se!!!");
        break;
    case 3://aqui ele diz o que acontece se o usuário selecionar a opção 3;
        printf("Você saiu do jogo.\n");
        break;
    default://aqui ele diz o que acontece se o usuário seleecionar uma  opção que não seja 1, 2, ou 3;
        printf("Opção inválida, digite apenas o número 1, 2 ou 3!");
    }


}