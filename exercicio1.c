#include <stdio.h>
#include <locale.h>


void cofre(int num1, int num2,int num3,int num4,int num5,int num6,int cont){
	setlocale(LC_ALL,"Portuguese_Brazil");
		
		if ((num1 == 25) && (num2 == 03) && (num3 == 2) && (num4 == 0) && (num5 == 0) && (num6 == 2)){
		printf("Digito 1. %d", num1);
		printf("\nDigito 2. %d", num2);
		printf("\nDigito 3. %d", num3);
		printf("\nDigito 4. %d", num4);
		printf("\nDigito 5. %d", num5);
		printf("\nDigito 6. %d", num6);
		system("cls");
		printf("SENHA CORRETA!");
		printf("\nBEM-VINDO =D");
		printf("\nSaldo: R$ 1.000.00.000");
	} else {
		printf("\n\nSENHA INVÁLIDA");	
	} 

	
	
	
		
}


int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
		int senha1,senha2,senha3,senha4,senha5,senha6,cont;
		
		printf("SENHA DO COFRE");
		printf("\nInforme o primeiro digito: ");
		scanf("%d", &senha1);
		printf("Informe o segundo digito: ");
		scanf("%d", &senha2);
		printf("Informe o terceiro digito: ");
		scanf("%d", &senha3);
		printf("Informe o quarto digito: ");
		scanf("%d", &senha4);
		printf("Informe o quinto digito: ");
		scanf("%d", &senha5);
		printf("Informe o sexto digito: ");
		scanf("%d", &senha6);
		
	
		cofre(senha1, senha2, senha3, senha4, senha5,senha6,cont);
return (0);	
}

