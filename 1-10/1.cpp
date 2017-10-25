//
// Created by S524063 on 10/25/2017.
//

#include <vector>;
#include <iostream>

using namespace std;

int main() {
    vector<int> list;

    int sum = 0;
    int i = 1;

    for(i; i<1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            list.push_back(i);
        }
    }

    for (int j : list) {
        sum += j;
    }
    cout << sum;
}
