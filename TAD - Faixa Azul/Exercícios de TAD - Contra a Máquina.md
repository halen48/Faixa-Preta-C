# Exercícios de TAD - Contra a Máquina

Tipos Abstratos de Dados em Linguagem C

---

## Exercício 1: TAD Retângulo - Sistema de Cálculo de Materiais para Construção

Uma empresa de construção precisa calcular a quantidade de materiais para pisos e rodapés. Desenvolva um TAD Retângulo que calcule área (para piso) e perímetro (para rodapé).

```c
// retangulo.h
#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct {
    float base;
    float altura;
} Retangulo;

Retangulo criarRetangulo(float base, float altura);
float calcularAreaPiso(Retangulo r);
float calcularMetroRodape(Retangulo r);
int verificarQuadrado(Retangulo r);

#endif
```

---

## Exercício 2: TAD Horário - Sistema de Controle de Jornada de Trabalho

Um sistema de ponto eletrônico precisa manipular horários de entrada, saída e calcular horas trabalhadas.

```c
// horario.h
#ifndef HORARIO_H
#define HORARIO_H

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Horario;

Horario criarHorario(int horas, int minutos, int segundos);
int validarHorario(Horario h);
void exibirHorarioFormal(Horario h);
int calcularDiferencaMinutos(Horario h1, Horario h2);
Horario adicionarMinutos(Horario h, int minutos);

#endif
```

---

## Exercício 3: TAD Data - Sistema de Gestão de Vencimentos

Um sistema financeiro precisa verificar datas de vencimento, calcular juros e validar datas.

```c
// data.h
#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

Data criarData(int dia, int mes, int ano);
int validarData(Data d);
int calcularDiasAteVencimento(Data atual, Data vencimento);
int ehBissexto(int ano);
Data adicionarDias(Data d, int dias);

#endif
```

---

## Exercício 4: TAD Fração - Calculadora Científica para Educação

Desenvolva um TAD para uma calculadora educacional que trabalhe com frações e mostre resultados simplificados.

```c
// fracao.h
#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominador);
Fracao simplificarFracao(Fracao f);
Fracao somarFracoes(Fracao f1, Fracao f2);
Fracao multiplicarFracoes(Fracao f1, Fracao f2);
// ... (continuação do código)

#endif
```

---

## Exercício 5: TAD Número Complexo - Calculadora para Engenharia Elétrica

Desenvolva um TAD para cálculos com números complexos usados em circuitos elétricos.

```c
// complexo.h
#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    float real;
    float imaginario;
} Complexo;

Complexo criarComplexo(float real, float imaginario);
Complexo somarComplexos(Complexo c1, Complexo c2);
Complexo multiplicarComplexos(Complexo c1, Complexo c2);
float calcularModulo(Complexo c);
Complexo calcularConjugado(Complexo c);
void exibirFormaAlgebrica(Complexo c);

#endif
```

---

## Exercício 6: TAD Vetor 3D - Sistema de Gráficos 3D para Jogos

Um motor gráfico para jogos precisa realizar operações com vetores tridimensionais.

```c
typedef struct {
    float x;
    float y;
    float z;
} Vetor3D;

// Cria um vetor 3D com as coordenadas especificadas
Vetor3D criarVetor(float x, float y, float z);

// Soma dois vetores e retorna o resultado
Vetor3D somarVetores(Vetor3D v1, Vetor3D v2);

// Subtrai o segundo vetor do primeiro e retorna o resultado
Vetor3D subtrairVetores(Vetor3D v1, Vetor3D v2);

// Calcula e retorna o produto escalar entre dois vetores
float calcularProdutoEscalar(Vetor3D v1, Vetor3D v2);

// Calcula e retorna o produto vetorial entre dois vetores
Vetor3D calcularProdutoVetorial(Vetor3D v1, Vetor3D v2);

// Calcula e retorna a magnitude (comprimento) do vetor
float calcularMagnitude(Vetor3D v);
```

---

## Exercício 7: TAD Contador - Sistema de Estoque com Limite

Um sistema de controle de estoque precisa de contadores que não ultrapassem limites máximos.

```c
typedef struct {
    int valor;
    int limite_maximo;
} Contador;

// Cria um contador com o limite máximo especificado
Contador criarContador(int limite_maximo);

// Incrementa o contador em 1 unidade, respeitando o limite máximo
// Retorna 1 se bem-sucedido, 0 se atingiu o limite
int incrementar(Contador *c);

// Decrementa o contador em 1 unidade, não permitindo valores negativos
// Retorna 1 se bem-sucedido, 0 se já está no zero
int decrementar(Contador *c);

// Reinicia o contador para zero
void reiniciar(Contador *c);

// Retorna o valor atual do contador
int obterValor(Contador c);

// Define um valor específico para o contador, respeitando o limite máximo
// Retorna 1 se bem-sucedido, 0 se o valor excede o limite
int definirValor(Contador *c, int novo_valor);
```

---

## Exercício 8: TAD Termômetro - Sistema de Monitoramento de Temperatura

Um sistema de climatização precisa converter entre escalas térmicas e monitorar temperaturas.

```c
typedef struct {
    float celsius;
} Termometro;

// Cria um termômetro a partir de uma temperatura em Celsius
Termometro criarTermometroCelsius(float temperatura);

// Cria um termômetro a partir de uma temperatura em Fahrenheit
Termometro criarTermometroFahrenheit(float temperatura);

// Cria um termômetro a partir de uma temperatura em Kelvin
Termometro criarTermometroKelvin(float temperatura);

// Retorna a temperatura em graus Celsius
float obterCelsius(Termometro t);

// Retorna a temperatura em graus Fahrenheit
float obterFahrenheit(Termometro t);

// Retorna a temperatura em Kelvin
float obterKelvin(Termometro t);

// Verifica se a temperatura está em alerta de congelamento (<= 0°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaCongelamento(Termometro t);

// Verifica se a temperatura está em alerta de ebulição (>= 100°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaEbulição(Termometro t);
```

---

## Exercício 9: TAD Livro - Sistema de Biblioteca Digital

Um sistema de biblioteca precisa gerenciar informações sobre livros e calcular sua idade.

Deve ser implementado um sistema para gerenciar livros em uma biblioteca digital. O programa deve:

*   Criar livros com título, autor, ano de publicação e número de cópias
*   Exibir todas as informações de um livro de forma organizada
*   Calcular a idade do livro baseado no ano atual
*   Controlar empréstimos e devoluções (incrementando/decrementando cópias disponíveis)
*   Verificar se há cópias disponíveis para empréstimo

As operações de empréstimo e devolução devem validar a disponibilidade e evitar números negativos de cópias.

---

## Exercício 10: TAD Triângulo Retângulo - Calculadora para Projetos de Estruturas

Um sistema para cálculo estrutural precisa verificar triângulos retângulos e calcular suas propriedades.

Deve ser implementado um sistema para cálculos geométricos de triângulos retângulos usado em projetos estruturais. O programa deve:

*   Criar triângulos retângulos a partir de diferentes combinações de lados (dois catetos ou hipotenusa e um cateto)
*   Calcular a hipotenusa quando os catetos são conhecidos
*   Calcular a área do triângulo
*   Calcular o perímetro total
*   Verificar se três lados quaisquer formam um triângulo retângulo usando o Teorema de Pitágoras

O sistema deve garantir que os valores dos lados sejam positivos e válidos para formar um triângulo retângulo.

---

*Exercícios de TAD - Contra a Máquina © 2025*
