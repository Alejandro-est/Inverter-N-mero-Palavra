#include <stdio.h>
#include <stdlib.h>
#include <string.h>  



int main(){

       char num[50],
       caracter[50];
       int i, j, tamanho_num;
       

       printf("\n\nDigite um numero ou uma frase: ");
       gets(num);  //Armazena a frase na variável num

       tamanho_num = strlen(num);  //strlen calcula a quantidade de caracteres que tem a num

       printf("O tamanho do numero e: %d \n", tamanho_num);


       j=strlen(num)-1;    
       
       
       
       for (i = 0; num[i]!='\0'; i++){        //Repete enquanto nao chegar ao final da num
           caracter[i] = num[j];j--;     
       }
       caracter[i]='\0';      //Se nao colocar essa parte, o programa pode mostrar LIXO
       strcpy(num,caracter);    //Copia para a variável num o conteúdo da variável caracter
       printf("\n\nO numero ou frase invertido e:\n%s\n\n",num);
     system("pause");
}