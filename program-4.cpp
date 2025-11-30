#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // counts for 1..9 (index 0 unused)
    int cnt[10] = {0};

    for (int x : nums) {
        for (int d = 1; d <= 9; ++d) {
            if (x % d == 0) {
                cnt[d]++;
            }
        }
    }

    cout << "{";
    for (int d = 1; d <= 9; ++d) {
        cout << d << ": " << cnt[d];
        if (d != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
