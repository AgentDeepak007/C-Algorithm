#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void counting_sort(vector<int>& lst) {
// counting sort, counts how many times each number appears
int maxVal = *max_element(lst.begin(), lst.end());
vector<int> count(maxVal + 1, 0);

// count em
for (int num : lst) count[num]++;

// rebuild list
int idx = 0;
for (int i = 0; i <= maxVal; i++) {
while (count[i] > 0) {
lst[idx++] = i;
count[i]--;
}
}

// done
}

int main() {
vector<int> nums = {9,3,57,12,97,36,45,2,27,79};

cout << "Before: ";
for (int x : nums) cout << x << " ";
cout << "\n";

cout << "sorting...\n";

counting_sort(nums);

cout << "After : ";
for (int x : nums) cout << x << " ";
cout << "\n";
}
