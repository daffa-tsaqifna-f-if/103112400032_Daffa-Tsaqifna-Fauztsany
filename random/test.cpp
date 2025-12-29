#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace chrono;

// Rekursif
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Iteratif
long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    vector<int> n_values;
    vector<double> recursive_times;
    vector<double> iterative_times;

    ofstream csv("factorial_comparison.csv");
    csv << "n,recursive_time,iterative_time\n";

    while (true) {
        int n;
        cout << "Masukkan n (-1 untuk keluar): ";
        cin >> n;

        if (n == -1) break;
        if (n < 0) {
            cout << "n harus >= 0\n";
            continue;
        }

        n_values.push_back(n);

        // Rekursif
        auto start = high_resolution_clock::now();
        factorial_recursive(n);
        auto end = high_resolution_clock::now();
        double rec_time = duration<double>(end - start).count();
        recursive_times.push_back(rec_time);

        // Iteratif
        start = high_resolution_clock::now();
        factorial_iterative(n);
        end = high_resolution_clock::now();
        double itr_time = duration<double>(end - start).count();
        iterative_times.push_back(itr_time);

        csv << n << "," << rec_time << "," << itr_time << "\n";

        // Tabel
        cout << "\nTABEL WAKTU EKSEKUSI\n";
        cout << left << setw(10) << "n"
             << setw(20) << "Recursive (s)"
             << setw(20) << "Iterative (s)" << endl;

        for (size_t i = 0; i < n_values.size(); i++) {
            cout << left << setw(10) << n_values[i]
                 << setw(20) << recursive_times[i]
                 << setw(20) << iterative_times[i] << endl;
        }
        cout << endl;
    }

    csv.close();
    cout << "Data grafik disimpan ke factorial_comparison.csv\n";
    return 0;
}
