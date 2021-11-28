cmake_minimum_required(VERSION 3.17)
project(Algoritmos_Ordenacao C)

set(CMAKE_C_STANDARD 99)

add_executable(Algoritmos_Ordenacao main.c algoritmos_ordenacao.c algoritmos_ordenacao.h funcoes_vetores.c funcoes_vetores.h tempo_execucao.c tempo_execucao.h)