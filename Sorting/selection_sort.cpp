#include <iostream>
#include <vector>
using namespace std;

vector<int> selection_sort(vector<int> lst) {
 // selection sort, finds the smallest each time and puts it front
 for (int i = 0; i < lst.size(); i++) {
  int min_index = i;
  
  for (int j = i + 1; j < lst.size(); j++) {
   if (lst[j] < lst[min_index]) {
    min_index = j;
   }
  }

  // swap the found one with current
  int temp = lst[i];
  lst[i] = lst[min_index];
  lst[min_index] = temp;
 
  // one pass done, moves on
 }
 return lst;
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int n : nums) cout << n << " ";
 cout << endl;
 cout << "sorting..." << endl;

 vector<int> sorted_nums = selection_sort(nums);

 cout << "After : ";
 for (int n : sorted_nums) cout << n << " ";
 cout << endl;
}
