#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeThem(vector<int> a, vector<int> b) {
 vector<int> result;
 int i = 0, j = 0;

 // merging part
 while (i < a.size() && j < b.size()) {
  if (a[i] < b[j]) {
   result.push_back(a[i]);
   i += 1;
  } else {
   result.push_back(b[j]);
   j += 1;
  }
 }

 // add what’s left from a
 while (i < a.size()) {
  result.push_back(a[i]);
  i += 1;
 }

  // add what’s left from b (if any)
 while (j < b.size()) {
   result.push_back(b[j]);
   j += 1;
 }

 return result;
}

vector<int> merge_sort(vector<int> lst) {
 // merge sort, devides the list and then combines in sorted way
 if (lst.size() <= 1) {
  return lst;
 }

 int mid = lst.size() / 2;
 vector<int> left_half(lst.begin(), lst.begin() + mid);
 vector<int> right_half(lst.begin() + mid, lst.end());
 
 left_half = merge_sort(left_half);
 right_half = merge_sort(right_half);

 return mergeThem(left_half, right_half);
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int n : nums) cout << n << " ";
 cout << endl;
 cout << "sorting..." << endl;

 vector<int> sorted_nums = merge_sort(nums);

 cout << "After : ";
 for (int n : sorted_nums) cout << n << " ";
 cout << endl;
}
