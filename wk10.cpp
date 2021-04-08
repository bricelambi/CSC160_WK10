
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int find_factorial(int n) {
  if (n <= 1) {
    return n;
  }
  return n * find_factorial(n-1);
}

int fib(int n) {
  // cout << "fib(" << n << ")" << endl;
  if (n <= 1) {
    // cout << "terminating because n is " << n << endl;
    return n;
  }
  // cout << "calling fib " << n-1 << ", " << n-2 << endl;
  return fib(n-1) + fib(n-2);
}

int recursive_find_num(vector<int> data, int target, int i) {
  if (i >= data.size()) {
    return -1;
  }
  if (data[i] == target) {
    return i;
  }
  return recursive_find_num(data, target, i+1);
}

int find_num(vector<int> data, int target) {
  for (int i = 0; i < data.size(); i++) {
    if (data[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {


  // int f = find_factorial(5);
  // cout << f << endl;

  srand (time(NULL));

  vector<int> numbers;
  for (int i = 0; i < 20; i++) {
    // cout << fib(i) << endl;
    int r = rand() % 10 + 1;
    // cout << r << endl;
    numbers.push_back(r);
  }
  
  cout << recursive_find_num(numbers, 3, 0) << endl;
  // cout << find_num(numbers, 3) << endl;

}