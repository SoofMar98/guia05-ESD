#include <stdio.h>

void pascal(int vector[100],int n,int c);
int main() {
    int n,vector[0];
    vector[0]=1;
    printf("Ingresar el grado n:");
    scanf("%d",&n);
    pascal(vector,n,0);
    return 0;
}
void pascal(int vector[100],int n,int c){
    int aux[c+1];
    aux[0]=1;
    aux[c]=1;
    if(c<=n){

        for (int j = 1; j <c ; ++j) {
            aux[j]=vector[j-1]+vector[j];
        }
        for (int k = 0; k <=c ; ++k) {
            printf("[%i]",aux[k]);
        }
        c=c+1;
        printf("\n");
        pascal(aux,n,c);
    }
}