#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
	int numero;
	srand(time(NULL));
	int NumMaquina = rand() % (10 + 1);
	int NumMaquina2 = rand() % (10 + 1);
	int intentos = 0;
	int i=0;
	int lista[10];

	do {
		printf("Escriba un numero plx: \n");
		scanf("%d",&numero);
		lista[intentos]= numero;
		intentos++;
		if (numero==(NumMaquina2+NumMaquina)){
			printf("Es igual a la suma de los dos números\n");
		}
		if (numero==NumMaquina){
			printf("Tu número es igual al primer número mágico\n");
		}
		if (numero== NumMaquina2){
			printf("Tu número es igual al segundo número mágico\n");
		}
		if (numero== (NumMaquina- NumMaquina2)){
			printf("Tu número es igual a la resta de los dos números\n");
		}
		if (numero== (NumMaquina*NumMaquina2)){
			printf("Tu número es igual a la multipliación de los dos números\n");
		}
		else if ((numero > NumMaquina) && (numero < NumMaquina2)){
			printf("Está entre los dos números\n");
		}
		else if (numero > NumMaquina){
			printf("Es mayor que el primer número máquina\n");
		}
		else if (numero > NumMaquina2){
		 	printf("Es mayor que el segundo número máquina\n");
		}
		else if (numero < NumMaquina){
			printf("Es menor que el primer número máquina\n");
		}
		else if (numero < NumMaquina2){
			printf("Es menor que el segundo número máquina\n");
		}


	}
	while ((numero != NumMaquina) && (numero != NumMaquina2) && (numero != (NumMaquina+NumMaquina2)) && (numero != (NumMaquina - NumMaquina2)) && (numero != (NumMaquina*NumMaquina2)) );
	printf("U made it\n");
	printf("Tus intentos fueron %d\n", intentos);
	printf("Tu registro es: \n");
	for (i; i < intentos;i++){
		printf("%d\n", lista[i]);
	}

}