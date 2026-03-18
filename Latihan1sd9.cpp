#include <iostream>
using namespace std;

int main() {
    // Nomor 1
    int a, b;
    cout << "Masukkan a: "; cin >> a;
    cout << "Masukkan b: "; cin >> b;
    float hasil = a / b;
    if ((a % b == 0) && (hasil > 2)) cout << "VALID";
    else cout << "TIDAK";

    // Nomor 2
    int n;
    cout << "Masukkan n: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " "; 
    }

    // Nomor 3
    int x;
    cout << "Masukkan x: "; cin >> x;
    if ((x > 5) && (x < 8)) cout << "A"; 
    else if (x > 5) cout << "B";
    else cout << "C";

    // Nomor 4
    int x, y;
    cout << "Masukkan x: "; cin >> x;
    y=x;
    x++;
    cout << "x = " << x << ", y = " << y;

    // Nomor 5
    int a, b;
    cout << "Masukkan nilai a"; cin >> a;
    cout << "Masukkan nilai b"; cin >> b;
    if ((a < b) && (b > 2)) cout << "YES";
    else cout<<"NO";

    // Nomor 6
    int n;
    cout <<"Masukkan n: "; cin >> n;
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Nomor 7
    for (int i = 1; i <= 10; i++) {
        if ((i % 2 == 0) && (i % 4 != 0))
        cout << i;
    }

    // Nomor 8
    int n;
    cout << "Masukkan nilai n: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) cout << "X";
        else cout << i;
    }

    // Nomor 9
    for (int i = 1; i <= 15; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) cout << "Z";
        else if (i % 3 == 0) cout << "X";
        else if (i % 5 == 0) cout << "Y";
        else cout<<i;
    }
}