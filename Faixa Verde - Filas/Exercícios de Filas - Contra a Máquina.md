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

### 6. Fila para Jogo da Batata Quente
Implemente o jogo da batata quente usando fila circular.

```c
// batata_quente.h
#ifndef _BATATA_QUENTE_H
#define _BATATA_QUENTE_H
#include <stdbool.h>

#define MAX_JOGADORES 8
#define TAM_NOME_JOGADOR 20

typedef struct {
    int id;
    char nome[TAM_NOME_JOGADOR];
} Jogador;

typedef struct {
    Jogador jogadores[MAX_JOGADORES];
    int posicao_batata;
    int quantidade_jogadores;
    int jogador_atual;
} JogoBatataQuente;

void batata_inicializar(JogoBatataQuente *j);
bool batata_adicionar_jogador(JogoBatataQuente *j, const char *nome);
bool batata_iniciar_jogo(JogoBatataQuente *j, int posicao_inicial);
Jogador batata_passar_batata(JogoBatataQuente *j);
Jogador batata_eliminar_jogador(JogoBatataQuente *j);
int batata_jogadores_restantes(JogoBatataQuente j);
void batata_imprimir_estado(JogoBatataQuente j);
bool batata_jogo_terminou(JogoBatataQuente j);
#endif
```

### 7. Operações Conjunto
Implemente um sistema de atendimento com filas separadas por prioridade.


```c
// sistema_atendimento.h
#ifndef _SISTEMA_ATENDIMENTO_H
#define _SISTEMA_ATENDIMENTO_H
#include <stdbool.h>

#define MAX_CLIENTES 20
#define MAX_FILAS 3
#define TAM_NOME 30

typedef enum {
    NORMAL, PRIORITARIO, URGENTE
} TipoCliente;

typedef struct {
    int id;
    char nome[TAM_NOME];
    TipoCliente tipo;
    int tempo_espera;
} Cliente;

typedef struct {
    Cliente clientes[MAX_CLIENTES];
    int inicio;
    int fim;
    int tamanho;
} FilaClientes;

typedef struct {
    FilaClientes filas[MAX_FILAS]; // [0]=Normal, [1]=Prioritário, [2]=Urgente
    int total_atendidos;
} SistemaAtendimento;

void sistema_inicializar(SistemaAtendimento *s);
bool sistema_chegada_cliente(SistemaAtendimento *s, const char *nome, TipoCliente tipo);
bool sistema_atender_proximo(SistemaAtendimento *s, Cliente *atendido);
int sistema_quantidade_por_tipo(SistemaAtendimento s, TipoCliente tipo);
void sistema_imprimir_filas(SistemaAtendimento s);
bool sistema_esta_vazio(SistemaAtendimento s);
#endif
```

### 8. Lista com Operações Estatísticas
Implemente uma lista com operações estatísticas que calculem medidas de tendência central e dispersão sobre os elementos armazenados. Desconsidere a utilização de estruturas que possuam complexidade ótima para esse tipo de problema. (Isso é um tipo de fila de prioridade)

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
Implemente um sistema de gerenciamento de tarefas com prioridades onde tarefas podem ser adicionadas, removidas, reordenadas por prioridade e filtradas por status. Desconsidere a utilização de estruturas que possuam complexidade ótima para esse tipo de problema.

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
Implemente um dicionário que armazene palavras e permita buscas eficientes por prefixo, além de operações de autocompletar e sugestões. Desconsidere a utilização de estruturas que possuam complexidade ótima para esse tipo de problema.

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