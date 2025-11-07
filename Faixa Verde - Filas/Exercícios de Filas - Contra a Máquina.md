# Exercícios de TAD - Filas

### 1. Inverter Fila
Implemente uma função que inverta a ordem dos elementos em uma fila. A função deve usar apenas as operações básicas da fila (enqueue, dequeue) e não pode usar estruturas de dados adicionais além de uma fila auxiliar temporária.

```c
void inverter_fila(fila *f);
```

### 2. Mover para o Final
Desenvolva uma função que mova um elemento específico para o final da fila, mantendo a ordem relativa dos demais elementos inalterada.

```c
void mover_para_final(fila *f, queue_info elemento);
```

### 3. Fila Intercalada
Crie uma função que receba duas filas e retorne uma nova fila com os elementos intercalados das duas filas originais.

```c
void intercalar_filas(fila *f1, fila *f2, fila *resultado);
```

### 4. Remover Duplicatas
Implemente uma função que remova elementos duplicados consecutivos da fila, mantendo apenas a primeira ocorrência de cada sequência de elementos iguais.

```c
void remover_duplicatas_consecutivas(fila *f);
```

### 5. Rotacionar Fila
Desenvolva uma função que rotacione os elementos da fila em K posições. Uma rotação positiva move os elementos para a direita, e uma negativa para a esquerda.

```c
void rotacionar_fila(fila *f, int k);
```

### 6. Lista Ordenada
Implemente funções para manter uma lista ordenada automaticamente. A inserção deve sempre colocar o elemento na posição correta para manter a lista ordenada crescentemente.

```c
// lista.h
#ifndef _LISTA_H
#define _LISTA_H
#include <stdbool.h>

#define MAX_LISTA 20

typedef int lista_info;
typedef struct {
    lista_info elementos[MAX_LISTA];
    int tamanho;
} Lista;

void lista_inicializar(Lista *l);
bool lista_inserir_ordenado(Lista *l, lista_info valor);
bool lista_esta_ordenada(Lista l);
int lista_busca_binaria(Lista l, lista_info valor);
void lista_fundir_ordenadas(Lista l1, Lista l2, Lista *resultado);
#endif
```

### 7. Operações Conjunto
Implemente operações de conjunto (união, interseção, diferença) sobre listas, tratando cada lista como um conjunto matemático sem elementos repetidos.

```c
// conjunto.h
#ifndef _CONJUNTO_H
#define _CONJUNTO_H
#include <stdbool.h>

#define MAX_CONJUNTO 15

typedef int conjunto_info;
typedef struct {
    conjunto_info elementos[MAX_CONJUNTO];
    int cardinalidade;
} Conjunto;

void conjunto_inicializar(Conjunto *c);
bool conjunto_pertence(Conjunto c, conjunto_info valor);
bool conjunto_inserir(Conjunto *c, conjunto_info valor);
void conjunto_uniao(Conjunto c1, Conjunto c2, Conjunto *resultado);
void conjunto_interseccao(Conjunto c1, Conjunto c2, Conjunto *resultado);
void conjunto_diferenca(Conjunto c1, Conjunto c2, Conjunto *resultado);
bool conjunto_esta_contido(Conjunto c1, Conjunto c2);
#endif
```

### 8. Lista com Operações Estatísticas
Implemente uma lista com operações estatísticas que calculem medidas de tendência central e dispersão sobre os elementos armazenados.

```c
// lista_estatistica.h
#ifndef _LISTA_ESTATISTICA_H
#define _LISTA_ESTATISTICA_H
#include <stdbool.h>

#define MAX_LISTA_ESTAT 15

typedef float lista_estat_info;
typedef struct {
    lista_estat_info elementos[MAX_LISTA_ESTAT];
    int tamanho;
} ListaEstatistica;

void lista_estat_inicializar(ListaEstatistica *le);
bool lista_estat_inserir(ListaEstatistica *le, lista_estat_info valor);
bool lista_estat_remover(ListaEstatistica *le, int posicao);
lista_estat_info lista_estat_media(ListaEstatistica le);
lista_estat_info lista_estat_mediana(ListaEstatistica le);
lista_estat_info lista_estat_moda(ListaEstatistica le);
lista_estat_info lista_estat_desvio_padrao(ListaEstatistica le);
lista_estat_info lista_estat_maior_valor(ListaEstatistica le);
lista_estat_info lista_estat_menor_valor(ListaEstatistica le);
void lista_estat_ordenar_crescente(ListaEstatistica *le);
#endif
```

### 9. Sistema de Gerenciamento de Tarefas
Implemente um sistema de gerenciamento de tarefas com prioridades onde tarefas podem ser adicionadas, removidas, reordenadas por prioridade e filtradas por status.

```c
// tarefas.h
#ifndef _TAREFAS_H
#define _TAREFAS_H
#include <stdbool.h>

#define MAX_TAREFAS 10
#define TAM_DESCRICAO 50

typedef enum {
    BAIXA, MEDIA, ALTA, URGENTE
} Prioridade;

typedef enum {
    PENDENTE, EM_ANDAMENTO, CONCLUIDA, CANCELADA
} Status;

typedef struct {
    char descricao[TAM_DESCRICAO];
    Prioridade prioridade;
    Status status;
    int id;
} Tarefa;

typedef struct {
    Tarefa tarefas[MAX_TAREFAS];
    int quantidade;
    int proximo_id;
} GerenciadorTarefas;

void tarefas_inicializar(GerenciadorTarefas *gt);
bool tarefas_adicionar(GerenciadorTarefas *gt, const char *descricao, Prioridade p);
bool tarefas_remover(GerenciadorTarefas *gt, int id);
bool tarefas_atualizar_status(GerenciadorTarefas *gt, int id, Status novo_status);
void tarefas_ordenar_por_prioridade(GerenciadorTarefas *gt);
void tarefas_filtrar_por_status(GerenciadorTarefas gt, Status status, GerenciadorTarefas *resultado);
int tarefas_contar_por_prioridade(GerenciadorTarefas gt, Prioridade p);
bool tarefas_marcar_concluida(GerenciadorTarefas *gt, int id);
void tarefas_listar_pendentes(GerenciadorTarefas gt);
#endif
```

### 10. Dicionário com Busca por Prefixo
Implemente um dicionário que armazene palavras e permita buscas eficientes por prefixo, além de operações de autocompletar e sugestões.

```c
// dicionario.h
#ifndef _DICIONARIO_H
#define _DICIONARIO_H
#include <stdbool.h>

#define MAX_PALAVRAS 20
#define TAM_PALAVRA 30
#define MAX_SUGESTOES 5

typedef struct {
    char palavra[TAM_PALAVRA];
    char definicao[100];
} EntradaDicionario;

typedef struct {
    EntradaDicionario entradas[MAX_PALAVRAS];
    int quantidade;
} Dicionario;

typedef struct {
    char sugestoes[MAX_SUGESTOES][TAM_PALAVRA];
    int quantidade;
} Sugestoes;

void dicionario_inicializar(Dicionario *d);
bool dicionario_adicionar_palavra(Dicionario *d, const char *palavra, const char *definicao);
bool dicionario_remover_palavra(Dicionario *d, const char *palavra);
bool dicionario_buscar_palavra(Dicionario d, const char *palavra, char *definicao);
void dicionario_buscar_por_prefixo(Dicionario d, const char *prefixo, Sugestoes *s);
void dicionario_autocompletar(Dicionario d, const char *prefixo_incompleto, char *sugestao);
void dicionario_ordenar_alfabeticamente(Dicionario *d);
bool dicionario_esta_cheio(Dicionario d);
bool dicionario_esta_vazio(Dicionario d);
void dicionario_listar_todas(Dicionario d);
#endif
```