#include <stdio.h>

int produit ( int a , int b ) {
    return a * b ;
}
float moyenne(int a,int b) {
    return (float)(a+b)/2.0;
}

int main() {
    printf("projet collaboratif");
    printf(" le produit  est :%d\n",produit(3,4));
    printf("la moyenne est:%.2f\n",moyenne(5,3));
    return 0;
} 



