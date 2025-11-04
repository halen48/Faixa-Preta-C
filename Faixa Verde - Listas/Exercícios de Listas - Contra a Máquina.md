## 💻 Exercícios de Programação: Listas Encadeadas

Estes exercícios visam o desenvolvimento e a prática com estruturas de dados de **Listas Encadeadas**. Eles estão divididos por nível de dificuldade para guiar o seu aprendizado.

### 🌟 Exercícios Básicos

#### 1. Verificação de Capacidade Máxima da Lista

* **Contexto:** Gerenciamento de memória em sistemas embarcados.
* **Objetivo:** Implementar a verificação de capacidade máxima para evitar *overflow*.
* **Enunciado:** Implemente a função `bool lst_cheia(lista)` que verifica se uma lista encadeada atingiu sua capacidade máxima, definida pela constante `MAX_ELEMENTOS`.
    * **Retorno:** `1` (Verdadeiro) se a lista estiver cheia; `0` (Falso) caso contrário.

#### 2. Verificação de Lista Vazia

* **Contexto:** Fila de impressão ou qualquer sistema que precise evitar operações em conjuntos vazios.
* **Objetivo:** Implementar uma checagem fundamental para integridade da lista.
* **Enunciado:** Implemente a função `bool lst_vazia(lista)` que verifica se a lista encadeada não contém nenhum elemento.
    * **Retorno:** `1` (Verdadeiro) se a lista estiver vazia; `0` (Falso) caso contrário.

#### 3. Concatenação de Listas

* **Contexto:** Gerenciamento de *playlists* ou união de conjuntos de dados.
* **Objetivo:** Implementar uma operação que une duas listas, modificando a primeira.
* **Enunciado:** Implemente a função `lista lst_concatenar(lista lista1, lista lista2)` que anexa a `lista2` ao final da `lista1`. A função deve **modificar** a `lista1` e **manter a integridade** (não desalocar) da `lista2`.
    * **Tratamento:** Considere o caso onde a `lista1` ou a `lista2` sejam vazias.

#### 4. Localização de Elemento

* **Contexto:** Catálogo de produtos (busca por ID) ou qualquer sistema de recuperação de dados.
* **Objetivo:** Implementar uma busca sequencial por um elemento específico.
* **Enunciado:** Implemente a função `int lst_localizar(lista, lst_info)` que busca um elemento (`lst_info`) na lista encadeada.
    * **Retorno:** Um **ponteiro** para o nó que contém o elemento, ou `NULL` se o elemento não for encontrado.

#### 5. Contagem de Ocorrências

* **Contexto:** Controle de estoque (contagem de unidades de um produto) ou análise de frequência de dados.
* **Objetivo:** Implementar a contagem de todas as instâncias de um elemento.
* **Enunciado:** Implemente a função `int lst_contar(lista, lst_info)` que percorre toda a lista e retorna o **número de ocorrências** do elemento especificado (`lst_info`).

---

### 🧱 Exercícios Médios

#### 6. Comparação Estrutural de Listas

* **Contexto:** Versionamento de documentos ou comparação de *states* em sistemas.
* **Objetivo:** Implementar uma função que checa se duas listas são idênticas em conteúdo e ordem.
* **Enunciado:** Implemente a função `bool lst_comparar(lista lista1, lista lista2)` que compara duas listas encadeadas.
    * **Retorno:** `1` se as listas forem idênticas; `0` caso contrário.
    * **Assunção:** Considere que uma função auxiliar de comparação de elementos (ex: `comparar_info(info1, info2)`) será fornecida ou implementada.

#### 7. Rotação de Elementos

* **Contexto:** Buffer circular ou otimização de processamento de dados sequenciais.
* **Objetivo:** Implementar a rotação dos nós da lista em $N$ posições.
* **Enunciado:** Implemente a função `void lst_rotacionar(lista lista, int posicoes)` que rotaciona os elementos da lista em `posicoes` para a direita.
    * **Direção:** Se `posicoes` for negativo, a rotação deve ser para a esquerda.
    * **Restrição:** A função deve modificar a lista original, manipulando os ponteiros dos nós (não é permitido copiar dados).

#### 8. Remoção de Duplicatas Consecutivas

* **Contexto:** Processamento de logs (remoção de eventos repetidos) ou limpeza de dados.
* **Objetivo:** Implementar a eliminação de elementos repetidos que aparecem em sequência.
* **Enunciado:** Implemente a função `void lst_remover_duplicatas(lista)` que remove apenas os elementos duplicados **consecutivos**. A primeira ocorrência de cada elemento deve ser preservada.
    * **Exemplo:** $[1, 2, 2, 3, 3, 3, 4] \rightarrow [1, 2, 3, 4]$.

---

### 🧠 Exercícios Difíceis

#### 9. Divisão de Lista ao Meio

* **Contexto:** Algoritmos de ordenação baseados em divisão, como o *Merge Sort*.
* **Objetivo:** Implementar a divisão da lista em duas metades com eficiência e manipulação de ponteiros.
* **Enunciado:** Implemente a função `void lst_dividir_metade(lista lista_original, lista* metade1, lista* metade2)` que divide a `lista_original` em duas sublistas.
    * **Regra:** Se o número de elementos for ímpar, a primeira metade (`metade1`) deve conter um elemento a mais.

#### 10. Ordenação Ascendente com Merge Sort

* **Contexto:** Sistemas de recomendação ou qualquer aplicação que exija dados ordenados.
* **Objetivo:** Implementar um algoritmo de ordenação avançado diretamente na estrutura de lista encadeada.
* **Enunciado:** Implemente a função `void lst_ordenar_ascendente(lista* lista_ptr)` que ordena a lista encadeada em ordem crescente utilizando o algoritmo **Merge Sort**.