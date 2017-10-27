//
// Created by s524063 on 10/26/2017.
//

#include <iostream>

using namespace std;

int main() {

    int pal = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int num = i * j;

            int temp = num;
            int rev = 0;
            while (temp != 0) {
                int rem = temp % 10;
                rev = rev*10 + rem;
                temp /= 10;
            }

            if ((rev == num) and (num >= pal)) {
                pal = num;
            }
        }
    } cout << pal << endl;
    return 0;


}
