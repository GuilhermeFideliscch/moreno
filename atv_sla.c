#include <stdio.h>
#include <stdlib.h>
int main() {
  typedef struct pessoa{
    char nome[50];
    char fone[15];
    char email[50];
    char cpf [12];
  } pessoa;
  pessoa p[3];
  int x,y,z;
  char w;
  float k;
  double n;
  int *ptr_X=&x;
  int *ptr_Y=&y;
  int *ptr_Z=&z;
  char *ptr_W=&w;
  float *ptr_K=&k;
  double *ptr_N=&n;
  for(short int a=0;a < 3; a++){
  	printf("Digite o nome da pessoa %d\n",a+1);
  	gets(p[a].nome);
  	printf("Digite o numero de telefone da pessoa %d\n",a+1);
  	gets(p[a].fone);
  	printf("Digite o email da pessoa %d\n",a+1);
  	gets(p[a].email);
  	printf("Digite o cpf da pessoa %d\n",a+1);
  	gets(p[a].cpf);
  }
	*ptr_X = 10;
	printf("valor de x ao ser atribuida pelo ponteiro: %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",x,&x,sizeof(x));
    *ptr_Y = x*2;
    printf("valor de y ao ser atribuida pelo ponteiro (sendo o dobro de x): %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",y,&y,sizeof(y));
    *ptr_Z = (y*10)-20;
    printf("valor de z ao ser atribuida pelo ponteiro (sendo 10 vezes o valor de y): %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",z,&z,sizeof(z));
	*ptr_W = p[1].nome[2];
	printf("caractere atribuido a variavel W %c\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",w,&w,sizeof(w));
	*ptr_K = z/2;
	printf("valor de k ao ser atribuida pelo ponteiro (sendo metade de z): %.1f\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",k,&k,sizeof(k));
	*ptr_N = (*ptr_X+*ptr_Y)*0.325;
	printf("valor de N ao ser atribuida pelo ponteiro %.2lf\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",n,&n,sizeof(n));
	printf("\n");
	printf("valor do ponteiro de x: %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_X,&*ptr_X,sizeof(*ptr_X));
	printf("valor do ponteiro de x: %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_Y,&*ptr_Y,sizeof(*ptr_Y));
	printf("valor do ponteiro de x: %d\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_Z,&*ptr_Z,sizeof(*ptr_Z));
	printf("valor do ponteiro de x: %c\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_W,&*ptr_W,sizeof(*ptr_W));
	printf("valor do ponteiro de x: %.1f\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_K,&*ptr_K,sizeof(*ptr_K));
	printf("valor do ponteiro de x: %.2lf\n Seu endereco de memoria: %p\n seu consumo em bytes: %d\n",*ptr_N,&*ptr_N,sizeof(*ptr_N));

  system("pause");
  return 0;
}
//2)Qual o tamanho de uma struct que não possua nenhuma variável definida em seu conteúdo? R: pelo menos 1 byte
//3) Qual comando e parâmetros devo utilizar para apresentar a posição do último caractere de uma string? R: Como uma string é um vetor apenas pegue a ultima posição sem ser o caracter nulo
  //Exemplo: char Nome[20];, vamos atribuir o ultimo caracter dessa string em uma variavel chamada a, a=nome[19];
  //Se uma string de 8 elementos possui seu endereço de memoria 0090FEF0, quais serão os endereços de memória do 1o. e  5o. caractere? R: o primeiro caractere sera 0090FEF0, e o quinto sera 009FF14
