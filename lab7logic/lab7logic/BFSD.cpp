#include <stdlib.h>
#include <stdio.h>
#include "Header.h"
#include <queue>

using namespace std;

void BFSD(char** matrix, int* dist, int size, int v) {

	queue <int> q;
	q.push(v);
	dist[v] = 0;
	while (!q.empty()) {
		v = q.front();
		q.pop();
		printf("%d ", v);
		for (int i = 0; i < size; i++) {
			if ((matrix[v][i] > 0) && ((dist[i] == -1) || (dist[i] > dist[v] + matrix[v][i]))) {
				q.push(i);
				dist[i] = dist[v] + matrix[v][i];
			}
		}
	}

}


void POSH(int v, char** matrix, int size) {

	int* dist = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		dist[i] = -1;
	}
	BFSD(matrix, dist, size, v);
	printf("\n\nНомер узла: ");
	for (int i = 0; i < size; i++) {
		printf("%-4d", i);
	}
	printf("\nРасстояние: ");
	for (int i = 0; i < size; i++) {
		printf("%-4d", dist[i]);
	}
}

