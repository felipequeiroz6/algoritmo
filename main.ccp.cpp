#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {	
		printf("o numero %d é maior que %d.\n", num1, num2);
	}else{
		printf("o numero %d é maior que %d.\n", num2, num1);	
	}
	return 0;
}
