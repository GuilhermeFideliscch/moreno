#include <stdio.h>
#include <stdlib.h>


typedef struct apelino_no{
	char nome[30];
	int idade;
	struct apelino_no *proximo;
}no;

no *top = NULL;

void push(no n);
void pop();
void imprimir();
void FreePilha();


int main(){
	int escolha;
	no novoNo;
	do{
		system("cls");
        printf("\n Digite 1 para Empilhar");
        printf("\n Digite 2 para Desempilhar");
        printf("\n Digite 3 para Imprimir");
        printf("\n Digite 4 para encerrar o programa");
        scanf("%d", &escolha);
        fflush(stdin);
        
        switch(escolha){
        	case 1:
        		printf("Digite o nome a ser empilhado");
				scanf("%s", novoNo.nome);
        		fflush(stdin);
        		printf("Digite a idade a ser empilhado");
        		scanf("%d", &novoNo.idade);
        		fflush(stdin);
        		push(novoNo);
        		break;
        	case 2:
        		pop();
        		break;
        	case 3:
        		imprimir();
        		break;
        	case 4:
        		printf("Encerrando o programa...");
        		break;
		}
	}while(escolha != 4);
	FreePilha();
	printf("\n memoria liberada e programa encerrado");
	system("pause");
	return 0;
}

void push(no n){
	no *novo = malloc(sizeof(no));
	if(novo != NULL){
		strcpy(novo->nome, n.nome);
		novo->idade = n.idade;
		novo->proximo = top;
		top = novo;
		printf("\n empilhado");
	}else{
		printf("\n nao foi possivel empilhar");
		system("pause");
	}
}

void pop(){
	if(top==NULL){
		printf("\n Pilha vazia");
	}
	else{
		no *temp;
		temp= top;
		top= top->proximo;
		printf("\nNome: %s, Idade: %d foi desempilhado", temp->nome, temp->idade);
		free(temp);
	}
	system("pause");
}

void imprimir(){
	if(top==NULL){
		printf("\n Pilha vazia");
	}
	else{
		no *temp;
		temp=top;
		while(temp != NULL){
			printf("\nNome: %s, Idade: %d", temp->nome, temp->idade);
			temp= temp->proximo;
		}
	}
	system("pause");
}

void FreePilha(){
	while(top != NULL){
		pop();
	}
}
