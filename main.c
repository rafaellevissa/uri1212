#include <stdio.h>
#include <string.h>

int main(void) {
  char number1[10];
  char number2[10];
  char bit1,bit2;
  char matriz1[500][10];
  char matriz2[500][10];
  int i,j,cont, tamanho, digito1, digito2, carrys=0, soma;
  for(i=0;i<500;i++){
    scanf("%s",&number1[0]);
    strcpy(matriz1[i],number1); 
    scanf("%s",&number2[0]);   
    strcpy(matriz2[i],number2); 
    if(strcmp(matriz1[i],"0")==0 && strcmp(matriz2[i],"0")==0){
      cont=i;
      i=500;
    }
  }
  for(i=0;i<cont;i++){
    tamanho = strlen(matriz1[i]);
    for(j=0;j<tamanho;j++){
      bit1 = matriz1[i][j];
      bit2 = matriz2[i][j];      
      digito1 = (int)(bit1) - 48;
      digito2 = (int)(bit2) - 48;
      soma=digito1+digito2;
      if(soma>9){
        carrys++;
      }
    }
    if(carrys>0){
      printf("%d carry operations.\n", carrys);
    }else{
      printf("No carry operations.\n");
    }
    carrys=0;
  }
  return 0;
}