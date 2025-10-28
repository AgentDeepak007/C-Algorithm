#include <iostream>
#include <vector>
using namespace std;

vector<int> bubble_sort(vector<int> lst) {
 // bubble sort, keeps swapping untill list is sorted
 int n = lst.size();
 
 for (int i = 0; i < n - 1; i++) {
  for (int j = 0; j < n - i - 1; j++) {
   if (lst[j] > lst[j + 1]) {
    // swap em
    int temp = lst[j];
    lst[j] = lst[j + 1];
    lst[j + 1] = temp;
   }
  }
 
  // pass done
  // decrases range each time
 }
 
 return lst;
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int n : nums) cout << n << " ";
 cout << endl;
 cout << "sorting..." << endl;

 vector<int> sorted_nums = bubble_sort(nums);

 cout << "After : ";
 for (int n : sorted_nums) cout << n << " ";
 cout << endl;
}
