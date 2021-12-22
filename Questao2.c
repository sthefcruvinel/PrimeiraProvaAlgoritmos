/* (Questão 2) - Em uma loja de tintas, muitos clientes não sabem quanto de tinta devem comprar para sua obra. Muitos vendedores sabem fazer essa conta e orientam os clientes.
Recentemente a loja lançou seu site de comércio eletrônico e vem adicionando ao mesmo ferramentas que “simulem”o atendimento do vendedor.
A próxima funcionalidade que deve ser acrescentada ao site é justamente a do consumo de tinta. Para provar que isso é perfeitamente realizável, crie o algoritmo que deverá ser implementado nesse caso.
O algoritmo deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas
de 18 litros ou galões de 3,6 litros. O algoritmo também recebe o preço de uma lata e de um galão de tinta.
Em seguida, o algoritmo deve mostrar ao usuário a quantidade de tinta a ser comprada, em litros, e o orçamento da compra em 3 situações:
    Ao comprar apenas latas de 18 litros: mostre o valor e o número de latas
    Ao comprar apenas galões de 3,6 litros: mostre o valor e o número de galões
    Ao misturar latas e galões, de forma que o gasto de tinta seja o menor: mostre o valor e o número de latas e galões
Considere que as previsões de gasto de tinta devem ter uma margem de segurança de 10% e que só são vendidos latas e galões inteiros.
Autora: Stheffany Cruvinel Martins --- Data: 29/09/2021*/

#include <stdio.h>
#include <math.h>

int main()
{
    //declaração de variáveis
    float area = 0;
    float preco_lata = 0;
    float preco_galao = 0;
    float calculo_tinta = 0;
    float calculo_seguro = 0;
    int calculo_orcamento1 = 0;
    int calculo_orcamento2 = 0;
    int calculo_orcamento3 = 0;
    float aux_calculo_orcamento_misto = 0;
    float calculo_orcamento_misto = 0;

    //entrada de dados
    printf("---- Calculo de consumo de tinta por metro quadrado ----\n");
    printf ("\nInsira (em metros quadrados) o tamanho da area a ser pintada: ");
    scanf ("%f", &area);

    printf ("\nInsira o valor da lata (3,6l) de tinta: ");
    scanf ("%f", &preco_galao);

    printf ("\nInsira o valor do galao (18l) de tinta: ");
    scanf ("%f", &preco_lata);

    //cálculo de tinta por metro quadrado e de margem de segurança
    calculo_tinta = (area / 6);
    calculo_seguro = (calculo_tinta * 0.1) + calculo_tinta;

    //saída de dados (quantidade de tinta necessária)
    printf ("\nSerao necessarios %.0f litros de tinta para pintar %.0f metros quadrados. ", calculo_seguro, area);
    printf ("\n-------------------------------------------------------------------------------------\n");

    //cálculo da quantidade de tinta (levando em consideração se é galão, lata ou ambos)
    calculo_orcamento1 = ceil (calculo_seguro / 18);

    calculo_orcamento2 = ceil (calculo_seguro / 3.6);

    calculo_orcamento3 = floor (calculo_seguro / 18);

    calculo_orcamento_misto = calculo_seguro - calculo_orcamento3 * 18;

    aux_calculo_orcamento_misto = ceil (calculo_orcamento_misto / 3.6);

    //saída de dados
    printf ("\nPara pintar %.0f metros quadrados comprando APENAS latas de 18l de tinta, o valor eh %.2f$ e serao necessarias %i latas.", area,  preco_lata*calculo_orcamento1, calculo_orcamento1);
    printf ("\n---------------------------------------------------------------------------------------------------------\n");
    printf ("\nPara pintar %.0f metros quadrados comprando APENAS galoes de 3,6l de tinta, o valor eh %.2f$ e serao necessarios %i galoes.", area, preco_galao*calculo_orcamento2, calculo_orcamento2);
    printf ("\n---------------------------------------------------------------------------------------------------------\n");
    printf ("\nPara pintar %.0f metros quadrados comprando latas e galoes de tinta, o valor eh %.2f$ e serao necessarios %.2i latas e %.0f galoes.", area, ((preco_lata*calculo_orcamento3)+(preco_galao*aux_calculo_orcamento_misto)), calculo_orcamento3, aux_calculo_orcamento_misto);
    printf ("\n----------------------------------------------------------------------------------------------------------\n");

    return 0;

}

