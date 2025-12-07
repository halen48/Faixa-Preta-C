#include <stdio.h>

// --- MACROS PARA LEGIBILIDADE E LÓGICA ---

// Verifica se o índice atual ainda é válido (não cruzou)
#define INDICES_VALIDOS(inicio, fim) (inicio < fim)

// Verifica se o valor atual deve ficar à esquerda do pivô
#define EH_MENOR_OU_IGUAL_AO_PIVO(valor, pivo) (valor <= pivo)

// Macro para trocar dois valores no array (Swap)
#define TROCAR_ELEMENTOS(array, indice_a, indice_b) { \
    int temp = array[indice_a]; \
    array[indice_a] = array[indice_b]; \
    array[indice_b] = temp; \
}

// -----------------------------------------

// Função que organiza o array em relação a um Pivô
// Retorna: A posição final e correta do Pivô
int particionar(int array[], int indice_inicio, int indice_fim) {

    // 1. Escolha do Pivô (neste caso, o último elemento)
    int valor_pivo_referencia = array[indice_fim];

    // 2. Configurar a "Fronteira": o índice do último elemento identificado como MENOR que o pivô.
    // Começa antes do início porque ainda não achamos ninguém menor.
    int fronteira_dos_menores = (indice_inicio - 1);

    // 3. O "Explorador" percorre o array comparando valores com o Pivô
    for (int explorador = indice_inicio; explorador < indice_fim; explorador++) {

        // Se o explorador achar alguém menor ou igual ao pivô...
        if (EH_MENOR_OU_IGUAL_AO_PIVO(array[explorador], valor_pivo_referencia)) {

            // ...avançamos a fronteira dos menores
            fronteira_dos_menores++;

            // ...e jogamos esse valor pequeno para dentro da fronteira
            TROCAR_ELEMENTOS(array, fronteira_dos_menores, explorador);
        }
    }

    // 4. Colocar o Pivô no seu lugar definitivo
    // (Exatamente uma posição após a fronteira dos números menores)
    int posicao_final_pivo = fronteira_dos_menores + 1;
    TROCAR_ELEMENTOS(array, posicao_final_pivo, indice_fim);

    return posicao_final_pivo;
}

// Função principal recursiva
void quickSort(int array[], int indice_inicio, int indice_fim) {

    if (INDICES_VALIDOS(indice_inicio, indice_fim)) {

        // Passo 1: Organizar o array e obter a posição fixa do pivô
        int indice_pivo_fixo = particionar(array, indice_inicio, indice_fim);

        // Passo 2: Ordenar recursivamente a metade ESQUERDA (antes do pivô)
        quickSort(array, indice_inicio, indice_pivo_fixo - 1);

        // Passo 3: Ordenar recursivamente a metade DIREITA (depois do pivô)
        quickSort(array, indice_pivo_fixo + 1, indice_fim);
    }
}

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int dados[] = {420, 69, 666, 13, 17, 51};
    int qtd_elementos = sizeof(dados) / sizeof(dados[0]);

    printf("Array original: \n");
    imprimirArray(dados, qtd_elementos);

    quickSort(dados, 0, qtd_elementos - 1);

    printf("\nArray ordenado: \n");
    imprimirArray(dados, qtd_elementos);
    return 0;
}
