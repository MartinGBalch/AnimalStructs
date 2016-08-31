#include<iostream>
using namespace std;

void main()
{
	int var = 40;
	int *ptr = &var;

	printf("%x\n", ptr);
	printf("%x\n", &ptr);
	printf("%x", (unsigned)ptr - (unsigned)&ptr);
	system("pause");
}