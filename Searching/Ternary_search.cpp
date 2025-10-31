#include <bits/stdc++.h>
using namespace std;

int ternarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        // split array into 3 parts
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == target) return mid1;
        if (arr[mid2] == target) return mid2;

        // check which part to move into
        if (target < arr[mid1]) right = mid1 - 1;
        else if (target > arr[mid2]) left = mid2 + 1;
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    // not found
    return -1;
}

int main() {
    vector<int> nums = {9, 3, 57, 12, 97, 36, 45, 2, 27, 79};
    sort(nums.begin(), nums.end());
    cout << "Searching in: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    int x;
    cout << "Enter number to find: ";
    cin >> x;

    int res = ternarySearch(nums, x);
    if (res != -1) cout << "Found at index " << res << "\n";
    else cout << "Not found :(\n";
    
}
