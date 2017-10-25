//
// Created by S524063 on 10/25/2017.
//

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> fibs;

    fibs.push_back(1);
    fibs.push_back(2);

    int n1 = 1;
    int n2 = 2;

    int n = 0;

    while (n < 4000000) {
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        fibs.push_back(n);
    }

    int sum = 0;

    for (int i : fibs) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;

}