#include <stdio.h>

int main(){
  char frase[50];
  int i;

  gets(frase);

  for(i=0;i<50;i++){
    if(frase[i]=='a'||frase[i]=='e'||frase[i]=='o'||frase[i]=='u'){
      frase[i]='i';

      }
      if(frase[i]=='A'||frase[i]=='E'||frase[i]=='O'||frase[i]=='U'){

        frase[i]='I';

      }
  }
  printf("%s",frase);



  return 0;
}