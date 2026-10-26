

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int Low, const int High) {
    for (int i = 0; i < n;i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void print(int* a, const int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(4) << a[i];

    }
    cout << endl;
}

int Sum(int* a, const int n) {
    int s = 0;
    for (int i = 0; i < n;i++) {
        if (a[i] % 2 == 0) {
            s += a[i];
        }
    }
    return s;
}

template <typename T>
T Sum(T* a, const int n) {
    T s = T();
    for (int i = 0; i < n;i++) {
        if (a[i] % 2 == 0) {
            s += a[i];
        }
    }
    return s;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    const int Low = -20, High = 20;
    int a[n];

    create(a, n, Low, High);
    print(a, n);

    cout << Sum(a, n) << endl;
    cout << Sum<int>(a, n) << endl;

    
}

