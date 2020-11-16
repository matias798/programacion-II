#include <stdio.h>
#include <stdlib.h>

#define VERDADERO 1
#define FALSO 0
#define LLENO 10

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

struct cola
{
	int Contador;
	node *front;
	node *rear;
};
typedef struct cola cola;

void inicializar(cola *q)
{
	q->Contador = 0;
	q->front = NULL;
	q->rear = NULL;
}

int EstaVacia(cola *q)
{
	return (q->rear == NULL);
}

void Encolar(cola *q, int value)
{
	if (q->Contador < LLENO)
	{
		node *tmp;
		tmp = malloc(sizeof(node));
		tmp->data = value;
		tmp->next = NULL;
		if(!EstaVacia(q))
		{
			q->rear->next = tmp;
			q->rear = tmp;
		}
		else
		{
			q->front = q->rear = tmp;
		}
		q->Contador++;
	}
	else
	{
		printf("No se puede agregar mas elementos\n");
	}
}

int desencolar(cola *q)
{
	node *tmp;
	int n = q->front->data;
	tmp = q->front;
	q->front = q->front->next;
	q->Contador--;
	free(tmp);
	return(n);
}

void Mostrar(node *Cima)
{
	if(Cima == NULL)
	{
		printf("No hay elementos\n");
	}
	else
	{
		printf("%d\n", Cima -> data);
		Mostrar(Cima->next);
	}
}

int main()
{
	cola *q;
	q = malloc(sizeof(cola));
	inicializar(q);
	Encolar(q,10);
	Encolar(q,20);
	Encolar(q,30);
	printf("Cola antes de desencolar\n");
	Mostrar(q->front);
	desencolar(q);
	printf("Cola despues de desencolar\n");
	Mostrar(q->front);
	return 0;
}
