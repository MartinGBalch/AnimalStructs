#include<iostream>
using namespace std;
//1. sts

//2. consider it considered
//3. D
//4. you can not do a double with a char
 
void main()
{
	int var = 4546;
	float far = var;

	printf("%f\n", far);

	far = *(float*)&var;

	printf("%f\n", far);

	system("pause");
}