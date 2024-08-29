#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	char user[5] = "adm";
	int senha = 123;
	
	char userVer[5];
	int senhaVer;
	
	int ok;

	printf("escreva o usuario: ");
	gets(userVer);
			
	printf("escreva a senha: ");
	scanf("%d", &senhaVer);
	
	ok = strcmp(user, userVer);
	
	if(ok == 0 && senha == senhaVer) {
		numeroMaior();
	} else {
		while(ok != 0 || senha != senhaVer) {
			system("cls");
			printf("escreva o usuario: ");
			scanf("%s", &userVer);
			fflush(stdin);
			
			printf("escreva a senha: s");
			scanf("%d", &senhaVer);
	
			ok = strcmp(user, userVer);
			system("cls");
		}

		numeroMaior();
	}
}


int numeroMaior() {
	int a, b, c;
	printf("Digite tres numeros apertando ENTER: \n");
	scanf("%i %i %i", &a, %b, %c);

	if( (a>b) && (a>c) ) {
		printf("\nMaior valor e o A: %d", a);
	} else if( (b>a) && (b>c) ) {
		printf("\nMaior valor e o B: %d", b);
	} else if( (c>a) && (c>b) ) {
		printf("\nMaior valor e o C: %d", c);
	} else {
		printf("\nDois ou mais numeros com valores igual: \nA=%d \nB=%d \nC=%d", a, b,c);
	}
}
