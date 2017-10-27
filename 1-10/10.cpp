#include <iostream>
#include <cmath>

using namespace std;

bool prime(const int &n)
{
    if (n == 2) {
        return true;
    }
    if (n < 2 || n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int max = 2000000;
    int num = 2;
    long long sum = 0;

    while (num < max)
    {
        if ( prime(num) && num < max)
        {
            sum += num;
        }
        num++;
    }
    cout << sum << endl;
    return 0;
}

