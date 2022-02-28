/*
  Tarefa -  Exercicio 03- Faça um programa que receba:

Quantidade de homens.
Quantidade de mulheres.
Quantidade de crianças.
Quantidade de horas de duração de um churrasco.


Calcular e mostrar uma lista de compra de 10 itens para um churrasco, considerando a quantidade de pessoas e a duração do churrasco.
A lista de compras deverá constar:
   - Quantidade de cada item (se for o caso, como quantidade de pão, latas de refrigerante, pacotes, etc..
   - Quilos de cada item (se for o caso), como carne, linguiça, etc...

A lista de compra deverá ter o total a ser comprado.

	
	Author: Itallo Rodrigues Moreno 
*/



#include <stdio.h>  
#include <locale.h> 
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float soda, sausage, rumpsteak, wingdrumstick, rice, crumbs, mayo, beer, coal;
    float beer_350ml, beer_1l, soda_2l, soda_350ml, coal_5kg, coal_10kg;
   	int qdh, qdm, qdc, qdhrs, bread;
    //2. Input
    printf(" Quantidade de Homens: ");
    scanf("%i", &qdh);
    printf(" Quantidade de Mulheres: ");
    scanf("%i", &qdm);
    printf(" Quantidade de Crianças: ");
    scanf("%i", &qdc);
    printf(" Quantidade de Horas de Duração: ");
    scanf("%i", &qdhrs);
    //3.calc
	rumpsteak		= (qdh * 0.150 + qdm * 0.120 + qdc * 0.040) * qdhrs; 
	sausage 		= (qdh * 0.120 + qdm * 0.090 + qdc * 0.045) * qdhrs; 
    mayo 			= (qdh * 0.030 + qdm * 0.030 + qdc * 0.015) * qdhrs;
	soda 			= (qdh * 0.250 + qdm * 0.200 + qdc * 0.190) * qdhrs;
	soda_2l 		= ceil(soda / 2.000);
	soda_350ml 		= ceil(soda / 0.350);
	bread 			= (qdh * 1 + qdm * 1 + qdc * 1) * qdhrs; 
 	rice 			= (qdh * 0.060 + qdm * 0.055 + qdc * 0.010) * qdhrs;
	crumbs 			= (qdh * 0.040 + qdm * 0.025 + qdc * 0.010) * qdhrs; 
	wingdrumstick 	= (qdh * 0.060 + qdm * 0.045 + qdc * 0.010) * qdhrs;
	beer			= (qdh * 0.400 + qdm * 0.250) * qdhrs;
	beer_1l 		= ceil(beer / 1.000);
 	beer_350ml		= ceil(beer / 0.350);
	coal 			= (sausage + rumpsteak + wingdrumstick);
	coal_5kg 		= ceil(coal / 5.000);
	coal_10kg 		= ceil(coal/ 10.000);
     
	 //4.Output
	printf("\n Quantidade à comprar de cada item:");
	printf("\n 1. Picanha = %.3f KG ", rumpsteak);
	printf("\n 2. Linguiça = %.3f KG", sausage);
	printf("\n 3. Maionese = %.3f KG", mayo);
	printf("\n 4. Refrigerante = %.3f Litros", soda);
	printf("\n    Compre: %.0f un garrafas de 2 litros ou %.0f un latas de 350ml", soda_2l, soda_350ml);
	printf("\n 5. Pão = %.i Un", bread);
	printf("\n 6. Arroz = %.2f KG", rice); 
	printf("\n 7. Farofa = %.2f KG", crumbs);
	printf("\n 8. Coxinha da Asa = %.3f KG", wingdrumstick);
	printf("\n 9. Cerveja: %.3f litros", beer);
	printf("\n    Compre: %.0f un garrafas de 1 litro ou %.0f un latas de 350 ml", beer_1l, beer_350ml);	
	printf("\n 10. Carvão = %.3f KG", coal);
	printf("\n     Compre: %.0f saco de carvão de 5kg ou %.0f saco de carvão de 10kg", coal_5kg, coal_10kg);   


return 0;
	
   
}
