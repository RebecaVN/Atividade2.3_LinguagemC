//3) Criar um algoritmo que leia a idade de uma pessoa e informar a sua classe eleitoral: 
//a. N�o-eleitor (abaixo de 16 anos) 
//b. Eleitor obrigat�rio (entre 18 e 65 anos) 
//c. Eleitor facultativo (entre 16 e 18 e maior de 65 anos) 
 
 #include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 16) {
        printf("Voc� n�o � eleitor.\n");
    }
    else if (idade >= 18 && idade <= 65) {
        printf("Voc� � eleitor obrigatorio.\n");
    }
    else {
        printf("Voc� � eleitor facultativo.\n");
    }
    
    return 0;
}
 
