#include "Functions.cpp"

using namespace toolkit;

int main() {
  int arr[] = {1,2,3,4,5};
  // length: sizeof(object) / sizeof(type)
  // - type = *arr, because arr's pointer (*arr) is passed into the function as argument
  int length = sizeof(arr) / sizeof(*arr);

  cout << "Array: " << arrToString(arr, length) << endl;

  cout << "Array: ";
  printIntArr(arr, length);

  // vector does not need length to be passed as parameter
  vector<int> v = {5,4,3,2,1};
  cout << "Vector: "; 
  printIntVector(v);

  return 0;
}