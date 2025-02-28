#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct veiculo{
    char marca[50], modelo[50], cor[50], combustivel[50], placa[50];
    int ano_modelo, ano_fabric;
};

int busca(char vetor[50], char placa_digitada[50]){
    vetor[strcspn(vetor, "\n")] = 0;
    placa_digitada[strcspn(placa_digitada, "\n")] = 0;

    if(strcmp(vetor, placa_digitada) == 0){
        return 1;
    }
    return -1; 
}

int main(){
    char placa_a_ser_buscada[50];
    struct veiculo ve[5];
    short int y = 0, x = -1;

    for(short int x = 0; x < 5; x++){
        printf("Digite a marca do carro %d:\n", x + 1);
        fgets(ve[x].marca, 49, stdin);

        printf("Digite o modelo do carro %d:\n", x + 1);
        fgets(ve[x].modelo, 49, stdin);

        printf("Digite a cor do carro %d:\n", x + 1);
        fgets(ve[x].cor, 49, stdin);

        printf("Digite qual o combustivel do carro %d:\n", x + 1);
        fgets(ve[x].combustivel, 49, stdin);

        printf("Digite qual a placa do carro %d:\n", x + 1);
        fgets(ve[x].placa, 49, stdin);

        printf("Digite qual o ano modelo %d:\n", x + 1);
        scanf("%d", &ve[x].ano_modelo);

        printf("Digite qual o ano de fabricacao %d:\n", x + 1);
        scanf("%d", &ve[x].ano_fabric);
        getchar(); 
    }
    printf("Digite a placa do carro que deseja saber suas caracteristicas:\n");
    fgets(placa_a_ser_buscada, 49, stdin);
    while(y < 5 && x == -1){
        x = busca(ve[y].placa, placa_a_ser_buscada);
        y++;
    }
    if(x == 1){
        printf("Marca do carro: %s", ve[y - 1].marca);
        printf("Modelo do carro: %s", ve[y - 1].modelo);
        printf("Cor do carro: %s", ve[y - 1].cor);
        printf("Combustivel do carro: %s", ve[y - 1].combustivel);
        printf("Ano do modelo do carro: %d\n", ve[y - 1].ano_modelo);
        printf("Ano de fabricacao do carro: %d\n", ve[y - 1].ano_fabric);
    } else {
        printf("Carro não encontrado.\n");
    }
    system("pause");
    return 0;
}

