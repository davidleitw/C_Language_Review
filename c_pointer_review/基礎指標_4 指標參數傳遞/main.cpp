#include <iostream>

using namespace std;
void pointer_fun(int *p1,int *p2)
{
	printf("The address of p1 is %p\n",&p1);
	printf("The value of p1 is %p\n",p1);
	printf("The address of p2 is %p\n",&p2);
	printf("The value of p2 is %p\n",p2);
	*p1 += 1;
	 p1 = p2;
	*p1 += 2;
}
int main()
{
	int i,j;
	int *iptr = &i;
	printf("Please input an integer for i:");
	scanf("%d",&i);
	printf("Please input an integer for j:");
	scanf("%d",&j);

	printf("The address of i is %p\n",&i);
	printf("The address of j is %p\n",&j);
	printf("The address of iptr is %p\n",&iptr);
	printf("i = %d j = %d\n",i,j);
	pointer_fun(iptr,&j);
	printf("After pointer_fun() ,i = %d j = %d\n",i,j);
	*iptr +=15;
	printf("i = %d j = %d\n",i,j);
    return 0;
}
