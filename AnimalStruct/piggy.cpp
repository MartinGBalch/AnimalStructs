#include "WholeHog.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>

Pig createPig()
{
	Pig var;

	printf("What will your pigs name be: ");
	scanf_s("%s", &var.PigName, 80);

	printf("\nHow many apples will your pig eat: ");
	scanf_s("%d", &var.eat);

	printf("\nHow often does it squeal like a piggy: ");
	scanf_s("%d", &var.squeal);

	return var;
}

void printTheHog(const Pig &var)
{

	printf("Name: %s\t Number of apples eaten: %d\t Oftenness of squeals: %d\t", var.PigName, var.eat, var.squeal);
}

Pig changeTheHog(Pig &var)
{
	printf("What will your pigs name be: ");
	scanf_s("%s", &var.PigName, 80);

	printf("\nHow many apples will your pig eat: ");
	scanf_s("%d", &var.eat);

	printf("\nHow often does it squeal like a piggy: ");
	scanf_s("%d", &var.squeal);

	return var;
}