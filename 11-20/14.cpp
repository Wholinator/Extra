//
// Created by s524063 on 10/27/2017.
//

#include <iostream>

using namespace std;

int main() {

    long long int max = 0;
    int chain = 0;

    for(int i = 2; i < 1000000; i++) {
        int counter = 1;
        long long int num = i;

        while (num != 1) {
            if(num % 2 == 0) {
                num /= 2;
            } else {
                num = (3 * num) + 1;
            } counter++;
        }

        if (counter > chain) {
            chain = counter;
            max = i;
            //cout << chain << " " << i << endl;
        }

    }
    cout << max << endl;

    return 0;
}
