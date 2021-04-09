/*#include <stdio.h>

int main(){
  int num;

  scanf("%d",&num);
  if(num/1000>0){
    switch(num/1000){
      case 1:printf(" mil ");
      break;
      case 2:printf("dois mil ");
      break;
      case 3:printf("tres mil ");
      break;
      case 4:printf("quatro mil ");
      break;
      case 5:printf("cinco mil ");
      break;
      case 6:printf("seis mil ");
      break;
      case 7:printf("sete mil ");
      break;
      case 8:printf("oito mil ");
      break;
      case 9:printf("nove mil ");
      break;
    }
    if(num%1000==100||num%1000==200||num%1000==300||num%1000==400|num%1000==500||num%1000==600||num%1000==700||num%1000==800||num%1000==900||num%1000<100){
      printf("e ");
    }
  }
  num=num%1000;
  if(num/100>0)
  {
    if(num/100==1&&num%100==0){
      printf("cem ");
    }else{
      if(num%100>=0){
        switch(num/100){
          case 1:printf("cento ");
          break;
          case 2:printf("duzentos ");
          break;
          case 3:printf("trezentos ");
          break;
          case 4:printf("quatrocentos ");
          break;
          case 5:printf("quinhentos ");
          break;
          case 6:printf("seiscentos ");
          break;
          case 7:printf("setecentos ");
          break;
          case 8:printf("oitocentos ");
          break;
          case 9:printf("novecentos ");
          break;
        }
        if(num%100>0){
          printf("e ");
        }
      }
    }
  }
  num=num%100;
  if(num/10)
  {
    if(num/10==1){
      switch(num%10){
        case 0: printf("dez ");
        break;
        case 1: printf("onze ");
        break;
        case 2: printf("doze ");
        break;
        case 3: printf("treze ");
        break;
        case 4: printf("quatorze ");
        break;
        case 5: printf("quinze ");
        break;
        case 6: printf("dezesseis ");
        break;
        case 7: printf("dezessete ");
        break;
        case 8: printf("dezoito ");
        break;
        case 9: printf("dezenove ");
        break;
      }
    }else{
        if(num/10>1)
        {
          switch(num/10){
            case 2: printf("vinte ");
            break;
            case 3: printf("trinta ");
            break;
            case 4: printf("quarenta ");
            break;
            case 5: printf("cinquenta ");
            break;
            case 6: printf("sessenta ");
            break;
            case 7: printf("setenta ");
            break;
            case 8: printf("oitenta ");
            break;
            case 9: printf("noventa ");
            break;
          }
          if(num%10>0){
            printf("e ");
          }
          switch(num%10){
            case 1:printf("um");
            break;
            case 2:printf("dois");
            break;
            case 3:printf("tres");
            break;
            case 4:printf("quatro");
            break;
            case 5:printf("cinco");
            break;
            case 6:printf("seis");
            break;
            case 7:printf("sete");
            break;
            case 8:printf("oito");
            break;
            case 9:printf("nove");
            break;
          }
       }
    }
  }else{
    if(num/10==0){
      num=num%10;
      switch(num/1){
        case 1: printf("um ");
        break;
        case 2: printf("dois ");
        break;
        case 3: printf("tres ");
        break;
        case 4: printf("quatro ");
        break;
        case 5: printf("cinco ");
        break;
        case 6: printf("seis ");
        break;
        case 7: printf("sete ");
        break;
        case 8: printf("oito ");
        break;
        case 9: printf("nove ");
        break;
      }
    }
  }
  return 0;
}*/