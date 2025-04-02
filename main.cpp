#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));  
    
    int n, i, j;
    int t;
    string s;

    cout << "Quante auto percorrono la corsa?" << endl;
    cin >> n;
    int r[n];
    string nomi[n];

    i = 0;
    t = 0;
    while (i < n) {
        cout << "Digita il " << i + 1 << "° nome." << endl;
        cin >> nomi[i];
        r[i] = 1 + rand() % (n + 1);
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        j = 0;
        while (j <= n - 2 - i) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
                s = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = s;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << i + 1 << "° nome: " << nomi[i] << ", posizione: " << r[i] << "." << endl;
        i = i + 1;
    }
    
}