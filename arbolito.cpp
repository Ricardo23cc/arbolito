#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *derecha;
    Nodo *izquierda;	
};
 void menu();
 Nodo *crearNodo(int);
 void insertar(Nodo *&, int);
 void mostrar(Nodo *&, int);
 
 	Nodo *arbol=NULL;
 	
int main(){
	
	menu();
	
		getch ();
	return 0;
}
 void menu(){
 
  int dato,opcion,contador=0;
  do{
  cout<<"\t.:menu:"<<endl;
  cout<<"1.INSERTAR nuevo nodito"<<endl;
  cout<<"2. mostrar"<<endl;
  cout<<"3. salir"<<endl;
  cout<<"opcion:";
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"\nUn numero"<<endl;
		cin>>dato;
		insertar(arbol,dato);
		cout<<"\n";
		system ("pause");
		break;
		case 2: cout<<"\n mostrar arbol: \n\n";
		mostrar(arbol,contador);
		cout<<"\n";
		system ("pause");
		break;
	}
	system("cls");
} while(opcion !=3);

}

 Nodo *crearNodo(int n){
    Nodo *nuevo_nodo = new Nodo ();
	nuevo_nodo->dato = n;
	nuevo_nodo->derecha = NULL;
	nuevo_nodo->izquierda = NULL;
	return nuevo_nodo;
}
void insertar(Nodo *&arbol, int n){
	if (arbol==NULL){
		Nodo*nuevo_nodo=crearNodo(n);
		arbol=nuevo_nodo;
	}
	else {
		int valorRaiz = arbol->dato;
		if(n>valorRaiz){
			insertar(arbol->izquierda,n);			
		}
		else{
			insertar(arbol->derecha,n);
		}
	}

}
void mostrar(Nodo *&arbol, int contador){
	if (arbol==NULL){
	return;
	}
	else {
		mostrar(arbol->derecha, contador+1);
		for(int i=0; i<contador; i++);
		   cout<<"  ";
		   
		cout<<arbol->dato;
		mostrar(arbol->izquierda, contador+1);
	}

}

