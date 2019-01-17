#include <iostream>

using namespace std;
int *first_positive(int *ptr)
{
	while(*ptr <= 0)
		ptr++;
	return ptr;
}
int main()
{
    int input[10] = {0,0,0,5,9,0,0,6,0,2};
    int array[10];
    int *iptr;
    int i;

    for(i=0;i<10;i++) array[i] = input[i];
    iptr = first_positive(array);

	printf("*iptr = %d\n",*iptr);
	printf("iptr - array = %d\n",iptr-array);

	iptr = first_positive(&(array[5]));

	printf("*iptr = %d\n",*iptr);
	printf("iptr - array = %d\n",iptr-array);
	printf("*iptr = %d\n",*(first_positive(&(array[5]))));
    return 0;
}
