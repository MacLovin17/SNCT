#include <stdio.h>
# include <locale.h>

typedef struct{
    int id;
    char nome [10];
}dados;

int main(){
    dados da[2];
 int i;
    
for( i= 0;i<2;i++ )
{
    scanf("%s", &da[i].nome);
        fflush;
        scanf("%d",&da[i].id);
}
    for(int i = 0 ; i<2 ; i++){

    printf("Nome : %s \n idade : %d \n",da[i].nome, da[i].id );
    }

    setlocale(LC_ALL, "");
    return 0;
}
