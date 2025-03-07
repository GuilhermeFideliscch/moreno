#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char logradouro[50];
    char numero[5];
    char cidade[30];
    char estado[3]; 
    char cep[10]; 
} ENDERECO;
typedef struct {
    char nome[50];
    char cpf[15];
    char rg[15];
    char fone[20];
    char sexo[3]; 
    char idade[4];
    ENDERECO endereco; 
} PESSOA;
PESSOA cliente[5];

void ordenacao(){
	PESSOA tmp;
	for(short int x=0; x<4; x++){
		for(short int y=x+1; y<5; y++){
			if(strcmp(cliente[y].nome,cliente[x].nome)==-1){
				tmp=cliente[y];
				cliente[y]=cliente[x];
				cliente[x]=tmp;
			}
		}
	}
}
int main() {
    PESSOA pessoa;
    for(short int x=0; x<5; x++){//for para armazenar os dados das pessoas
    	printf("Digite o logradouro da pessoa %d:\n",x+1);
    	gets(cliente[x].endereco.logradouro);
    	
    	printf("Digite o numero da residencia da pessoa %d:\n",x+1);
    	gets(cliente[x].endereco.numero);
    	
    	printf("Digite o estado da pessoa %d:\n",x+1);
    	gets(cliente[x].endereco.estado);
    	
    	printf("Digite a cidade da pessoa %d:\n",x+1);
    	gets(cliente[x].endereco.cidade);
    	
    	printf("Digite o CEP da pessoa %d:\n",x+1);
    	gets(cliente[x].endereco.cep);
    	
    	printf("Digite o nome da pessoa %d:\n",x+1);
    	gets(cliente[x].nome);
    	
    	printf("Digite o CPF da pessoa %d:\n",x+1);
    	gets(cliente[x].cpf);
    	
    	printf("Digite o RG da pessoa %d:\n",x+1);
    	gets(cliente[x].rg);
    	
    	printf("Digite o numero de celular da pessoa %d:\n",x+1);
    	gets(cliente[x].fone);
    	
    	printf("Digite o sexo da pessoa %d [M ou F]:\n",x+1);
    	gets(cliente[x].sexo);
    	
    	printf("Digite a idade da pessoa %d:\n",x+1);
    	gets(cliente[x].idade);3,
	}
	ordenacao(cliente[5].nome);
	printf("\n");
	for(short int x=0; x<5; x++){
	printf("Pessoa %d: nome: %s\n CPF: %s\n Numero de telefone: %s\n cidade: %s\n estado: %s\n",x+1,cliente[x].nome, cliente[x].cpf, cliente[x].fone, cliente[x].endereco.cidade, cliente[x].endereco.estado);
	printf("\n");	
	}
	printf("%d\n",sizeof(pessoa));
	
	printf("tamanho em bytes das variaveis: %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n %zu\n",sizeof(cliente[0].endereco.cep),sizeof(cliente[0].endereco.cidade),sizeof(cliente[0].endereco.estado),sizeof(cliente[0].endereco.logradouro),sizeof(cliente[0].endereco.numero),sizeof(cliente[0].cpf),sizeof(cliente[0].fone),sizeof(cliente[0].idade),sizeof(cliente[0].nome),sizeof(cliente[0].rg),sizeof(cliente[0].sexo));
    system("pause"); 
    return 0;
}
