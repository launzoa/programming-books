#include <bits/stdc++.h>

using namespace std;

int main() {
  
    int n;
    for (int a = 1; cin >> n; a++) {
        int min = 1000001, max = -1000001;
        for (int x = 0; x < n; x++) {
            int num;
            cin >> num;
            if (num < min)
                min = num;
            if (num > max)
                max = num;
        }
        cout << "Case " << a << ": " << min << " " << max << " " << max - min << "\n";
    }
    return 0;
}