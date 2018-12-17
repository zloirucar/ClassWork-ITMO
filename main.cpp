#include <iostream>
#include <stdio.h>

using namespace std;

template <typename T>
void swaper (T &x, T &y){
    const T z = x; x = y; y = z;
}

template <typename T>
T max2(T a, T b){
return a>b? a:b;


}

template <typename T>
T sum (T a[], T b[]){
    return a[0]+b[0];
}

int main()
{
    int a[] = {1,2};
    int b[] = {4,2};
    sum(a,b);
    cout << a[2] << endl;
    cout << a[1] << endl;


    return 0;
}
