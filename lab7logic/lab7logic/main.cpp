#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "Header.h"


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	int start;
	printf("Введите размер матрицы: ");
	scanf("%d", &size);
	char** adj = gen_adj_matrix(size);
	printf("Матрица смежности: \n");
	pr_adj_matrix(adj, size);
	printf("\n");
	printf("Из какой вершины начинаем?\n");
	scanf("%d", &start);
	printf("\nПорядок обхода:\n");
	POSH(start, adj, size);
	_getch();
}