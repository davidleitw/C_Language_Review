#include <iostream>

using namespace std;

int main()
{
    int i;
    int *iptr;

    printf("Please input an integer :");
    scanf("%d",&i);
    iptr = &i;
    printf("i = %d\n",i);
    printf("&i = %p\n",&i);

    printf("iptr = %p\n",iptr);
    printf("&iptr = %p\n",&iptr);
    printf("*iptr = %d\n",*iptr);

    printf("*(&iptr) = %p\n",*(&iptr));
    printf("&(*iptr) = %p\n",&(*iptr));

    printf("*(*(&iptr)) = %d\n",*(*(&iptr)));
    printf("*(&(*iptr)) = %d\n",*(&(*iptr)));
    printf("&(*(&iptr)) = %p\n",&(*(&iptr)));


    return 0;
}
