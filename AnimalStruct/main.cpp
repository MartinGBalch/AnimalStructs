#include "WholeHog.h"
#include ""

void main()
{
	const int array_size = 13;

	Pig hog[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		hog[i] = createPig();
		printTheHog(hog[i]);
		changeTheHog(hog[i]);
		printTheHog(hog[i]);
	}
	system("pause");

}
