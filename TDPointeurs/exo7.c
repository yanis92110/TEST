#include <stdio.h>
#define N 5
int getExtremums(int tab[N]){
  int* p1;
  int max,min;
  p1=tab;
  min=*p1;
  max=*p1;
  for(int i=1;i<N+1;i++){
    if(max<*(p1+i)){
      max=*(p1+i);
    }
    }
  for(int i=1;i<N+1;i++){
    if(min>*(p1+i)){
      min=*(p1+i);
    }
    }
  printf("L'adresse mémoire de la plus petite valeur est %p\nL'adresse mémoire de la plus grande valeur est %p",&min,&max);
  }
int main(){
  int tab[N]={0,1,2};
  getExtremums(tab[N]);
  return 0;
}