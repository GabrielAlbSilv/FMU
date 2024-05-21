#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função imprimir cardápio
void Cardapio() {
    printf("------- Cardápio -------\n");
    printf("1. Hambúguer - R$ 15.00\n");
    printf("2. Pizza (1 fatia) - R$ 12.50\n");
    printf("3. Hot-Dog - R$ 10.00\n");
    printf("4. Refrigerante - R$ 8.00\n");
    printf("5. Suco - R$ 6.00\n");
    printf("6. Sair\n");
    printf("------------------------\n");
}

// Função calculo da conta
float calcularTotal(int pedido, int quant) {
    float preco;
    switch (pedido) {
        case 1:
            preco = 15.00;
            break;
        case 2:
            preco = 12.50;
            break;
            
        case 3:
            preco = 10.00;
            break;
        
        case 4:
            preco = 8.00;
            break;
            
        case 5:
            preco = 6.00;
            break;    
        
        default:
            preco = 0;
            break;
    }
    return preco * quant;
}

int main() {
    int pedido, quant;
    float total = 0;
    setlocale(LC_ALL,"");

    printf("Bem-vindo ao Restaurante!\n");

    while (1) {
        Cardapio();
        printf("Faça seu pedido (1-5): ");
        scanf("%d", &pedido);

        if (pedido == 6) {
            break;
        }

        if (pedido < 1 || pedido > 5) {
            printf("Opção inválida. Por favor, escolha um número de 1 a 5.\n");
            continue;
        }

        printf("Informe a quantidade: ");
        scanf("%d", &quant);

        if (quant <= 0) {
            printf("Quantidade inválida. A quantidade deve ser maior que zero.\n");
            continue;
        }

        total += calcularTotal(pedido, quant);
    }

    printf("Total da conta: R$ %.2f\n", total);
    printf("Obrigado por escolher o Restaurante!\n");

    return 0;
}

