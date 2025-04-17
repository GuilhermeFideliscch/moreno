#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct produtos{
	int codigo;
	char *nome;
	float preco;
};

int main(){
	struct produtos *p;
	int qnt_de_produtos;
	char nome_temp[100];
	printf("Insira a quantidade de produtos a ser cadastrados:\n");
	scanf("%d",& qnt_de_produtos);
	getchar();
	
	p = malloc(qnt_de_produtos*sizeof(struct produtos));
	if(p != NULL){
	for(int i=0;i<qnt_de_produtos;i++){
		printf("Digite o codigo do produto %d:\n", i+1);
		scanf("%d",& p[i].codigo);
		getchar();

		printf("Digite o nome do produto %d:\n", i+1);
		fgets(nome_temp, 100, stdin);
        nome_temp[strcspn(nome_temp, "\n")] = 0;
		p[i].nome = malloc(strlen(nome_temp) + 1);
        strcpy(p[i].nome, nome_temp);

		printf("Digite o valor do produto %d:\n", i+1);
		scanf("%f",& p[i].preco);
	}
}

	for(int i=0; i<qnt_de_produtos; i++){
		printf("codigo do produto %d: %d\n",i+1, p[i].codigo);
		printf("nome do produto %d: %s\n",i+1, p[i].nome);
		printf("preco do produto %d: %.2f\n",i+1, p[i].preco);
	}
	 for (int i = 0; i < qnt_de_produtos; i++) {
            free(p[i].nome);
        }
        free(p);
	system("pause");
	return 0;
}
