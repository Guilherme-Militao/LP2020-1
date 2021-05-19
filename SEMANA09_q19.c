#include <stdio.h>

int main(){
  int N,l,c;

  char tipo;
  scanf("%i",&N);
  scanf("%c",&tipo);

  if(tipo =='d'||tipo=='D'){
    for(l=0;l<N;l++){
      for(c=0;c<N;c++){
        if(l==c){
          printf("1 ");
        }else{
          printf("0 ");
        }
      }
       printf("\n");
    }
  }
  if(tipo=='s'||tipo=='S'){
    for(l=0;l<N;l++){
      for(c=0;c<N;c++){
        if(l<=c){
          printf("1 ");
        }else{
          printf("0 ");
        }
        
      }
       printf("\n");
    }
  }
  if(tipo=='i'||tipo=='I'){
    for(l=0;l<N;l++){
      for(c=0;c<N;c++){
        if(l>=c){
          printf("1 ");
        }else{
          printf("0 ");
        }
        
      }
       printf("\n");
    }
  }
  if(tipo=='t'||tipo=='T'){
    for(l=0;l<N;l++){
      for(c=0;c<N;c++){
        if((l+c)%2==0){
          printf("1 ");
        }else{
          printf("0 ");
        }
        
      }
       printf("\n");
    }
  }
return 0;
}