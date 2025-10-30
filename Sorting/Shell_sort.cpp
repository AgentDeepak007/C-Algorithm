#include <iostream>
#include <vector>
using namespace std;

void shell_sort(vector<int>& lst) {
    // shell sort, keeps sorting with gaps that get smaller
    int n = lst.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {

        // insertion sort within the gap
        for (int i = gap; i < n; i++) {
            int temp = lst[i];
            int j;

            for (j = i; j >= gap && lst[j - gap] > temp; j -= gap) {
                lst[j] = lst[j - gap];
            }

            lst[j] = temp;
        }

        // done one pass for this gap
    }
}

int main() {
    vector<int> nums = {9,3,57,12,97,36,45,2,27,79};

    cout << "Before: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    cout << "sorting...\n";

    shell_sort(nums);

    cout << "After : ";
    for (int x : nums) cout << x << " ";
    cout << "\n";
}
