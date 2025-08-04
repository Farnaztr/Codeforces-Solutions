#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int f0 = 0, f1 = 1;
    if (N >= 1) cout << f0 << " ";
    if (N >= 2) cout << f1 << " ";
    for (int i = 3; i <= N; i++) {
        int f2 = f0 + f1;

        cout << f2 << " ";
        f0 = f1;
        f1 = f2;
    }

    return 0;
}
