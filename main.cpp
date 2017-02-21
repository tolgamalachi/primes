#include <iostream>
#include <ctime>

#include "Prime.cpp"

using namespace std;

int main() {
    time_t start = time(nullptr);
    int max = 9999999;
    int primes = 0;


    for (int i = 0; i < max; i++) {
        if (Prime::IsPrime(i)) {
            primes++;
        }
    }

    time_t end = time(nullptr);
    cout << "Dauer in Sekunden um die Zahlen 0 bis " << max << " auf ihre Primeigenschaft hin zu überprüfen: "
         << end - start
         << endl;

    cout << "Primzahlen gefunden: " << primes << endl;

    return 0;
}



	
