#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO 5

int stack[TAMANHO];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == TAMANHO - 1;
}

void push(int valor) {
    if (isFull()) {
        printf("Pilha cheia.\n");
        return;
    }
    top++;
    stack[top] = valor;
    printf("Valor %d adicionado.\n", valor);
}

void pop() {
    if (isEmpty()) {
        printf("Pilha vazia.\n");
        return;
    }
    int removido = stack[top];
    top--;
    printf("Valor %d removido.\n", removido);
}

void imprimir() {
    if (isEmpty()) {
        printf("Pilha vazia.\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("<- topo\n");
}

void topoPilha() {
    if (isEmpty()) {
        printf("Pilha vazia.\n");
        return;
    }
    printf("Topo: %d\n", stack[top]);
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n4 - Mostrar topo\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                push(valor);
                break;
            case 2:
                pop();
                break;
            case 3:
                imprimir();
                break;
            case 4:
                topoPilha();
                break;
            case 0:
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }
}
