#include<stdlib.h>
#include<stdio.h>
void recorrer();
int matriz();
int mulma();
int numpri();

void invertir(int *p, int *d);
void menu();
int main (){
	menu();
	return 0;
}
void recorrer (){
	int b[4];
	int c[4];
	int cont=0;
		for (int i=0; i<4;i++){
			printf("ingrese numero %i\n",i);
			scanf("%i",&b[i]);
	}
	for (int i=0;i<4;i++){
		 if (b[i]%2==0){
		 	c[cont]=b[i];
		 	cont =cont +1;
		 }
	}
	for (int i=0; i< cont ;i++){
		printf("es numero par es: %i \n",c[i]);
	}
	}
int matriz(){
	int b[3][3];
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){
			printf("ingrese numero [%i][%i]\n",i,j);
			scanf("%i",&b[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){
			if (b[i][j]%2!=0){	
				printf("numero impar %i\n: ",b[i][j]);
			}
		}	
	}
}
int mulma(){
	int b[3][3];
	int c[3][3];
	int d;
	int e[9];
	int f=0;
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){
			printf("ingrese numero %i\n",i);
			scanf("%i",&b[i][j]);
		}	
	}
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){
			d= b[i][j]*c[j][i];	
		}
		e[f]=d;
		f=f+1;
	}
	for (int i=0;i<3;i++){
			for (int j=0; j<3;j++){
				b[i][j]=e[f];
	printf("la multiplicacion de la matriz es:");
		for (int i=0;i<3;i++){
			printf("|");
			for (int j=0; j<3;j++){
				printf("%i",b[i][j]);
			}
		printf("|/n");
		}
	}
	}
}
int numpri(){
	int b[3][3];
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){
			printf("ingrese numero [%i][%i]\n",i,j);
			scanf("%i",&b[i][j]);
		}	
	}
	int c=1;
	int cont=0;
	int d[9];
	int f=0;
	int e;
	for (int i=0;i<3;i++){
		for (int j=0; j<3;j++){	
			for (int k=1;k<=b[i][j];k++){
				if (b[i][j] % k==0){
					cont ++;
					printf("%i",cont);
				}
			}
			if (cont <=2){
				d[f]=b[i][j];
				f=f+1;	
			}
			cont =0;
		}
	}
	for(int i=0; i<f;i++){
		c=d[i]+c;
		printf ("numero primo %i\n",d[i]);
	}
	printf ("la suma de los numeros primos es %i\n",c);
}
void invertir(int *d, int *p){
	printf ("LOS NUEMROS SON: %i , %i\n " ,*d ,*p);
	int aux ;
	aux= *d;
	*d = *p;
	*p=aux;
	printf ("LOS NUMEROS QUEDAN %i , %i" ,*d ,*p);
}
void menu(){
	int opc ;
	while (opc <6){
	printf ("HOLA\n ESTE ES MI MENU \n 1-RECORRER UN ARREGLO \n 2- RECORRER MATRIZ \n 3-MULTIPLICACION MATRICES \n 4- BUSCA NUMEROS PRIMOS \n 5- INVERTIR NUMEROS \n INGRESE UNA OPCION\n");
	scanf("%i", &opc);
	
	if (opc==1){
		recorrer();
	}
	if (opc ==2 ){
		matriz();
	}
	if (opc == 3){
		mulma();
	}
	if (opc ==4){
		numpri();
	}
	if (opc ==5){
		int c;
		int e;
		int *p;
		int *d;
		printf ("ingrese dos numero de dos digitos ");
		scanf("%i",&c);
		scanf("%i",&e);
		p=&c;
		d=&e;
		invertir( p,d);
		}
	}
}
