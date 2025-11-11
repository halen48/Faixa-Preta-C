# Exercícios de Recursividade

## 1. Fatorial
Escopo da Função: `int fatorial(int n)`
Descrição: Calcule o fatorial de um número inteiro não negativo `n` de forma recursiva. Lembre-se que `0! = 1` e `n! = n * (n-1)!` para `n > 0`.

## 2. Sequência de Fibonacci
Escopo da Função: `int fibonacci(int n)`
Descrição: Retorne o n-ésimo termo da sequência de Fibonacci, onde `fibonacci(0) = 0`, `fibonacci(1) = 1` e `fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)` para `n > 1`.

## 3. Soma dos Dígitos
Escopo da Função: `int soma_digitos(int n)`
Descrição: Calcule a soma de todos os dígitos de um número inteiro não negativo `n`. Por exemplo, a soma dos dígitos de `123` é `6`.

## 4. Comprimento de uma String
Escopo da Função: `int comprimento_string(char *str)`
Descrição: Calcule o comprimento de uma string (sem usar a função `strlen`) de forma recursiva. A string termina com o caractere `'\0'`.

## 5. Imprimir Números Naturais
Escopo da Função: `void imprimir_naturais(int n)`
Descrição: Imprima os primeiros `n` números naturais em ordem crescente usando recursão.

## Nível Médio

## 6. Verificar Palíndromo
Escopo da Função: `int eh_palindromo(char *str, int inicio, int fim)`
Descrição: Verifique se uma string é um palíndromo (lê-se igual de trás para frente) de forma recursiva. A função deve retornar `1` (verdadeiro) ou `0` (falso).

## 7. Máximo Elemento de um Vetor
Escopo da Função: `int maximo_vetor(int v[], int inicio, int fim)`
Descrição: Encontre e retorne o valor do maior elemento em um vetor de inteiros usando a estratégia de divisão e conquista (recursão). Esta função requer uma função embalagem (wrapper) ou parâmetros adicionais.

## 8. Torre de Hanoi
Escopo da Função: `void hanoi(int num_discos, char orig, char dest, char aux)`
Descrição: Imprima os passos necessários para resolver o problema da Torre de Hanoi para `num_discos` discos. Este é um exemplo clássico de recursão.

## 9. Função de Ackermann
Escopo da Função: `int ackermann(int m, int n)`
Descrição: Implemente a função de Ackermann, uma função recursiva matemática conhecida por seu crescimento extremamente rápido. É definida para inteiros não negativos `m` e `n`:
- Se `m == 0`, retorne `n + 1`
- Se `m > 0` e `n == 0`, retorne `ackermann(m-1, 1)`
- Se `m > 0` e `n > 0`, retorne `ackermann(m-1, ackermann(m, n-1))`.

## 10. Listar Arquivos em um Diretório (Recursivo)
Escopo da Função: `void listar_arquivos_recursivo(char *caminho_base)`
Descrição: Liste todos os arquivos e subdiretórios a partir de um diretório base (`caminho_base`) de forma recursiva, criando uma estrutura de árvore. Use as funções `opendir()`, `readdir()` e `closedir()`.

---
*Fim da Missão. Retorne ao Mestre para a próxima fase.*