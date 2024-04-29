#include <stdio.h>
int main(){
char nome[5][10], nome_nota[5][10];
float nota[5], nota_baixa[5];
int i, k=0;

printf("Nome dos 5 alunos: \n");
for(i=0;i<=4;i++){
    fflush(stdin);
    fgets(nome[i],10,stdin);
}
printf("Notas dos alunos: \n");
for(i=0;i<=4;i++){
    scanf("%f", &nota[i]);
}
for(i=0;i<=4;i++){
    if(nota[i] < 6.0){
        k++;
        strcpy(nome_nota[i],nome[i]);
        nota_baixa[i]=nota[i];

}
}
printf("Os alunos com notas baixa: \n");
for(i=0;i<k;i++){
   printf("\nNome: %s", nome_nota[i]);
   printf("Nota:%.1f", nota_baixa[i]);
}



return 0;
}
