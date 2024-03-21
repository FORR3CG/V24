#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void prentaFylki(long* fylki, unsigned long staerd) {
    while(staerd--) {
        cout << *fylki;
        if(staerd > 0) cout << " - ";
        fylki++;
    }
    cout << endl;
}

void fyllaFylki(long* fylki, unsigned long staerd) {
    srand(time(0));
    for(unsigned long i = 0; i < staerd; i++) {
        *fylki = rand() % staerd;
        fylki++;
    }
}

int main() {
    unsigned long staerd;
    int* b = nullptr;
    while(true) {
        cout << "Hversu stórt fylki? ";
        cin >> staerd;
        if(staerd < 1) break;
        long fylki[staerd];
        fyllaFylki(fylki, staerd);
        if(staerd <= 500) prentaFylki(fylki, staerd);
    }

    return 0;
}
