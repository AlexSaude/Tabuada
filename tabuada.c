#include<stdio.h>

int main(){
int fator, protudo,i;

printf("Digite o numero do multiplicando desejado: ");
scanf("%d",&fator);

for (i=0;i<=10;i++){
printf("%d x %d = %d\n",i,fator,fator * i);

}

return 0;
}
