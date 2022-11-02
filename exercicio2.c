#include <stdio.h>
#include <locale.h>

void quiz(){
	setlocale(LC_ALL, "Portuguese_Brazil");
		int quiz1,mediaquiz1,quiz2,mediaquiz2,quiz3,mediaquiz3,mediafinal;
		printf("Primeira pergunta: ");
		printf("\n--------------------------");
		printf("\nQual a raiz quadrada de 5");
		printf("\n1.       25");
		printf("\n2.       10");
		printf("\n3.      100");
		printf("\n\nResposta: ");
		scanf("%d", &quiz1);
		
		switch (quiz1){
			case 1 :
				printf("RESPOSTA CORRETA!!");
				printf("\nPontos: +10");
				mediaquiz1 = 10;
				break;
			case 2 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz1 = 0;
				break;
			case 3 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz1 = 0;
				break;
		}
		
		printf("\n\n\nSegunda pergunta: ");
		printf("\n--------------------------");
		printf("\nQual o resultado da conta 10 + 5 X 2");
		printf("\n1.       30");
		printf("\n2.       25");
		printf("\n3.       20");
		printf("\n\nResposta: ");
		scanf("%d", &quiz2);
		
		switch (quiz2){
			case 1 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz2 = 0;
				break;
			case 2 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz1 = 0;
				break;
			case 3 :
				printf("RESPOSTA CORRETA!!");
				printf("\nPontos: +10");
				mediaquiz2 = 10;
				break;
		}
		
		printf("\n\n\nTerceira pergunta: ");
		printf("\n--------------------------");
		printf("\nQual a area de um Quadrado de 8 X 8");
		printf("\n1.       80");
		printf("\n2.       64");
		printf("\n3.       16");
		printf("\n\nResposta: ");
		scanf("%d", &quiz3);
		
		switch (quiz3){
			case 1 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz3 = 0;
				break;
			case 2 :
				printf("RESPOSTA CORRETA!!");
				printf("\nPontos: +10");
				mediaquiz3 = 10;
				break;
			case 3 :
				printf("RESPOSTA INCORRETA");
				printf("\nPontos: -10");
				mediaquiz3 = 0;
				break;
		}
		mediafinal = mediaquiz1 + mediaquiz2 + mediaquiz3;
		printf("\n\nResultado final: %d", mediafinal);
		
		if (mediafinal == 0){
			printf("\n\nSe esforce um pouco mais da proxima vez =C");
			printf("\nSei que você consegue!");
		} else if (mediafinal == 20){
			printf("\n\nVocê quase conseguiu.");
			printf("\nDa proxima vez vai dar bom, CONFIA!");
		} else if (mediafinal == 30){
			printf("\n\nPARABÉNS VOCÊ GABARITOU!!!!!!");
		} 
}









int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
		quiz ();
		
return 0;
}
