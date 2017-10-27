//
// Created by s524063 on 10/26/2017.
//
#include <iostream>

using namespace std;

int main() {
    int ssq = 0;
    int sqs = 0;

    for(int i = 1; i <= 100; i++) {
        ssq += (i*i);
        sqs += i;
    }
    sqs *= sqs;

    int dif = sqs - ssq;

    cout << dif << endl;

    return 0;
}
