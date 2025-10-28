#include <iostream>
#include <vector>
using namespace std;

vector<int> quick_sort(vector<int> lst) {
 // quick sort, picks a pivot and devides stuff around it
 if (lst.size() <= 1) {
  return lst;
 }

 int pivot = lst[lst.size() / 2];
 vector<int> left, mid, right;

 for (int x : lst) {
  if (x < pivot)
   left.push_back(x);
  else if (x == pivot)
   mid.push_back(x);
  else
   right.push_back(x);
 }

 // recurively sort left and right side
 vector<int> sorted_left = quick_sort(left);
 vector<int> sorted_right = quick_sort(right);

 // combine all
 sorted_left.insert(sorted_left.end(), mid.begin(), mid.end());
 sorted_left.insert(sorted_left.end(), sorted_right.begin(), sorted_right.end());

 return sorted_left;
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int n : nums) cout << n << " ";
 cout << endl;
 cout << "sorting..." << endl;

 vector<int> sorted_nums = quick_sort(nums);

 cout << "After : ";
 for (int n : sorted_nums) cout << n << " ";
 cout << endl;
}
