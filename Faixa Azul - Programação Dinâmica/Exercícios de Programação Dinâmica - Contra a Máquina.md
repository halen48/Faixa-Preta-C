## Lista de Exercícios de Programação Dinâmica (em C)

Abaixo está uma lista de 10 exercícios de Programação Dinâmica, no estilo e progressão de dificuldade solicitados, com foco em problemas clássicos de plataformas como o LeetCode, utilizando a linguagem C como base.

-----

## ⭐ **Nível Fácil** (5 Exercícios)

Estes exercícios introduzem os conceitos fundamentais de Programação Dinâmica (PD), focando em sequências 1D e memoização/tabulação.

### **Exercício 1: Sequência de Fibonacci**

Implemente o cálculo do $n$-ésimo número da Sequência de Fibonacci ($F_n$) utilizando Programação Dinâmica (abordagem de memoização ou tabulação).

$$F_n = F_{n-1} + F_{n-2}$$

```c
long long fibonacci_dp(int n);
```

**Entrada**: Inteiro $n$ (a posição na sequência).
**Saída**: O $n$-ésimo número de Fibonacci.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `n = 6` | `8` |

-----

### **Exercício 2: Subir Escadas (Climbing Stairs)**

Você está subindo uma escada com $n$ degraus. A cada vez, você pode subir 1 ou 2 degraus. Calcule o número de maneiras distintas que você pode subir até o topo.

```c
int subir_escadas(int n);
```

**Entrada**: Inteiro $n$ (o número de degraus).
**Saída**: O número total de maneiras distintas de subir a escada.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `n = 3` | `3` (As formas são: 1+1+1, 1+2, 2+1) |

-----

### **Exercício 3: Roubar Casas (House Robber)**

Dado um array de inteiros `arr` representando a quantidade de dinheiro em cada casa, encontre a quantidade máxima de dinheiro que você pode roubar sem roubar duas casas adjacentes. Se duas casas adjacentes forem roubadas na mesma noite, isso acionará um alarme.

```c
int roubar_casas(int arr[], int n);
```

**Entrada**: Array `arr` (valores das casas), tamanho $n$ do array.
**Saída**: A quantidade máxima de dinheiro que pode ser roubada.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `arr = {2, 7, 9, 3, 1}`, `n = 5` | `12` (Roubo das casas com valores 2, 9, 1) |

-----

### **Exercício 4: Mínimo Custo para Subir Escadas**

Você é dado um array de custo `custo`, onde `custo[i]` é o custo de pagar para subir o degrau $i$. Uma vez que você paga o custo, você pode subir um ou dois degraus. Você pode começar do índice 0 ou índice 1. Encontre o custo mínimo para chegar ao topo da escada (além do último índice).

```c
int custo_minimo_escadas(int custo[], int n);
```

**Entrada**: Array `custo` (custo dos degraus), tamanho $n$ do array.
**Saída**: O custo mínimo para chegar ao topo.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `custo = {10, 15, 20}`, `n = 3` | `15` (Começar no índice 1, custo 15, e subir 2 degraus) |

-----

### **Exercício 5: Máxima Soma de Subarray Contíguo (Kadane's 1D)**

Encontre a soma máxima de um subarray contíguo (não vazio) dentro de um array de inteiros.

```c
int soma_maxima_subarray(int arr[], int n);
```

**Entrada**: Array `arr` de inteiros, tamanho $n$ do array.
**Saída**: A soma máxima encontrada.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}`, `n = 9` | `6` (Correspondente ao subarray `{4, -1, 2, 1}`) |

-----

## ⭐⭐ **Nível Médio** (3 Exercícios)

Estes problemas requerem uma compreensão mais aprofundada da estrutura de PD, frequentemente envolvendo 2D DP ou problemas mais complexos de 1D e otimização.

### **Exercício 6: Problema da Mochila (0/1 Knapsack)**

Implemente a solução do clássico Problema da Mochila 0/1. Dado um conjunto de $n$ itens, cada um com um peso `pesos[i]` e um valor `valores[i]`, e uma capacidade máxima `capacidade` da mochila, determine o valor total máximo que pode ser obtido sem exceder a capacidade.

```c
int mochila_01(int valores[], int pesos[], int n, int capacidade);
```

**Entrada**: Arrays `valores` e `pesos`, número de itens $n$, capacidade da mochila.
**Saída**: O valor máximo total dos itens na mochila.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `valores = {60, 100, 120}`, `pesos = {10, 20, 30}`, `n = 3`, `capacidade = 50` | `220` (Itens de peso 20 e 30) |

-----

### **Exercício 7: Subsequência Comum Mais Longa (LCS)**

Dadas duas strings, `str1` e `str2`, encontre o comprimento da subsequência comum mais longa.

```c
int subsequencia_comum_mais_longa(char *str1, char *str2);
```

**Entrada**: Duas strings, `str1` e `str2`.
**Saída**: O comprimento da subsequência comum mais longa.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `str1 = "abcde"`, `str2 = "ace"` | `3` (Subsequência "ace") |

-----

### **Exercício 8: Quebra de Palavras (Word Break)**

Dado uma string `s` e um dicionário de strings `dict` (fornecido como um array de strings), determine se `s` pode ser segmentada em uma sequência de uma ou mais palavras do dicionário (as palavras do dicionário podem ser reutilizadas).

```c
int quebra_palavras(char *s, char *dict[], int dict_size);
```

**Entrada**: String `s`, array de strings `dict` (o dicionário), e o tamanho do dicionário `dict_size`.
**Saída**: `1` (Verdadeiro) se `s` puder ser segmentada, `0` (Falso) caso contrário.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `s = "leetcode"`, `dict = {"leet", "code"}` | `1` (Pode ser segmentada como "leet code") |

-----

## ⭐⭐⭐ **Nível Difícil** (2 Exercícios)

Estes problemas envolvem PD complexa, geralmente em grids ou requerendo a consideração de múltiplos estados e transições.

### **Exercício 9: Caminhos Únicos (Unique Paths)**

Um robô está no canto superior esquerdo de um grid de $m \times n$. O robô só pode se mover para baixo ou para a direita a qualquer momento. Quantos caminhos únicos existem para o robô chegar ao canto inferior direito?

```c
long long caminhos_unicos(int m, int n);
```

**Entrada**: Dimensões do grid $m$ (linhas) e $n$ (colunas).
**Saída**: O número total de caminhos únicos.

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `m = 3`, `n = 7` | `28` |

-----

### **Exercício 10: Distância de Edição (Edit Distance)**

Dadas duas strings, `palavra1` e `palavra2`, encontre o número mínimo de operações necessárias para transformar `palavra1` em `palavra2`. As operações permitidas são: inserção, exclusão e substituição de um caractere.

```c
int distancia_edicao(char *palavra1, char *palavra2);
```

**Entrada**: Duas strings, `palavra1` e `palavra2`.
**Saída**: O número mínimo de operações (distância de edição).

| Exemplo de Entrada | Exemplo de Saída |
| :---: | :---: |
| `palavra1 = "horse"`, `palavra2 = "ros"` | `3` |