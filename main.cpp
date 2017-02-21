#include <iostream>
#include <ctime>

#include "Prime.cpp"

using namespace std;

int main() {
    time_t start = time(nullptr);
    int max = 999999999;


    for (int i = 0; i < max; i++) {
        Prime::IsPrime(i);
    }

    time_t end = time(nullptr);
    cout << "Dauer in Sekunden um die Zahlen 0 bis " << max << " auf ihre Primeigenschaft hin zu überprüfen: " << end - start
         << endl;

    return 0;
}



	
