#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <time.h>
using namespace std;

//EJERCICIO 1	¿Es divisibe?
int dividir(int a, int b){
	if(a%b == 0){
		return 1;
	} else{
		return 0;
	}
}
void Divisibilidad(){
	int num,divisor;
	cout<<"***********************************************EJERCICIO 1*********************************************"<<endl;
	cout<<"Ingrese 2 números para saber si son divisibles"<<endl;
	cin>>num;
	cin>>divisor;
	if(dividir(num,divisor)==1){
		cout<<"Es divisible! "<<endl;
	}else{
		cout<<"No es divisible :c "<<endl;
	}
}
	
//EJERCICIO 2	¿Cuál es mayor?
int mayorQue(int a,int b){
	if (a>b){
		return a;
	}else{
		if (a<b){
			return b;
		} else {
			return 0;
		}
	}
}
void Programa_2(){
	int num1,num2, mayor;
	cout<<"***********************************************EJERCICIO 2************************************************"<<endl;
	cout<<"Ingrese 2 números que desee comparar"<<endl;
	cin>>num1>>num2;
	mayor = mayorQue(num1,num2);
	if (mayor == 0){
		cout<<"Los números son iguales";
	}else{
		if(mayor == num1){
			cout<<"El número "<< num1 <<" es mayor que "<<num2<<endl;
		}else{
			cout<<"El número "<<num2<<" es mayor que " <<num1<<endl;
		}
	}
}
//EJERCICIO 3	¿Es par?
void Programa_3(){
	int n1;
	cout<<"***********************************************EJERCICIO 3************************************************"<<endl;
	cout<<"Ingrese un número para determinar si es par o impar"<<endl;
	cin>>n1;
		
	if(n1%2 == 0){
		cout<<"Es par "<<endl;
	}else{
		cout<<"Es impar "<<endl;
	}
}
	
//EJERCICIO 4 	Promedio de notas
int promediarNotas(){
	int n=0; int i=0; int j=0; int a=0 ; int promedio=0; int sum=0;int notas[20];
	
	n = 1 + rand()%20; //genera una cantidad de notas entre 1 y 20
	
	for(i=1;i<=n;i++){
		a = 1 + rand()%10; //genera notas entre 1 y 10
		notas[i]=a;
	}
	for(j=1;j<=n;j++){
		sum=notas[j]+sum;
	}
	return promedio=sum/n;
	
}
void NotasPromedio(){
	cout<<"***********************************************EJERCICIO 4************************************************"<<endl;
	cout<<"Este programa genera entre 1 a 20 notas cuyo puntaje varía entre 1 y 10"<<endl;
	cout<<"\n El promedio de notas es de: ";
	cout<<promediarNotas()<<endl;
	
}
//EJERCICIO 5  ¿Que enfermedad?
void Enfermedad(){
	int opc;
	cout<<"***********************************************EJERCICIO 5************************************************"<<endl;
	cout<<"Seleccione los síntomas que presenta"<<endl;
	cout<<"1-Fiebre, tos, dolor de garganta, moqueo o congestion nasal"<<endl;	
	cout<<"2-Tos, estornudos, congestion nasal"<<endl; 
	cout<<"3-Tos y mucosidad"<<endl;
	cout<<"4-Fiebre y dolor de oído"<<endl; 
	cout<<"5-Dolor de cabeza, congestión nasal o moqueo, dolor o presión en la cara "<<endl; 
	
	while (opc != 0){
		cin>>opc;
		cout<<"\n";
		switch (opc){
		case 0:
			break;
		case 1:
			cout<<"Usted tiene gripe"<<endl;
			break;
		case 2:
			cout<<"Usted tiene un resfriado común"<<endl;
			break;
		case 3:
			cout<<"Usted tiene bronquitis aguda"<<endl;
			break;
		case 4:
			cout<<"Usted tiene una infección de oído"<<endl;
			break;
		case 5:
			cout<<"Usted tiene sinusitis"<<endl;
			break;
		};
		cout<<"¿Quiere consultar por otros síntomas? (Presione 0 para salir) "<<endl;
		
	};	
}
//EJERCICIO 6	¿Que sueldo?
int calcularSueldo(int horas, int mes, int &pago){
	
	if(mes==1){
		if(horas>=3 && horas<=5){
			pago = (pago*1.03);
		}
		else{
			if(horas>=6 && horas<=10){
				pago = pago*1.10;
			}
		}
	}
	else{
		if(horas>=3 && horas<=10){
			pago = pago*1.02;
		}
	}
	return pago;
}
void Sueldo(){  
	int hsTrabajadas; int mesCompleto; int pago;
	
	cout<<"***********************************************EJERCICIO 6************************************************"<<endl;
	cout<<"Ingrese el sueldo del empleado"<<endl;
	cin>>pago;
	cout<<"¿Completó el mes? (1-Si 2-No)"<<endl;
	cin>>mesCompleto;
	cout<<"Ingrese la cantidad de horas extras trabajadas"<<endl;
	cin>>hsTrabajadas;
	cout<<"El sueldo que le corresponde es de: $"<<calcularSueldo(hsTrabajadas,mesCompleto,pago)<<endl;
	
}
//EJERCICIO 7 (Agregado en clase)
void SumaMatrices(){
	int arreglin[2][2],arreglon[2][2];
	cout<<"***********************************************EJERCICIO 7************************************************"<<endl;
	cout<<"Ingrese los valores que desea sumar ^u^"<<endl;
	
	//carga de datos
	cout<<"Primer matriz"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"["<<i+1<<"]["<<j+1<<"]=";
			cin>>arreglin[i][j];
		}
	}
	cout<<"Segunda matriz"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"["<<i+1<<"]["<<j+1<<"]=";
			cin>>arreglon[i][j];
		}
	}
	//suma de matrices y muestra de matriz
	cout<<"Se mostrará la suma de ambas matrices"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"["<<arreglin[i][j]+arreglon[i][j]<<"]"<<endl;
		}
	}
}
		
//EJERCICIO 8 y 9 multiplicar y potenciar (Agregado en clase)
int multiplicar(int a, int b){
	if (b==1){
		return a;
	}else{
		return a+multiplicar(a,b-1);
	}
}	
int potencia(int a,int b){			
	if (b==0){
		return 1;
	}else{
		return a*potencia(a,b-1);
	}
}
void Multiplicador_potencia(){
	int a,b,selec;
	cout<<"***********************************************EJERCICIO 8 y 9************************************************"<<endl;
	cout<<"¿Qué desea realizar? (1-multiplicar 2-potencia 3-ambos)"<<endl;
	cin>>selec;
	cout<<"Ingrese 2 números: "<<endl;
	
	if (selec==2){
		cout<<"Base: ";
		cin>>a;
		cout<<"Exponente: ";
		cin>>b;
		cout<<"La potencia de "<<a<<"^"<<b<<" es: "<<potencia(a,b)<<endl;
	}else{
		if(selec==1){
			cin>>a>>b;
			cout<<"La multiplicación entre "<<a<<"*"<<b<<"="<<multiplicar(a,b)<<endl;
		}else{
			cin>>a>>b;
			cout<<"La potencia de "<<a<<"^"<<b<<" es: "<<potencia(a,b)<<endl;
			cout<<"La multiplicación entre "<<a<<"*"<<b<<"="<<multiplicar(a,b)<<endl;
		}
	}
}
//EJERCICIO 10		Serie de Fibonacci(Agregado en clase)
int Fibo(int pos){
	int a=1;
	if(pos<=2){
		return a;
	}else{
		a=Fibo(pos-2)+Fibo(pos-1);
	}
	return a;
}
void SerieFibonacci(){
	int posicion, opc=1;
	cout<<"***********************************************EJERCICIO 10************************************************"<<endl;
	do{
		if (opc==1)
			cout<<"¿Hasta qué número de la serie de Fibonacci desea ver?"<<endl;
		cin>>posicion;
		cout<<Fibo(posicion)<<endl;
		cout<<"¿Desea ingresar otro número? (1-Si 2-No)"<<endl;
		cin>>opc;
	}while (opc==1);
}
//EJERCICIO 11		FACTORIAL DE UN NUMERO	
int calcularFactorial(int a){
	if (a==0){
		return 1;
	}
	else{
		return a*calcularFactorial(a-1);
	};
}
void Factorial(){
	int num;
	cout<<"***********************************************EJERCICIO 11************************************************"<<endl;
	cout<<"Veamos el factorial del número --> ";
	cin>>num;
	cout<<"El factorial es: "<<calcularFactorial(num)<<endl;
}
//EJERCICIO 12		MOSTRAR ARREGLO
void MostrarArreglo(){
float arreglo[5]={4.5,5.5,3.4,2.2,1.9};
	cout<<"***********************************************EJERCICIO 12************************************************"<<endl;
	for(int i=0;i<5;i++){
		cout<<"["<<arreglo[i]<<"]"<<endl;
	}
}
	
//EJERCICIO 13 		BUSCAR EN EL ARREGLO
void EncontrarNumArray(){
	int array1[10],num,aviso=0;
	cout<<"***********************************************EJERCICIO 13************************************************"<<endl;
	cout<<"Ingrese un número para verificar si se encuentra en el arreglo"<<endl;
	cin>>num;
	for(int i=0;i<10;i++){		
		array1[i]=1+rand()%10; 	//Genera valor aleatorio entre 1 y 10
	}
	for(int i=0;i<10;i++){
		if (num==array1[i]){
			aviso = 1;
			cout<<"El número "<<num<<" se encuentra en el arreglo!"<<endl;
		}
	}
	if (aviso==0)
		cout<<"El número "<<num<<" no se encuentra en el arreglo, el arreglo es: "<<endl;
	for(int i=0;i<10;i++){
		cout<<"["<<array1[i]<<"]"<<endl;
	}	
}
//EJERCICIO 14		SUMA DE ARREGLOS
void SumaArreglos(){
	float array1[2],array2[2],resultadin[2];
	srand(time(NULL));
	cout<<"***********************************************EJERCICIO 14************************************************"<<endl;
	cout<<"A continuación se sumarán 2 arreglos con valores randómicos (valores entre 0 y 100)!"<<endl;
	
	for(int i=0;i<2;i++){
		array1[i]=rand()%100;
		array2[i]=rand()%100;
	}
	for(int j=0;j<2;j++){
		resultadin[j]= array1[j]+array2[j];
		cout<<"["<<resultadin[j]<<"]"<<endl;
	}
}
	
//Texto de opciones
void Opciones(){
	cout<<"\n 1:¿Es Divisible? \n 2:¿Cuál es mayor? \n 3:¿Es par? \n 4:Promedio de notas \n 5:¿Que enfermedad?";
	cout<<"\n 6:¿Que sueldo? \n 7:Suma de matrices \n 8:Multiplicar o potencia \n 9:Serie de Fibonacci \n 10:Cálculo del factorial de un número";
	cout<<"\n 11:¡Mostrar arreglo! \n 12:¿Está en el arreglo? \n 13:Suma de arreglos"<<endl;
}
//Selector     
void selector(){
	int a;
	while (a != 0){
		cout<<"\n ";
		cin>>a;
		switch (a){
		case 0:
			cout<<"\n FINALIZANDO..."<<endl;
			break;
		case 1: 
			system("cls");
			Divisibilidad();
			break;
		case 2: 
			system("cls");
			Programa_2();
			break;
		case 3:
			system("cls");
			Programa_3();
			break;
		case 4:
			system("cls");
			NotasPromedio();
			break;
		case 5:
			system("cls");
			Enfermedad();
			break;
		case 6:
			system("cls");
			Sueldo();
			break;
		case 7:	//terminar
			system("cls");
			SumaMatrices();
			break;
		case 8:
			system("cls");
			Multiplicador_potencia();
			break;
			
		case 9: 
			system("cls");
			SerieFibonacci();
			break;
		case 10: 
			system("cls");
			Factorial();
			break;
		case 11: 
			system("cls");
			MostrarArreglo();
			break;
		case 12:   
			system("cls");
			EncontrarNumArray();
			break;
			
		case 13:
			system("cls");
			SumaArreglos();
			break;	
		};
		if(a>0){ //Evita que se repitan las opciones al salir
			cout<<"\n ¿Quiere ejecutar otro programa? Presione 0 para salir"<<endl;
			Opciones();
		}
	}
}
	
	//FUNCION PRINCIPAL
int main(int argc, char *argv[]) {
	
	cout<<"Ingrese el programa que desea ejecutar :D";
	Opciones();	//texto de opciones
	selector();	//selector de opciones
	
	return 0;
}
