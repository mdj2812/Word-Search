/*
 ============================================================================
 Name        : Word-Search.c
 Author      : MarMDJtin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define N 16

static void GeneratePuzzle(void);
static void PrintPuzzle(void);

static char Puzzle[N][N];

int main(void) {
	GeneratePuzzle();
	PrintPuzzle();

	return EXIT_SUCCESS;
}

static void GeneratePuzzle(void) {
	srand(time(0));

	for (uint8_t i = 0; i < N; i++) {
		for (uint8_t j = 0; j < N; j++) {
			Puzzle[i][j] = rand() % 26 + 'a';
		}
	}
}

static void PrintPuzzle(void) {
	for (uint8_t i = 0; i < N; i++) {
		for (uint8_t j = 0; j < N; j++) {
			printf("%c ", Puzzle[i][j]);
		}
		printf("\n");
	}
}
