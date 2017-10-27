//
// Created by s524063 on 10/26/2017.
//

#include <iostream>

using namespace std;

int main() {

    bool done = false;
    int inc = 1;

    while (!done) {
        inc++;
        done = true;
        for(int i = 2; i <= 20; i++) {
            if (inc % i != 0) {
                done = false;
            }
        }
    }
    cout << inc << endl;


    return 0;
}