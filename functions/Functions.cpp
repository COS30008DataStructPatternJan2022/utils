/* 
  Ref: https://docs.microsoft.com/en-us/cpp/cpp/functions-cpp?view=msvc-160
  - Why passing array length as a parameter: 
    https://stackoverflow.com/questions/53061454/why-do-we-specify-arrays-size-as-a-parameter-when-passing-to-function-in-c/53061528
  - Why does function definition order matter in C/C++?
    https://stackoverflow.com/questions/4757705/why-do-functions-need-to-be-declared-before-they-are-used
 */
#pragma(once)

#include <iostream>
// for vector
#include <vector>
// for converting int[] to string
#include <sstream>
// for list
#include <list>

using namespace std;

/* A shared space for a set of utility (commonly-used) functions 
  Usage: 
  - include this file in the header (using relative path)
  - add this code statement "using namespace toolkit"  before the code block that uses it
  - invoke functions in the namespace as if they were defined locally
 */
namespace toolkit {
  // array needs to be accompanied by a length parameter
  // because array is passed in as pointer, static info (e.g. length) is lost
  void printIntArr(int* arr, int length) {
    cout << "[";
    for (int i = 0 ; i < length; i++) {
      cout << arr[i] << ((i < length-1) ? "," : "");
    }
    cout << "]";
    cout << endl;
  }

  string arrToString(int*arr, int length) {
    ostringstream os;
    os << "[";
    for (int i = 0 ; i < length; i++) {
      os << arr[i] << ((i < length-1) ? "," : "");
    }
    os << "]";
    string str(os.str());

    return str;
  }

  void printIntVector(vector<int> v) {
    cout << "[";
    int sz = v.size();
    int idx = 0;
    for (int i : v) {
      cout << i << ((idx < sz - 1) ? "," : "");
      idx++;
    }
    cout << "]";
    cout << endl;
  }

  void printList(list<int> v) {
    cout << "{";
    int sz = v.size();
    int idx = 0;
    for (auto i : v) {
      cout << i << ((idx < sz - 1) ? "," : "");
      idx++;
    }
    cout << "}";
    cout << endl;
  }
}