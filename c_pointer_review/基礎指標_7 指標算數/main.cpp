#include <iostream>

using namespace std;

int main()
{
    int array[10];
    int *iptr1 = &(array[3]);
    int *iptr2 = iptr1 + 4;

    printf("iptr1 = %p\n",iptr1);
    printf("iptr2 = %p\n",iptr2);
    printf("iptr2 - iptr1 = %d\n",iptr2-iptr1);//���Щҫ��쪺�����j�p�����

    return 0;
}
