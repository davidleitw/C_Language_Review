#include <iostream>
using namespace std;
/*
    感謝好友@阿盧分享此題目，記錄此題操作方法在github
*/
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = (int *)(&a + 1);
   
    // 最重要的就是這兩個的差距
    // a + 1 and &a + 1 
    cout << a+1 << " " << &a+1 << endl;

    for(int i = 0; i < 5; ++i)
        cout << (a+i) << " ";
    cout << endl;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "(*p-1) = " << (*p - 1) << endl; // = a[5] - 1 (undefined)
    cout << "*(p-1) = " << *(p - 1) << endl; // = a[5-1] = a[4] = 5 (defined)
    return 0;
}