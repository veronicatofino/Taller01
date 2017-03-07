#include <stdio.h>
#include <stdlib.h>

int longc(char *cad){
	int n = 0;
	while (cad[n]!='\0'){
		n++;
	}
	printf("%d\n",n);
	return n;
}
char copiar(char *o,char *q){
	int n= longc(o);
	q=(char*) malloc (n+1);
	for (int i=0;i<=n;i++){
		q[i]=o[i];
	}
	printf("%s\n",q);
	return *q;
}
 char copiarN (char *cadOrigen,char*cadDestino, int n){
 	  cadDestino= (char*)malloc(n+1);
 	  for (int j=0; j<n; j++){
 	  	cadDestino[j]= cadOrigen[j];
 	  	cadDestino[j+1]='\0';
 	  }

 	  printf("%s\n",cadDestino);
 	  return *cadDestino;
}


 char copiarSub (char *cadO,char *cadD, int n, int m){
 	int lc= longc(cadO);
 	cadD= (char*) malloc(m-n+1);
 	int Neil=0;
 	for (int h=n; h<=m; h++){
	 	cadD[Neil]= cadO[h];
	 	cadD[Neil+1]= '\0'; 	
	 	Neil=Neil+1;		

 	}
 	printf("%s\n",cadD);
 	return *cadD;
 }

 int CompararCadenas(char*cad1, char*cad2){
 	int con1=0;
 	int con2= 0;
 	int lb= longc(cad1);
 	int lc=longc(cad2);
 	for (int ac1=0;ac1<= lb; ac1++){
 		char v=cad1[ac1];
 		con1= con1 +v;
 	}

 	for (int ac2=0;ac2<= lc; ac2++){
  		char l=cad2[ac2];
 		con2= con2 +l;
 	}
 	if (con1 < con2){
 		printf("Resultado <0\n");
 	}
 	if (con1>con2){
  		printf("Resultado >0\n");
 	}
 	if (con1==con2){
  		printf("Resultado =0\n");
  	}
 }

 char ConcatenarCadenas(char *cad1, char*cad2){
  	int lb= longc(cad1);
 	int lc=longc(cad2);
 	char *ptr= cad1;
 	int v= lb + lc;
 	cad1= (char*)malloc(v+1);
 	for(int i=0;i<lb;i++){
 		cad1[i]= ptr[i];
 	}

 	for (int i=0; i<lc; i++){
 		cad1[i+lb]= cad2[i];
 		cad1[i+lb+1]= '\0';
 	}
 	printf("%s\n",cad1);
 	return *cad1;
 }

 char asignarcadena(char *cad, char car){
 	  	int lb= longc(cad);
 	  	char *prro=cad;
 	  	cad= (char*)malloc(lb+1);
 	  	for (int u=0; u<lb;u++){
 	  		cad[u]= prro[u];
 	  		cad[u+1]='\n';
 	  	}
 	  	printf("%s\n",cad);
 	  	for (int u=0; u <lb;u++){
 	  		cad[u]=car;
 	  		cad[u+1]='\0';
 	  	}

 	  	printf("%s\n", cad);
 	  	return *cad;

 }

 char Mayuscula(char*cad){
  	  	int lb= longc(cad);
   	  	char *prro=cad;
  	  	cad= (char*)malloc(lb+1);
  	  	for (int u=0; u<lb;u++){
 	  		cad[u]= prro[u];
 	  		cad[u+1]='\n';
 	  	}
  	  	for (int y=0; y<lb;y++){
  	  		char yu= cad[y];
  	  		if (yu>=97 && yu<=122){
  	  			yu=yu-32;
  	  		}
  	  		cad[y]=yu;
  	  	}
  	  	printf("%s\n",cad);
 }
int ExisteCaracter(char*cad, char car){
	int lb= longc(cad);
	for (int i=0;i <lb; i++){
		if (cad[i]== car){
			printf("TRUE\n");
			return 1;
		}
		else if (i== lb -1){
			printf("FALSE\n");
			return 0;
		}
	}
}
int Posini (char *cad, char car){
	int lb= longc(cad);
	for (int i=0; i<lb;i++){
		if (cad[i]==car){
			printf("%d\n", i);
			return i;
		}
		else if(i== lb-1){
			printf("-1\n");
		}
	}
}

int Posfin (char *cad, char car){
	int lb= longc(cad);
	for (int i= (lb); i >=0; i--){
		if (cad[i]==car){
			printf("%d\n",(lb-(lb-i)));
			return ((lb-(lb-i)));
		}
		else if (i==0){
			printf("-1\n");
		}
	}
}

int main(int argc, char* argv[]){
	char *cad1= argv[1];
	char *cadN= argv[2];
	ConcatenarCadenas (cad1,cadN);
	/*char *d1="Heollow";
	longc(d1);
	char*d1,char d, int y, int x, char *pc
	char *t="hi";
	copiar(d1,t);
	int y= 3;
	int x= 6;
	char d= 'o';
	char *pc= "jellouitsme"; 
	copiarN (d1,pc,y);
	copiarSub (d1,pc,y,x);
	CompararCadenas(d1,pc);
	ConcatenarCadenas(d1,pc);
	asignarcadena(d1,d);
	Mayuscula(pc);
	ExisteCaracter(d1,d);
	Posini(d1,d);
	Posfin(d1,d);*/
}


