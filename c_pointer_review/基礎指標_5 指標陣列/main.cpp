#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int i;
    int *iptr;
	//part1 use pointer to array/////////
    for(i=0;i<5;i++) a[i] = (i+1)*2;

    for(i=0,iptr=a; i<5; i++,iptr++){
    	printf("%p\n",iptr);
    	*iptr = *iptr+3;
    }
    for(i=0;i<5;i++){
		printf("a[%d] = %d\n",i,a[i]);
    }
    printf("\n\n");
	/////////////////////////////////////
	int *Iptr = a; //*(Iptr+i) = a[i]
	for(i=0;i<5;i++){
		printf("a[%d] = %d  ",i,*(Iptr+i));
		printf("a[%d] = %d\n",i,Iptr[i]);
	}




    return 0;
}
