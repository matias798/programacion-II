#include<stdio.h>
#include<stdlib.h>
#define CAPACIDAD 15

int A[CAPACIDAD]; 
int top = -1; //Tope de la pila

//Insertar elementos en el stack
void apilar(int x) 
{
//Evitar overflow 
if(top == CAPACIDAD -1) { 
printf("Error:No puedes agregar mas elementos\n");
return;
}
A[++top] = x;
}

//Funcion para eliminar elementos del stack
void desapila() 
{
if(top == -1) { 
printf("Error: No puedes eliminar mas elementos \n");
return;
}
top--;
}

void vaciaPila()
{
top = -1;
printf("Se han efectuado cambios, la pila ahora se encuentra vacia\n");

}

void tamanio()
{
printf("La totalidad de elementos es: %d\n",top+1);
}

void siEstaVacia()
{
if(top == -1) {printf("El stack se encuentra vacio\n");}
else
{printf("Hay elementos en el stack\n");}
}

//Cima del stack
int Top() {return A[top];}
 
//Muestra el stack de forma mas simple 
void Mostrar() {
int i;
printf("Stack: ");
for(i = 0;i<=rear;i++)
printf("%d ",A[i]);
printf("\n");
}

int main() {	
//Demostracion funcion siEstaVacia	
//siEstaVacia();

//Demostracion funcion apilar
apilar(1);
apilar(2);
apilar(3);
Mostrar();

//Demostracion funcion desapilar
desapila();
Mostrar();

//Demostracion funcion tamanio
tamanio();
Mostrar();

//Demostracion funcion vaciaPila
vaciaPila();
Mostrar();
}
