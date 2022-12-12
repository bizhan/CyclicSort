#include <iostream>
#include <vector>
using  namespace std;

/*
We are given an array containing n objects. Each object, when created, was assigned a unique number from the range 1 to n based on their creation sequence. This means that the object with sequence number 3 was created just before the object with sequence number 4.

Write a function to sort the objects in-place on their creation sequence number in O(n)
O(n)
 and without using any extra space. For simplicity, let’s assume we are passed an integer array containing only the sequence numbers, though each number is actually an object.

Input: [3, 1, 5, 4, 2]
Output: [1, 2, 3, 4, 5]
  */

// iterate the array one number at a time, and if the current number we are iterating is not at the correct index, we swap it with the number at its correct index

void swap(vector<int>& arr, int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

vector<int> sort(vector<int> &arr){
  int i = 0;
  while(i < arr.size()) {
    int j = arr[i] - 1;
    if(arr[i] != arr[j])
      swap(arr, i, j);
    else
      i++;
  }
  return arr;
}


int main() {
  std::cout << "Hello World!\n";
  vector<int> arr = {2, 6, 4, 3, 1, 5};
  auto sortedAry = sort(arr);
  for(auto itr: sortedAry)
    cout<<itr<<endl;
}