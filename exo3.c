#include <stdio.h>
#include <stdlib.h>

int main(){
    char** tabPrenom=NULL;
    int l,longueur;
    printf("Combien de prénoms voulez vous stocker ?\n");
    scanf("%d",&l);
    tabPrenom=calloc(l,__SIZEOF_WCHAR_T__);
    for(int i=0;i<l;i++){
        printf("Combien de lettre dans votre prénom?\n");
        scanf("%d",&longueur);
        char* p=malloc(longueur);
        
    }
}