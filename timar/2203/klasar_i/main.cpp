#include <iostream>
#include <string>

using namespace std;

class Bill {
    private: // er ósýnilegt í class
        int nr;
        string tegund;
    public:
        Bill() {
            this->nr = -1;
            this->tegund = "Óþekkt tegund";
        }
        Bill(int numer, string tegundin) {
            this->nr = numer;
            this->tegund = tegundin;
        }

        // getters og setters

        void prenta() {
            cout << "Bíll nr. " << this->nr 
                 << ", teg: " << this->tegund << endl;
        }
};

int main() {
    Bill c;
    Bill b = Bill(389, "BMW");
    c.prenta();
    b.prenta();
    return 0;
}