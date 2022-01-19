#include<stdio.h>
#include<stdlib.h>
main(){
	int qnt, rept=0, v, total,med;
	printf("Informe a quantidade de números que irá digitar: ");
		scanf("%d", &qnt);
		while(rept < qnt){
			printf("Digite um valor: ");
			scanf("%d", &v);
			total=total+v;
			rept++;
		}
		med=total/qnt;
		printf("Media: %d \n", med);
		system("pause");
		
}
