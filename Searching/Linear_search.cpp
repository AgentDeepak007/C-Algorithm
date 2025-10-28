#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> lst, int target) {
 // linear search, just checks one by one til found
 for (int i = 0; i < lst.size(); i++) {
  if (lst[i] == target) {
   return i;
  }
  
  // keeps going if not found yet
 }

 // if we reach here, it isnt  there
 return -1;
}


int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Searching in: ";
 for (int n : nums) cout << n << " ";
 cout << endl;

 int x;
 cout << "Enter number to find: ";
 cin >> x;
 int res = linear_search(nums, x);

 if (res != -1) {
  cout << "Found at index " << res << endl;
 } else {
  cout << "Not found :(" << endl;
 }

 return 0;
}
