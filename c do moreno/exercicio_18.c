#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1;
	int *ptr_n;
	printf("Digite um valor\n");
	scanf("%d",& n1);
	ptr_n=&n1;
	printf("valor de n1: %d\n",n1);
	printf("endereco de n1: %p\n",& n1);
	printf("valor de ptr_n: %d\n",ptr_n);
	printf("endereco de ptr_n: %p\n",&ptr_n);
	printf("valor apontado por ptr_n: %d\n",*ptr_n);
	printf("endereco de memoria da variavel apontada por ptr_n: %p\n",&*ptr_n);
	printf("tamanho em bytes de n1: %d\n",sizeof(n1));
	printf("tamanho em bytes ao qual ptr_n esta apontando: %d\n",sizeof(*ptr_n));
	system("pause");
	return 0;
}
