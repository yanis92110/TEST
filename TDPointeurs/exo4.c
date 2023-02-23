#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 20
int main(){
  int *p;
  int tab[SIZE];
  int somme;
  srand(time(NULL));
  p=tab;
  for(int i=0;i<SIZE;i++){
    *(p+i)=rand()%11;
  }
  for(int j=0; j<SIZE;j++){
    somme=somme+*(p+j);
  }
  for(int i=0;i<SIZE;i++){
    printf("%d\n",*(p+i));
  }
  printf("%d\n",somme);
  return 0;
}