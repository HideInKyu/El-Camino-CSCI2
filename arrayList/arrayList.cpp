#include "arrayList.hpp"

// constructor
// is this constructing an array list with an initial capacity of 10?
ArrayList::ArrayList() : ArrayList(10){}

ArrayList::ArrayList(const size_t initialCapacity){
  this->_array = new int[initialCapacity]();
  this->_size = 0;
  this->_capacity = initialCapacity;
}

// deconstructor 
// what does the tilde do?
ArrayList::~ArrayList(){
  delete[] this-> _array;
}

size_t ArrayList::size(){
  return _size;
}

size_t ArrayList::capacity(){
  return _capacity;
}

// what is this and used for???
int& ArrayList::operator[](int index){
  return _array[index];
}

// functions

void ArrayList::add(int value){
  if (_size==_capacity){
    int* old=this->_array;

    // creates a new array twice the size
    this->_capacity=_size*2;
    this->_array=new int[_capacity]();

    // copy values
    for (int i=0; i<_size; i++){
      this->_array[i]= old[i];
    }
    // delete old array
    // why do we have to delete the old array? is it I thought because we aren't dynamically allocating an array it would just be garbage collected. I wonder if this is just for best practice to ensure we dont have any hanging pointers 
    delete old;
  }
  // hold up what type of wizard craft syntax is this?
  *(_array + _size) = value;
  _size++;
}

int ArrayList::get(const int index){
  return *(this-> _array + index);
}

bool ArrayList::remove(int value){
  for(int i = 0; i < _size; i++){
    if(_array[i] == value){
      return removeAt(i);
    }
  }
  return false;
}

bool ArrayList::removeAt(const int index){
  if(index < 0 || index >= _size) {
    return false;
  } 

  for(int i = index + 1; i < _size; i++){
    int curr = i-1;
    // uhh sure I'll logic it out in the answer portion.
    *(_array + curr) = *(_array + i);
  }
  // huh why do we do this?
  *(_array + (--_size)) = 0;
  return true;
}