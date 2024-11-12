#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char user[5] = "adm";
	int senha = 123;
	
	char userVer[5];
	int senhaVer;
	
	int ok;

	printf("escreva o usuário: ");
	gets(userVer);
			
	printf("escreva a senha: ");
	scanf("%d", &senhaVer);
	
	ok = strcmp(user, userVer);
	
	if(ok == 0 && senha == senhaVer) {
		system("cls");
		numeroMaior();
	} else {
		while(ok != 0 || senha != senhaVer) {
			system("cls");
			printf("escreva o usuário: ");
			scanf("%s", &userVer);
			fflush(stdin);
			
			printf("escreva a senha: ");
			scanf("%d", &senhaVer);
	
			ok = strcmp(user, userVer);	
			system("cls");
		}

		numeroMaior();
	}
}

int numeroMaior() {
    int a, b, c;
    printf("Digite três números apertando ENTER: \n");
    scanf("%i %i %i", &a, &b, &c);

    int numeros[3] = {a, b, c};
    int temp;
    
    int i;
    int j;
    
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3 - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    system("cls");
    printf("Números do maior para o menor:\n\n%d \n%d \n%d", numeros[0], numeros[1], numeros[2]);

    if (numeros[0] == numeros[1] && numeros[1] == numeros[2]) {
        printf("Todos os números são iguais: %d\n", numeros[0]);
    } else {
        if (numeros[0] == numeros[1]) {
            printf("Valores iguais: %d\n", numeros[0]);
        }
        if (numeros[0] == numeros[2]) {
            printf("Valores iguais: %d\n", numeros[0]);
        }
        if (numeros[1] == numeros[2]) {
            printf("Valores iguais: %d\n", numeros[1]);
        }
    }
}
