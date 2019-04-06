#include <iostream>
using namespace std;
/*
    Example1 的變化題， 只有第九行的&a改成a
*/
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = (int *)(a + 1);
   
    // 最重要的就是這兩個的差距
    // a + 1 and &a + 1 
    cout << a+1 << " " << &a+1 << endl;

    for(int i = 0; i < 5; ++i)
        cout << (a+i) << " ";
    cout << endl;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "(*p-1) = " << (*p - 1) << endl; 
    cout << "*(p-1) = " << *(p - 1) << endl; 
    return 0;
}