#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int count = 0;
    int n = 2;
    int prime = 0;
    while(prime < 10001) {
        for(int i = 1; i <= sqrt(n) ; i++ ) {
            if( n%i == 0 ) {
                count++;
            }
            if ( count > 1 ) {
                break;
            }
        }
        if( count == 1) {
            prime++;
        }
        n++;
        count=0;
    }
    cout << n-1 << endl;
    return 0;
}
