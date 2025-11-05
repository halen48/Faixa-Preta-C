# Exercícios de TAD - Pilhas

## Exercícios Fáceis

### 1. Implemente `void pilha_inverter(pilha)`
Implemente a função `pilha_inverter` que recebe uma pilha e inverte a ordem de seus elementos usando apenas uma pilha auxiliar. A função deve modificar a pilha original e retornar a pilha invertida.

### 2. Implemente `void pilha_copiar(pilha)`
Implemente a função `pilha_copiar` que cria e retorna uma cópia exata da pilha fornecida como parâmetro. A pilha original deve permanecer inalterada e a cópia deve ser independente.

### 3. Implemente `bool pilha_iguais(pilha1, pilha2)`
Implemente a função `pilha_iguais` que compara duas pilhas e retorna 1 se forem idênticas (mesmos elementos na mesma ordem) e 0 caso contrário. Ambas as pilhas devem permanecer inalteradas após a comparação.

### 4. Implemente `void pilha_fundir(pilha1, pilha2)`
Implemente a função `pilha_fundir` que recebe duas pilhas e retorna uma nova pilha contendo todos os elementos de ambas, mantendo a ordem relativa dos elementos. As pilhas originais devem permanecer inalteradas.

### 5. Implemente `int pilha_contar_ocorrencias(pilha, stack_info)`
Implemente a função `pilha_contar_ocorrencias` que conta quantas vezes um determinado elemento aparece na pilha. A pilha original deve permanecer inalterada após a contagem.

## Exercícios Moderados

### 6. Implemente `pilha pilha_ordenar(pilha)`
Implemente a função `pilha_ordenar` que ordena os elementos de uma pilha em ordem crescente (topo contém o menor elemento) usando apenas uma pilha auxiliar. A função deve modificar a pilha original.

### 7. Implemente `void pilha_remover_ocorrencias(pilha*, stack_info)`
Implemente a função `pilha_remover_ocorrencias` que remove todas as ocorrências de um determinado elemento da pilha, mantendo a ordem relativa dos demais elementos. A função deve usar apenas estruturas de pilha permitidas.

### 8. Implemente `void pilha_rotacionar(pilha, int)`
Implemente a função `pilha_rotacionar` que rotaciona os elementos da pilha em `n` posições. Se `n` for positivo, rotaciona para a direita; se negativo, para a esquerda. A rotação deve ser feita usando apenas estruturas de pilha auxiliares.

## Exercícios Difíceis

### 9. Implemente `pilha_avaliar_expressao_infixa(char * expressao)`
Implemente a função `pilha_avaliar_expressao_infixa<faça os parametros>` que avalia uma expressão matemática na notação infixa contendo números, operadores ```(+, -, *, /)``` e parênteses. A função deve usar o algoritmo shunting yard e considerar a precedência dos operadores. A expressão será fornecida como string e pode conter espaços.

**Exemplo:**
- Entrada: "3 + 4 * (2 - 1)"
- Saída: 7

### 10. Implemente `pilha_gerar_sequencias_validas(n)`
Implemente a função `pilha_gerar_sequencias_validas` que gera todas as combinações válidas de `n` pares de parênteses. Use uma abordagem baseada em pilha para garantir que apenas sequências balanceadas sejam geradas. A função deve retornar uma lista com todas as sequências válidas.

**Exemplo:**
- Entrada: 3
- Saída: ["((()))", "(()())", "(())()", "()(())", "()()()"]