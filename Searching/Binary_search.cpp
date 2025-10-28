#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> lst, int target) {
 // binery search, cuts the list in half each time
 int low = 0;
 int high = lst.size() - 1;

 while (low <= high) {
  int mid = (low + high) / 2;
  
  if (lst[mid] == target) {
   return mid;
  } else if (lst[mid] < target) {
    low = mid + 1;
  } else {
   high = mid - 1;
  }
 }

 // not found
 return -1;
}


int main() {
 vector<int> nums = {2, 3, 9, 12, 27, 36, 45, 57, 79, 97};
 cout << "Searching in: ";
 for (int n : nums) cout << n << " ";
 cout << endl;

 int x;
 cout << "Enter number to find: ";
 cin >> x;
 int res = binary_search(nums, x);

 if (res != -1) {
  cout << "Found at index " << res << endl;
 } else {
  cout << "Nope, not found :(" << endl;
 }

 return 0;
}
