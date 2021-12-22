/* (Questão 1) - Colabore com a OMS e elabore um algoritmo que receba o peso, o sexo e altura de 100 pessoas idosas e mostre sua classificação de acordo com seu IMC,
o percentual de mulheres e de homens informados e o percentual de mulheres e de homens, separadamente, nas faixas de obesidade (últimas 3).
Autora: Stheffany Cruvinel Martins --- Data: 28/09/2021 */

#include <stdio.h>

int main()
{
    //declaração de variáveis
    int i = 0;
    int sexo = 0;
    float cont = 0;
    float cont_f = 0;
    float cont_m = 0;
    float cont_obeso = 0;
    float cont_obesa = 0;
    float peso = 0;
    float altura = 0;
    float imc = 0;

    //entrada de dados
    printf ("---- Algoritmo que calcula o Indice de Massa Corporal de Idosos ---- ");
    printf ("\n\n------ Insira quantos idosos voce quer classificar ------ ");
    scanf ("%f", &cont);

    for (i=0; i < cont; i++)
    {
            printf ("\n\nEntre com o peso do %io idoso: ", i+1);
            scanf ("%f", &peso);

            printf ("\nEntre com a altura do %io idoso: ", i+1);
            scanf ("%f", &altura);

            printf ("\nEntre com o sexo do %io idoso: Digite [1] Feminino ou [2] Masculino: ", i+1);
            scanf ("%i", &sexo);

            //contador de idosos dos diferentes sexos
                switch (sexo)
                {
                    case 1:
                    cont_f++;
                    break;
                    case 2:
                    cont_m++;
                    break;
                }

            imc = peso / (altura * altura);

        //estruturas condicionais para classificação
        if (imc < 21.9)
            {
                printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta abaixo do peso.", imc, i+1);
            }
            else

            if (imc >= 22 && imc < 27)
                {
                    printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com o peso normal.", imc, i+1);
                }
            else

            if (sexo == 1 && imc >= 27.1 && imc < 32)
                {
                    printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com sobrepeso.", imc, i+1);
                }
            else

            if (sexo == 2 && imc >= 27.1 && imc < 30)
                printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com sobrepeso.", imc, i+1);

            else

                if (sexo == 1 && imc >= 32.1 && imc < 37)
                {
                    printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com obesidade de grau I.", imc, i+1);
                    cont_obesa++;
                }
            else

            if (sexo == 2 && imc >= 30.1 && imc < 35)
                {
                    printf ("\nCom IMC = %.2f, o(a) %io idoso(a) idoso esta com obesidade de grau I.", imc, i+1);
                    cont_obeso++;
                }
            else

                if (sexo == 1 && imc >= 37.1 && imc <= 41.9)
                {
                    printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com obesidade grau II (severa).", imc, i+1);
                    cont_obesa++;
                }
                else

                    if (sexo == 2 && imc >= 35.1 && imc < 39.9)
                        {
                            printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com obesidade grau II (severa).", imc, i+1);
                            cont_obeso++;
                        }

                else

                if (sexo == 1 && imc > 42)
                    {
                        printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com obesidade morbida.", imc, i+1);
                        cont_obesa++;
                    }
                else

                if (sexo == 2 && imc > 40)
                    {
                        printf ("\nCom IMC = %.2f, o(a) %io idoso(a) esta com obesidade morbida.", imc, i+1);
                        cont_obeso++;
                    }
    }

    //cálculos dos graus de obesidade
    cont_obesa = (cont_obesa * 100) / cont_f;
    cont_obeso = (cont_obeso * 100) / cont_m;
    cont_f = (cont_f * 100) / cont;
    cont_m = (cont_m * 100) / cont;

    //saída de dados
    printf ("\n\nA quantidade de mulheres idosas informadas foi de: %.0f por cento", cont_f);
    printf ("\n\nA quantidade de homens idosos informados foi de: %.0f por cento", cont_m);
    printf ("\n\nA quantidade de mulheres idosas com algum grau de obesidade foi de: %.0f por cento", cont_obesa);
    printf ("\n\nA quantidade de homens idosos com algum grau de obesidade foi de: %.0f por cento", cont_obeso);

    return 0;
}
