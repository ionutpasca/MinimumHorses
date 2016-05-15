// Lab03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>

int **aux;
int **horses;
int **attack;

void initialize(int num_dims){
	int i, j;
	for (i = 0; i < num_dims; i++){
		aux = (int**)malloc(num_dims * sizeof(int*));
		horses = (int**)malloc(num_dims * sizeof(int*));
		attack = (int**)malloc(num_dims * sizeof(int*));
		for (j = 0; j < num_dims; j++){
			aux[j] = (int*)malloc(num_dims * sizeof(int));
			horses[j] = (int*)malloc(num_dims * sizeof(int));
			attack[j] = (int*)malloc(num_dims * sizeof(int));
		}
	}
	for (i = 0; i < num_dims;i++)
		for (j = 0; j < num_dims; j++){
			aux[i][j] = 0;
			horses[i][j] = 0;
			attack[i][j] = 0;
	}
}

void resetAux(int num_dims){
	int i, j;
	for (i = 0; i < num_dims; i++){
		aux = (int**)malloc(num_dims * sizeof(int*));
		for (j = 0; j < num_dims; j++){
			aux[j] = (int*)malloc(num_dims * sizeof(int));
		}
	}
	for (i = 0; i < num_dims; i++)
	for (j = 0; j < num_dims; j++){
		aux[i][j] = 0;
	}
}

void printResult(int num_dims){
	printf("AUX\n");
	for (int i = 0; i < num_dims; i++){
		for (int j = 0; j < num_dims; j++)
			printf("%d ", aux[i][j]);
		printf("\n");
	}
	printf("HORSES\n");
	for (int i 
		0; i < num_dims; i++){
		for (int j = 0; j < num_dims; j++)
			printf("%d ", horses[i][j]);
		printf("\n");
	}
	printf("ATTACK\n");
	for (int i = 0; i < num_dims; i++){
		for (int j = 0; j < num_dims; j++)
			printf("%d ", attack[i][j]);
		printf("\n");
	}
}

bool isInside(int x, int y, int num_dims){
	return x >= 0 && y >= 0 && x < num_dims && y < num_dims;
}

void markPosition(int i, int j, int num_dims,int option){
	int xMark, yMark;

	xMark = i - 1;
	yMark = j - 2;
	if (isInside(xMark, yMark,num_dims)){	
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i + 1;
	yMark = j - 2;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i + 2;
	yMark = j - 1;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i + 2;
	yMark = j + 1;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i + 1;
	yMark = j + 2;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i - 1;
	yMark = j + 2;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i - 2;
	yMark = j + 1;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}

	xMark = i - 2;
	yMark = j - 1;
	if (isInside(xMark, yMark, num_dims)){
		switch (option)
		{
		case 1:
			attack[xMark][yMark] = 1;
			break;
		case 2:
			aux[xMark][yMark] += 1;
			break;
		case 3:
			if (attack[xMark][yMark] == 0){
				aux[i][j] += 1;
				//	attack[xMark][yMark] = 1;
			}
			break;
		default:
			aux[i][j] += 1;
			break;
		}
	}
}

void placeBestKnights(int num_dims){
	for (int i = 1; i < num_dims - 1; i++)
		for (int j = 1; j < 3; j++)
			if (aux[i][j] == 8){
				horses[i][j] = 1;
				markPosition(i, j, num_dims, 1);
			}
	for (int i = num_dims - 1; i>0; i--)
		for (int j = num_dims - 1; j>num_dims - 4; j--)
			if (aux[i][j] == 8){
				horses[i][j] = 1;
				markPosition(i, j, num_dims, 1);
			}
}

bool isComplete(int num_dims){
	for (int i = 0; i < num_dims;i++)
		for (int j = 0; j < num_dims;j++)
			if (attack[i][j] != 1)
				return false;
	return true;
}

void addKnights(int num_dims){
	resetAux(num_dims);
	int max = 0;
	int i1 = 0, j1 = 0, i2 = num_dims - 1, j2 = 0, i3 = 0, j3 = num_dims - 1, i4 = num_dims - 1, j4 = num_dims - 1;
	markPosition(0, 0, num_dims, 2);
	markPosition(0, num_dims-1, num_dims, 2);
	markPosition(num_dims-1, 0, num_dims, 2);
	markPosition(num_dims-1, num_dims - 1, num_dims, 2);
	while (i1<(num_dims/2))
	{
		while (j1 < (num_dims / 2)){
			markPosition(i1, j1, num_dims, 3);
			markPosition(i2, j2, num_dims, 3);
			markPosition(i3, j3, num_dims, 3);
			markPosition(i4, j4, num_dims, 3);
			j1++;
			j2++;
			j3--;
			j4--;
		}
		j1 = 0; j2 = 0; j3 = num_dims - 1; j4 = num_dims - 1;
		i1++; i2--; i3++; i4--;
	}
	for (int i = 0; i < num_dims; i++)
		for (int j = 0; j < num_dims; j++)
			if (aux[i][j]>max)
				max = aux[i][j];
			printf("MAXIM %d\n", max);

	i1 = 0, j1 = 0, i2 = num_dims - 1, j2 = 0, i3 = 0, j3 = num_dims - 1, i4 = num_dims - 1, j4 = num_dims - 1;
	while (i1<(num_dims / 2))
	{
		while (j1 < (num_dims / 2)){
			if (aux[i1][j1] == max){
				markPosition(i1, j1, num_dims, 1);
				horses[i1][j1] = 1;
			}
			if (aux[i2][j2] == max){
				horses[i2][j2] = 1;
				markPosition(i2, j2, num_dims, 1);
			}
			if (aux[i3][j3] == max){
				horses[i3][j3] = 1;
				markPosition(i3, j3, num_dims, 1);
			}
			if (aux[i4][j4] == max){
				horses[i4][j4] = 1;
				markPosition(i4, j4, num_dims, 1);
			}

			if (isComplete(num_dims))
				break;
			j1++;
			j2++;
			j3--;
			j4--;
		}
		j1 = 0; j2 = 0; j3 = num_dims - 1; j4 = num_dims - 1;
		i1++; i2--; i3++; i4--;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;
	int num_dims = 8;
	initialize(num_dims);

	for (i = 0; i < num_dims;i++)
		for (j = 0; j < num_dims; j++)
			markPosition(i, j, num_dims,0);
	placeBestKnights(num_dims);
	//printResult(num_dims);

	//printf("Press enter...");
	//getchar();
	//if (!isComplete(num_dims))
	addKnights(num_dims);
	printResult(num_dims);

	printf("Press enter...");
	getchar();

	free(aux);
	free(horses);
	free(attack);
	return 0;
}

