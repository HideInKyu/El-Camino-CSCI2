#include <iostream>
using namespace std;
#include "arrayList.hpp"

void print(const size_t size, const size_t capacity);

int main() {
  // create array list;
  ArrayList list;
  print(list.size(), list.capacity());

  // add 5
  list.add(5);
  print(list.size(), list.capacity());

  // add 11-20
  for (int i = 1; i <= 10; i++)
    list.add(10 + i);
  print(list.size(), list.capacity());

  // set00 oat index 2 
  list[2] = 99;

  // output all elements
  for (int i = 0; i < list.size(); i++){
    cout << list[i] << " ";
  }
  cout << endl;
}

void print(const size_t size, const size_t capacity){
  cout << "size: " << size << ", capacity: " << capacity << endl;
}