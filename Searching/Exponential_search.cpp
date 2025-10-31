#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int exponentialSearch(vector<int>& arr, int target) {
    if (arr.empty()) return -1;
    if (arr[0] == target) return 0;

    int i = 1;
    // keep doubling till we pass or reach end
    while (i < arr.size() && arr[i] <= target)
        i *= 2;

    return binarySearch(arr, i / 2, min(i, (int)arr.size() - 1), target);
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

    int res = exponentialSearch(nums, x);
    if (res != -1) cout << "Found at index " << res << "\n";
    else cout << "Not found :(\n";
}
