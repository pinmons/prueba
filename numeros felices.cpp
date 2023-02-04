#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int F_N_Feliz(int);



int main() {
	
string a;
int k;
int b=0, NFeliz=0, aux;

	

do{
cout<< " \n ESTA PREPARADO PARA CONOCER LA FELICIDAD DE SU NUMERO? \n";
cout<<"   _   _ _    _ __  __ ______ _____   ____   _____      ______ ______ _      _____ _____ ______  _____ \n ";
cout<<"  | v | | |  | |  v/  |  ____|  __ v / __ v / ____|    |  ____|  ____| |    |_   _/ ____|  ____|/ ____|\n ";
cout<<"  |  v| | |  | | v  / | |__  | |__) | |  | | (___      | |__  | |__  | |      | || |    | |__  | (___  \n ";
cout<<"  | . ` | |  | | |v/| |  __| |  _  /| |  | |v___ v     |  __| |  __| | |      | || |    |  __|  v___ v \n ";
cout<<"  | |v  | |__| | |  | | |____| |   v| |__| |____) |    | |    | |____| |____ _| || |____| |____ ____) |\n ";
cout<<"  |_| v_|v____/|_|  |_|______|_|  v_vv____/|_____/     |_|    |______|______|_____v_____|______|_____/ \n\n\n ";
cin>> a;

 if (a=="si" || a=="SI" || a=="Si"){
 	
 	b=1;
 	
 	Sleep(2000);
 	system("cls");
	 }else{
	 system ("cls");	
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
cout<< ">:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(   >:(	\n\n";
Sleep(4000);
system ("cls");
	
	 	
	 }
	
}while (b==0);

do{
	
cout<< " \n Ingrese un numero (si desea cerrar el programa ingrese cualquier letra)\n "; cin>>k;


for (int i=0; i<10000; i++){

	NFeliz=F_N_Feliz(k);

	 
	if (NFeliz==1){
		
	i=10000;	
	}
	k=NFeliz;
}
	if (NFeliz==1){
	
	cout<< " \n El numero si es feliz :)  \n";	
	}else {
	cout<< " El numero no es feliz :(  \n";		
	}	
	
}while (a=="si" || a=="SI" || a=="Si");



	return 0;
}





int F_N_Feliz(int k){
	
int resultado=0, aux2[30], tam=0, aux;

while (k>0){
	aux2[tam]=k%10;
	k=k/10;
	
	tam++;
};

for (int i=tam-1;i>=0;i--){
	aux=aux2[i]^2;
	resultado=resultado+aux;
}
	
return resultado;	
	
}