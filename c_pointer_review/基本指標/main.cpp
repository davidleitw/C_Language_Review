#include <iostream>
using namespace std;

int main()
{
    int *iptr;
    float *fptr;
    double *dptr;

    printf("sizeof(iptr) = %d\n",sizeof(iptr));
    printf("sizeof(fptr) = %d\n",sizeof(fptr));
    printf("sizeof(dptr) = %d\n",sizeof(dptr));

	int i = 5;
	int *Iptr1;
	int *Iptr2;
	Iptr1 = &i;
	Iptr2 = Iptr1;
	printf("*Iptr1 = %d\n",*Iptr1);
	printf(" Iptr1 = %p\n",Iptr1);
	printf("*Iptr2 = %d\n",*Iptr2);
	printf(" Iptr2 = %p\n",Iptr2);
	/*
		i = *iptr;
		*iptr = i;
		It is not the same.
	*/
    return 0;
}
