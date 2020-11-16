#define n 5
#include <stdio.h>
#include <stdlib.h>


int que[n];
int front = -1;
int top = -1;

void enque (int x)
{
	
	if(front == -1 &&top == -1){
		front = top = 0 ;
		que[top] = x; 
	}
	else if ((top +1)%n == front){
		printf("No se pueden agregar mas elementos \n");
	}
	else{
		top = (top +1) % n;
		que[top] = x; 
	}
}
//Elimina elementos
void deque (){
	
	if (front ==-1 && top == -1){
		printf(" No puedes eliminar mas elementos "); 
	}
	else if (front == top){ 
		front = top= -1;
	}
	else { front = (front +1)% n; }
}
	
//Muestra los elementos
	void display (){
		int i = front ;
		
		if (front == -1 && top == -1){
			printf(" No se encuentran elementos");}
		
		else {printf ("Los elementos de la cola son: ");
		
		while (i != top)
		{
			printf ("%d  ", que[i]);
			i = (i+1)% n;
		}
		printf("%d",que[top]);
		
		}
	}
		
		
		void peek(){
			
			if (front == -1 && top == -1){
				printf(" No se encuentran elementos");}
			
			else { printf("%d",que[front]); }
			
		}
			
			int main (){
				enque(1);
				deque();
				enque(23);
				enque(56);
				enque(88);
				deque();
				enque(1);
				enque(11);
				display();
				return 0;
			}
