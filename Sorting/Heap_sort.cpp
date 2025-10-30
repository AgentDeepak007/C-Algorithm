#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& lst, int n, int i) {
 // makes sure the tree with root i is a heap
 int largest = i;
 int left = 2 * i + 1;
 int right = 2 * i + 2;

 if (left < n && lst[left] > lst[largest])
  largest = left;
 if (right < n && lst[right] > lst[largest])
  largest = right;

 if (largest != i) {
  swap(lst[i], lst[largest]);
  heapify(lst, n, largest);
 }
}

vector<int> heap_sort(vector<int> lst) {
 // heap sort, turns list into heap then sorts it
 int n = lst.size();

 // build max heap
 for (int i = n/2 - 1; i >= 0; i--)
  heapify(lst, n, i);

 // pull elements one by one
 for (int i = n - 1; i > 0; i--) {
  swap(lst[0], lst[i]);
  heapify(lst, i, 0);
 }

 return lst;
}

int main() {
 vector<int> nums = {9,3,57,12,97,36,45,2,27,79};
 cout << "Before: ";
 for (int x : nums) cout << x << " ";
 cout << "\n";

 cout << "sorting...\n";

 vector<int> sorted_nums = heap_sort(nums);

 cout << "After : ";
 for (int x : sorted_nums) cout << x << " ";
 cout << "\n";
}
