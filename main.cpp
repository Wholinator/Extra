//
// Created by S524063 on 10/25/2017.
//

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int n = 600851475143;
    int last = 0;


    for(long int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            bool prime = true;
            for (int j = 2; j < sqrt(i); j++) {
                if (i % j == 0) {
                    prime = false;
                }
            }
            if (prime) {
                last = i;
            }
        }
    } cout << last << endl;

}