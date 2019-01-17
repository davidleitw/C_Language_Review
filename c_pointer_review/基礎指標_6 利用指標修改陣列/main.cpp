#include <iostream>

using namespace std;

int main()
{
	int i;
    int a[5];
    int *iptr;

    for(i=0;i<5;i++) a[i] = i+1;

    for(i=0,iptr=a; i<2; i++) { iptr[i]+=2; }


    for(i=0; i<5; i++)
		printf("a[%d] = %d  ",i,a[i]);
	printf("\n");

	for(i=0,iptr=&(a[2]); i<2; i++) { iptr[i] +=3; }
	/*/////////////////////////////
		first start iptr[0] = a[2]
					iptr[1] = a[3]
					iptr[2] = a[4]..
	//////////////////////////////*/

	for(i=0; i<5; i++)
		printf("a[%d] = %d  ",i,a[i]);
	printf("\n");

    return 0;
}
