#include "arraylist.hpp"

//constructor
ArrayList::ArrayList() : ArrayList(10){}

// this is setting the _array _size and _capacity
ArrayList::ArrayList(const size_t initialCapacity){
  this->_array = new int[initialCapacity]();
  this->_size = 0;
  this->_capacity = initialCapacity;
}

//deconstructor 
ArrayList::~ArrayList(){
  delete[] this->_array;
}

size_t ArrayList::size(){
  return _size;
}

size_t ArrayList::capacity(){
  return _capacity
}

int& ArrayList::operator[](int index){
  return _array[index];
}

//functions
void ArrayList::add(int value){
  if (_size==_capacity){
    int* old=this->_array;
    // creates a new array twice the size
    this->_capacity=_size*2;
    this->_array=new int[_capacity]();

    //copy values
    for(int i=0; i<_size; i++){
      this->_array[i]=old[i];
    }
    delete[old];
  }
}