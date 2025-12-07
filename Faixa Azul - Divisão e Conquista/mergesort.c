#include <stdio.h>

// --- MACROS PARA FACILITAR O ENTENDIMENTO ---

// Calcula o ponto médio evitando overflow
#define CALCULAR_MEIO(inicio, fim) (inicio + (fim - inicio) / 2)

// Verifica se o índice ainda está dentro dos limites do array
#define AINDA_EXISTEM_DADOS(indice_atual, tamanho_total) (indice_atual < tamanho_total)

// Copia um elemento de uma origem para um destino
#define COPIAR_DADO(destino, idx_dest, origem, idx_orig) (destino[idx_dest] = origem[idx_orig])

// Comparação lógica
#define EH_MENOR_OU_IGUAL(valor_a, valor_b) (valor_a <= valor_b)

// --------------------------------------------

// Função para mesclar (Merge) duas partes ordenadas
void mesclar(int array_original[], int inicio, int meio, int fim) {

    // 1. Definir o tamanho dos sub-arrays temporários
    int tam_sub_esq = meio - inicio + 1;
    int tam_sub_dir = fim - meio;

    // 2. Criar arrays temporários
    int temp_esquerda[tam_sub_esq];
    int temp_direita[tam_sub_dir];

    // Variáveis de iteração para cópia inicial
    int i, j;

    // 3. Copiar dados para os arrays temporários
    for (i = 0; i < tam_sub_esq; i++)
        COPIAR_DADO(temp_esquerda, i, array_original, inicio + i);

    for (j = 0; j < tam_sub_dir; j++)
        COPIAR_DADO(temp_direita, j, array_original, meio + 1 + j);

    // 4. Mesclar os arrays temporários de volta para o array original
    int idx_leitura_esq = 0;      // Onde estou lendo no sub-array esquerdo
    int idx_leitura_dir = 0;      // Onde estou lendo no sub-array direito
    int idx_escrita_final = inicio; // Onde vou escrever no array principal

    // Enquanto houver dados em AMBOS os sub-arrays
    while (AINDA_EXISTEM_DADOS(idx_leitura_esq, tam_sub_esq) &&
           AINDA_EXISTEM_DADOS(idx_leitura_dir, tam_sub_dir)) {

        // Compara os valores atuais de cada lado
        if (EH_MENOR_OU_IGUAL(temp_esquerda[idx_leitura_esq], temp_direita[idx_leitura_dir])) {
            // Se o da esquerda for menor, ele vai para o array final
            array_original[idx_escrita_final] = temp_esquerda[idx_leitura_esq];
            idx_leitura_esq++;
        } else {
            // Se o da direita for menor, ele vai para o array final
            array_original[idx_escrita_final] = temp_direita[idx_leitura_dir];
            idx_leitura_dir++;
        }
        idx_escrita_final++;
    }

    // 5. Copiar elementos que sobraram na Esquerda (se houver)
    while (AINDA_EXISTEM_DADOS(idx_leitura_esq, tam_sub_esq)) {
        array_original[idx_escrita_final] = temp_esquerda[idx_leitura_esq];
        idx_leitura_esq++;
        idx_escrita_final++;
    }

    // 6. Copiar elementos que sobraram na Direita (se houver)
    while (AINDA_EXISTEM_DADOS(idx_leitura_dir, tam_sub_dir)) {
        array_original[idx_escrita_final] = temp_direita[idx_leitura_dir];
        idx_leitura_dir++;
        idx_escrita_final++;
    }
}

// Função recursiva principal
void mergeSort(int array[], int indice_inicio, int indice_fim) {
    if (indice_inicio < indice_fim) {
        // Encontra o meio
        int indice_meio = CALCULAR_MEIO(indice_inicio, indice_fim);

        // Ordenar primeira metade e segunda metade (Recursão)
        mergeSort(array, indice_inicio, indice_meio);
        mergeSort(array, indice_meio + 1, indice_fim);

        // Juntar as partes ordenadas
        mesclar(array, indice_inicio, indice_meio, indice_fim);
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

    mergeSort(dados, 0, qtd_elementos - 1);

    printf("\nArray ordenado: \n");
    imprimirArray(dados, qtd_elementos);
    return 0;
}
