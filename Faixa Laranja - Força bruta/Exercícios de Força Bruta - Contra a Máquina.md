# 10 Exercícios de Algoritmos de Força Bruta (Busca Exaustiva)

## Exercício 1: Busca de Número em Vetor
Encontre um número específico em um vetor verificando cada elemento.

```c
int buscar_numero(int vetor[], int tamanho, int alvo);
```

## Exercício 2: Quebra de Senha Numérica
Teste todas as combinações possíveis de uma senha de 4 dígitos.

```c
int quebrar_senha(int senha_correta);
```

## Exercício 3: Busca de Palavra em Texto
Encontre a primeira ocorrência de uma palavra dentro de um texto.

```c
int buscar_palavra(char texto[], char palavra[]);
```

## Exercício 4: Ordenação por Seleção
Ordene um vetor encontrando o menor elemento a cada iteração.

```c
void ordenar_selecao(int vetor[], int tamanho);
```

## Exercício 5: Contar Ocorrências de Palavra
Conte quantas vezes uma palavra aparece em um texto.

```c
int contar_ocorrencias(char texto[], char palavra[]);
```

## Exercício 6: Problema da Mochila
Escolha itens para maximizar o valor sem ultrapassar o peso máximo.

```c
int mochila_forca_bruta(int pesos[], int valores[], int num_itens, int capacidade);
```

## Exercício 7: Comparação de Busca de Texto
Compare dois métodos de busca de palavras em texto.

```c
int buscar_forca_bruta(char texto[], char palavra[]);
int buscar_kmp(char texto[], char palavra[]);
void comparar_buscas(char texto[], char palavra[]);
```

## Exercício 8: Problema das 8 Rainhas
Posicione 8 rainhas no tabuleiro sem que se ataquem.

```c
int resolver_8_rainhas();
int posicao_valida(int tabuleiro[], int linha, int coluna);
void imprimir_tabuleiro(int tabuleiro[]);
```

## Exercício 9: Problema do Caixeiro Viajante
Encontre o menor caminho que visita todas as cidades.

```c
int caixeiro_viajante(int distancias[][4], int num_cidades);
int calcular_distancia(int caminho[], int distancias[][4], int num_cidades);
void gerar_permutacoes(int cidades[], int inicio, int fim, int distancias[][4], int *melhor_distancia);
```

## Exercício 10: Subvetor de Soma Máxima
Encontre a sequência contígua com maior soma em um vetor.

```c
int subvetor_soma_maxima(int vetor[], int tamanho);
int subvetor_soma_maxima_n2(int vetor[], int tamanho);
```

**Observações:**
- Todos os exercícios devem ser implementados usando força bruta
- Não é permitido usar programação dinâmica
- Os algoritmos devem testar todas as possibilidades relevantes
- Para exercícios com strings, considere que as strings terminam com '\0'
- Para exercícios com vetores, o tamanho é sempre fornecido como parâmetro