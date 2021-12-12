#include <iostream>

using namespace std;

unsigned long fibo(unsigned long number);

int main()
{
    int n = 100;
    for (int counter = 0; counter <= n; counter++) {
        if (fibo(counter) <= 1000)
        {
            cout << "Fibo (" << counter <<") = " << fibo(counter) << endl;
        }
    }

    return 0;
}

unsigned long fibo(unsigned long number) {
    if ((number == 0) || (number == 1)) {
        return number;
    }
    else {
        return fibo(number - 1) + fibo(number - 2);
    }
}
