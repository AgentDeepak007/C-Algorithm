#include <iostream>
#include <vector>
using namespace std;

vector<int> insertion_sort(vector<int> lst) {
 // insertion sort, picks one element and puts it in right place
 for (int i = 1; i < lst.size(); i++) {
  int key = lst[i];
  int j = i - 1;

  // move stuff bigger than key one step ahead
  while (j >= 0 && lst[j] > key) {
   lst[j + 1] = lst[j];
   j--;
  }

  lst[j + 1] = key;

  // one pass done, moves on
 }

 return lst;
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int x : nums) cout << x << " ";
 cout << "\n";

 cout << "sorting...\n";

 vector<int> sorted_nums = insertion_sort(nums);

 cout << "After : ";
 for (int x : sorted_nums) cout << x << " ";
 cout << "\n";
}
