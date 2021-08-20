
/*
Atividade 1: Codifique um programa que indique a quantidade mínima de cédulas 
equivalentes a uma dada quantia em dinheiro. Considere apenas 
valores inteiros e cédulas de 1, 5, 10 e 50 reais. 
*/


#include<stdio.h>
#include<math.h>

main(){
int valor;
int cinquenta;
int dez;
int cinco;
int um;
int digitos;


printf("Vamos aprender!!\n");

do{
printf("Digite o valor em dinheiro: ");
setbuf(stdin, NULL);
scanf("%d", &valor);

if (valor>99) {
    digitos=1;
    printf("Digite um valor abaixo de 100 reais!! \n\n");
}
else { 
    digitos=0;
    cinquenta=valor/50;
    dez=(valor%50)/10;
    cinco=(((valor%50))%10)/5;
    um=((((valor%50))%10))%5;
}

}while (valor>99);


printf("Voce precisa de %d notas de 50 reais!\n", cinquenta);
printf("Voce precisa de %d notas de 10 reais!\n", dez);
printf("Voce precisa de %d notas de 5 reais!\n", cinco);
printf("Voce precisa de %d notas de 1 real!\n", um);

system ("pause");
return (0);

}