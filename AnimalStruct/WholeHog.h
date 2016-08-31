#pragma once

#include<iostream>
#include<cstdio>
#include<cstdlib>

struct Pig
{
	char PigName[80];
	int eat;
	int squeal;
	int roll;
	int GoingWholeHog;
};

void printTheHog(const Pig &var);
Pig changeTheHog(Pig &var);
Pig createPig();
