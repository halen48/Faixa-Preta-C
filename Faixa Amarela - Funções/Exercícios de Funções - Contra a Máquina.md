# Exercícios de Funções

## 1. Função de Cura (Modularização)

Objetivo: Praticar a criação e chamada de funções para modularização.

Cenário: Em um jogo de RPG, o dano final de um ataque é calculado subtraindo a defesa do alvo do dano base do atacante.

Tarefa:
1. Crie uma função em C chamada `calcular_dano_final` que receba dois parâmetros inteiros: `dano_base` e `defesa`.
2. A função deve retornar o dano final (Dano Base - Defesa). Se o resultado for negativo, o dano final deve ser 0.
3. Na função `main()`, simule 3 ataques diferentes, chamando a função para cada um e imprimindo o resultado.

## 2. A Poção Mágica (Passagem por Valor)

Objetivo: Demonstrar o conceito de Passagem por Valor.

Cenário: Um herói bebe uma poção que aumenta sua vida, mas o efeito só é sentido dentro da função que representa o ato de beber a poção.

Tarefa:
1. Crie uma função `beber_pocao(int vida_atual)` que receba a vida atual do herói.
2. Dentro da função, aumente a `vida_atual` em 10 e imprima a nova vida dentro da função.
3. A função deve ser do tipo `void` (não retorna valor).
4. Na função `main()`, declare uma variável `vida_heroi` com um valor inicial. Imprima a vida antes e depois de chamar a função `beber_pocao()`.
5. Análise: Explique no código (comentário) por que a variável `vida_heroi` na `main()` não foi alterada.

## 3. O Teletransporte (Ponteiros e Passagem por Referência)

Objetivo: Praticar o uso de ponteiros para simular a Passagem por Referência.

Cenário: Um feitiço de teletransporte precisa trocar as coordenadas X e Y de um personagem na memória.

Tarefa:
1. Crie uma função `teletransportar(int *x, int *y)` que receba os endereços de duas variáveis inteiras.
2. A função deve trocar os valores contidos nos endereços usando um ponteiro auxiliar.
3. Na função `main()`, defina `coordenada_x = 10` e `coordenada_y = 20`.
4. Chame a função `teletransportar()` passando os endereços (`&`) das variáveis.
5. Imprima os valores de `coordenada_x` e `coordenada_y` após a chamada para verificar a troca.

## 4. O Inventário (Vetores como Argumentos)

Objetivo: Entender como vetores são passados para funções.

Cenário: Um jogo precisa exibir o inventário do jogador, que é um vetor de IDs de itens.

Tarefa:
1. Crie uma função `imprimir_inventario(int itens[], int tamanho)` que receba um vetor de inteiros e seu tamanho.
2. A função deve percorrer o vetor e imprimir cada ID de item.
3. Na função `main()`, declare e inicialize um vetor de 5 posições. Chame a função `imprimir_inventario()`.
4. Análise: Explique no código (comentário) por que a passagem de vetores é, por natureza, uma passagem por referência.

## 5. O Cofre Secreto (Escopo de Variáveis)

Objetivo: Ilustrar o conceito de Escopo de Variáveis (local).

Cenário: Uma senha secreta só é conhecida dentro da função que abre o cofre.

Tarefa:
1. Crie uma função `abrir_cofre()` que declare uma variável local `int senha = 1337;`.
2. Tente, na função `main()`, imprimir o valor da variável `senha` declarada em `abrir_cofre()`.
3. O compilador deve gerar um erro. Use comentários para explicar o erro e o conceito de escopo local (`auto`).

## 6. O Contador Global (Classes de Armazenamento `extern`)

Objetivo: Praticar o uso de variáveis globais e a classe de armazenamento `extern`.

Cenário: Um contador global registra o número total de inimigos derrotados no jogo.

Tarefa:
1. Declare uma variável global `int contador_de_mortes = 0;` no topo do arquivo (fora de qualquer função).
2. Crie uma função `inimigo_derrotado()` que incremente essa variável global.
3. Na função `main()`, chame a função `inimigo_derrotado()` 5 vezes.
4. Imprima o valor final do `contador_de_mortes` na `main()`.
5. Análise: Explique o uso implícito da classe `extern` para variáveis globais.

## 7. O Gerador de ID (Classes de Armazenamento `static`)

Objetivo: Demonstrar a persistência de valor da classe `static`.

Cenário: Um sistema precisa gerar IDs únicos para novos itens, e o contador deve ser mantido entre as chamadas da função.

Tarefa:
1. Crie uma função `gerar_id_unico()` que declare uma variável `static int proximo_id = 1000;`.
2. A função deve incrementar e retornar o `proximo_id`.
3. Chame a função `gerar_id_unico()` 3 vezes na `main` e imprima os IDs gerados.
4. Análise: Explique no código (comentário) por que a variável `proximo_id` não é reinicializada a cada chamada, ao contrário de uma variável `auto`.

## 8. A Constante Mágica (Diretiva `#define`)

Objetivo: Praticar a definição de constantes simbólicas com o pré-processador.

Cenário: Definir a quantidade máxima de mana que um mago pode ter.

Tarefa:
1. Use a diretiva `#define` para criar uma constante simbólica chamada `MANA_MAXIMA` com o valor `500`.
2. Use essa constante na função `main()` para inicializar uma variável `mana_atual`.
3. Imprima o valor de `mana_atual`.
4. Análise: Explique no código (comentário) que o pré-processador simplesmente substitui o texto `MANA_MAXIMA` por `500` antes da compilação.

## 9. A Macro de Dano Crítico (Macros com Argumentos)

Objetivo: Praticar a criação de macros com argumentos e a importância dos parênteses.

Cenário: Calcular o dano de um ataque crítico, que é o dobro do dano normal.

Tarefa:
1. Crie uma macro `#define DANO_CRITICO(dano) ((dano) * 2)` que receba um argumento `dano`.
2. Use a macro na `main` com um valor de dano (ex: `10 + 5`) e imprima o resultado.
3. Desafio: Crie uma segunda macro errada `#define DANO_CRITICO_ERRADO(dano) dano * 2` e chame-a com o mesmo valor (`10 + 5`). Imprima o resultado.
4. Análise: Explique no código (comentário) por que o uso de parênteses na macro correta é crucial para evitar erros de precedência na substituição de texto.

## 10. A Matriz de Batalha (Matrizes como Argumentos)

Objetivo: Entender a passagem de matrizes para funções.

Cenário: Um jogo de estratégia precisa exibir o estado de um tabuleiro 3x3.

Tarefa:
1. Crie uma matriz 3x3 de inteiros na função `main()` representando um tabuleiro (ex: 0 para vazio, 1 para jogador 1, 2 para jogador 2).
2. Crie uma função `imprimir_tabuleiro(int tabuleiro[][3])` que receba a matriz e imprima seus elementos de forma formatada (como um tabuleiro).
3. Análise: Explique no código (comentário) por que a dimensão da coluna (`3`) é obrigatória no parâmetro da função, mesmo que a dimensão da linha possa ser omitida.

---
*Fim da Missão. Retorne ao Mestre para a próxima fase.*
