#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> data(n);
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }

        queue<int> q;
        for (int i = 0; i < n - 1; i++) {
            if (data[i] < data[i + 1]) {
                q.push(i);
            }
        }

        int seconds = 0;
        while (!q.empty()) {
            int size = q.size();
            bool changed = false;

            while (size--) {
                int i = q.front();
                q.pop();

                if (data[i] < data[i + 1]) {
                    data[i] = data[i + 1];
                    changed = true;

                    
                    if (i > 0 && data[i - 1] < data[i]) {
                        q.push(i - 1);
                    }
                }
            }

            if (changed) {
                seconds++;
            }
        }

        cout << seconds << endl;
    }

    return 0;
}
