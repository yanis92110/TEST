#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randTab(int n, int x, int y){

    int tab[n];


    for(int i=0;i<n;i++){
        srand(time(NULL));
        tab[i]=x+rand()%y;
    }
    return tab;
}
int *tabPair(int){
    
}
int main(){
    int n,x,y;
    int *p1;
    printf("Entrer le nombre de valeurs souhaitées, ainsi que l'intervalle des valeurs\n");
    scanf("%d %d %d",&n,&x,&y);
    p1=randTab(n,x,y);
    printf("L'adresse vaut %p",p1);
    return 0;
}