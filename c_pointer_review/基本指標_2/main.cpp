#include <iostream>
using namespace std;

int main()
{
    int i,k;
    int *iptr1,*iptr2;
	printf("Please input an integer :");
    scanf("%d",&i);
    iptr1 = &i;
    iptr2 = iptr1;

    printf("i  = %d\n",i);
    printf("&i = %p\n",&i);
    printf("iptr1 = %p\n ",iptr1);
    printf("&iptr1 = %p\n",&iptr1);
    printf("iptr2 = %p\n ",iptr2);
    printf("&iptr2 = %p\n",&iptr2);
	*iptr1 = 8;
    printf("i = %d\n",i);
    k = *iptr2 + 6;
    printf("&k = %p\n",&k);
    printf("k = %d\n ",k);

    return 0;
}
