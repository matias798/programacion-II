#include<stdio.h>
#include<stdlib.h>

// Estructura que almacena la informacion y el nodo siguiente
struct nodo{
    char data;
    struct nodo* next;
};
// Funcion para agregar elementos
void push(char data, struct nodo** stack){
	
	// Reservar memoria dinamica
    struct nodo* nodo = (struct nodo*)malloc(sizeof(struct nodo));
    nodo -> data = data;
    nodo -> next = *stack;
    (*stack) = nodo;
}
// Fucnion para eliminar elementos del stack
void pop(struct nodo** stack){
    if(*stack != NULL){
        printf("Se elimino el elemento: %c\n",(*stack) -> data);
        struct nodo* tempPtr = *stack;
        *stack = (*stack) -> next;
		// Liberar memoria dinamica
        free(tempPtr);
    }
    else{
        printf("El stack se encuentra vacio.\n");
    }
}
// Funcion para mostrar la cima del stack
void cima(struct nodo* stack){
    if(stack != NULL){
    printf("El elemento de la cima es : %c\n", stack -> data);
    }
    else{
        printf("El stack se encuentra vacio.\n");
    }
}
int main() {
    struct nodo* root = (struct nodo*)malloc(sizeof(struct nodo));
    root -> data = 'a';
    root -> next = NULL;
    cima(root);
    push('b',&root);
    cima(root);
    push('c',&root);
    cima(root);
    pop(&root);
    cima(root);
    pop(&root);
    cima(root);
    pop(&root);
    cima(root);
    pop(&root);
    return 0;
}
