#include <stdio.h>
#include <stdlib.h>

int main (){
    float largura,altura,area;
    float consumoPorMetro=0.3;
    float capacidadeLata=2.0;
    float litrosNecessarios;
    int latasNecessarias;


    printf("Digite a largura da parede :");
    scanf("%f",&largura);

    printf("Digite a altura da parede :");
    scanf("%f",&altura);

    area=largura*altura;
    litrosNecessarios=area*consumoPorMetro;
    latasNecessarias=litrosNecessarios/capacidadeLata;

    if(litrosNecessarios>(latasNecessarias*capacidadeLata)){
        latasNecessarias++;
    }
    printf("Voce precisara de %d lata(s)de tinta para pintar a parede.\n",latasNecessarias);


    return 0;
}
