#include <stdio.h>

int main(){

    //Faça um Programa que pergunte quanto você ganha por hora e o
    //número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
    //sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
    //faça um programa que nos dê:

    float ganhoHora, horas, salarioBruto;
    float descontoIR, inss, sindicato;
    float salarioLiquido;

    printf("quanto ganha por hora?\n");
    scanf("%f", &ganhoHora);
    printf("horas trabalhadas no mes?\n");
    scanf("%f", &horas);

    salarioBruto = (ganhoHora * horas);
    printf("o salario bruto e igual a: %.2f\n", salarioBruto);

    descontoIR = (salarioBruto * 0.11);
    inss = (salarioBruto * 0.08);
    sindicato = (salarioBruto * 0.05);

    printf("desconto IR %f\n", descontoIR);
    printf("desconto inss %f\n", inss);
    printf("desconto sindicato %f\n", sindicato);

    salarioLiquido = salarioBruto - (descontoIR + inss + sindicato);

    printf("o salario liquido com os descontos e: %.2f\n", salarioLiquido);

    return 0;
}
