
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool find( const string &myString, const string &subString )
{
  if ( myString.substr( 0, subString.size() ) == subString ) {
    return true;
  }
  if (subString.size() >= myString.size()) {
    return false;
  }
  return find(myString.substr(1), subString);
}


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

  cout << find("abcdef", "ce") << endl;
  cout << find("abcdef", "cde") << endl;
  cout << find("this is my string", "my") << endl;
  cout << find("this is my string", "sting") << endl;

  srand (time(NULL)); //seed random number generator

  vector<int> numbers;
  for (int i = 0; i < 20; i++) {
    // cout << fib(i) << endl;
    int rr = rand();
    int r = rr % 10 + 1; //get random number between 1 and 10
    // cout << r << endl;
    numbers.push_back(r);

    cout << rr << ", " << r << ", " << r/3 << ", " << (r % 3) << endl;
  }

  // cout << recursive_find_num(numbers, 3, 0) << endl;
  // cout << find_num(numbers, 3) << endl;

}