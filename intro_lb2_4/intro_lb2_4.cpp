#include <iostream>

using namespace std;

int is_prime(int a) {
    int c = 0;
    for (int i = 1; i < a; i++) {
        if(a % i == 0) c++;
    }
    return c > 1 ? 0 : 1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) cout << i << endl;
    }
}