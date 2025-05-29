#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct {
    char nome[50]; // Nome do Jogador Ex: Moreno
    int idade; // Idde do jogador Ex: 41
    char classe[20]; // Classe do Jogador Ex: "Guerreiro", "Mago", etc.
} personagem;
//------------------------------------------------------------------------------
typedef struct {
    int nivel; // Nível do jogador no jogo Ex: 12
    int experiencia; // Pontuação de experiência Ex: 890
    personagem p; // Dados do personagem
} jogador;
//------------------------------------------------------------------------------
typedef struct apelido {
    jogador jog; //jog é uma variável do tipo jogador
    struct apelido *proximo; //*proximo é um ponteiro do nó
}no;
//------------------------------------------------------------------------------
no *topo = NULL; //topo é ponteiro que indica o TOPO da pilha

void push(jogador j);     // procedimento Empilhar
void pop();               // procedimento Desempilhar
void mostra_pilha();      // procedimento Imprimir pilha
void liberar_pilha();     // procedimento Limpar memória
jogador entrada_dados();  // função Entrada de dados que retorna dados do jogador

//-------------------------------------------
int main() {
    setlocale(LC_ALL, ""); //ativa teclado padrão do windows
    int opcao; //opção para o MENU
    jogador dados; //dados é uma variável do tipo jogador
    do {
        system("cls");
        printf("\nMenu - Pilha de Jogadores");
        printf("\n1. Empilhar Jogador");
        printf("\n2. Desempilhar Jogador");
        printf("\n3. Apresenta Pilha");
        printf("\n4. Limpar Memória");
        printf("\n5. Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        fflush(stdin); // limpa buffer do teclado

        switch (opcao) {
            case 1:
                dados = entrada_dados(); //variável dados recebe informacoes do jogador
                push(dados); //empilha dados do jogador
                break;
            case 2:
                pop(); //desempilha o jogador do topo
                break;
            case 3:
                mostra_pilha(); //apresenta a pilha toda
                break;
            case 4:
                liberar_pilha();
                break;
            case 5:
            	printf("saindo do programa\n");
            	break;
            default:
                printf("Opção inválida");
                           
        }
       // system("pause");
    } while (opcao != 5);

    liberar_pilha(); // limpeza final
    printf("\nFim do programa.\n");
    system("pause");
    return 0;
}
//-------------------------------------------
void push(jogador j) {
   no *novo=malloc(sizeof(no));
   if(novo){
   	novo-> jog=j;
   	novo-> proximo=topo;
   	topo=novo;
    printf("\nJogador %s empilhado com sucesso!\n", j.p.nome);
}
else
	printf("\n Nao foi possivei alocar memoria \n\n");
	system("pause");
}
//-------------------------------------------

void pop() {
 	if(topo== NULL){
 	printf("A pilha esta vazia\n");
 }
 	else{
 		no *temp;
 		temp=topo;
 		topo=topo->proximo;
 		printf("\ndesempilhado com sucesso\n\n");
 		free(temp);
	 }
	system("pause");
}

//-------------------------------------------
void mostra_pilha() {
    no *temp;
    temp=topo;
    printf("\nIMPRIMINDO PILHA\n");
    while(temp!=NULL){
    	printf("%s %d %s %d %d\n",temp->jog.p.nome,temp->jog.p.idade,temp->jog.p.classe,temp->jog.nivel,temp->jog.experiencia);
    	temp=temp ->proximo;
	}
	system("pause");
}
//-------------------------------------------
void liberar_pilha() {
 	while(topo!=NULL){
 		pop();
	 }
    printf("\nMemória liberada com sucesso.\n");
    system("pause");

}
//-------------------------------------------
jogador entrada_dados() {
    jogador jog;
    printf("\nCadastro do Jogador:\n");
    printf("Nome: ");
    fflush(stdin);
    scanf("%s",&jog.p.nome);
    printf("Idade: ");
    fflush(stdin);
    scanf("%d",&jog.p.idade);
    fflush(stdin);
    printf("Classe: ");
    fflush(stdin);
    scanf("%s",&jog.p.classe);
    printf("Nivel: ");
    fflush(stdin);
    scanf("%d",&jog.nivel);
    fflush(stdin);
    printf("Experiencia: ");
    scanf("%d",&jog.experiencia);
    fflush(stdin);
    
    //concluir o restante dos dados
//------------------------------------------------------------------------------
    return jog;
}	
