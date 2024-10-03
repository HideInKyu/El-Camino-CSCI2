#include "flexArray.hpp"

void FlexArray:: removeAt(int index){
  ArrayList::removeAt(index); // call removeAt of the superclass
  
  if (_size == _capacity){
    int* old = this->_array;
    this->capacity = _size;
    this->_array = new int[_capacity]();
    for (int i = 0; i < _size; i++){
      this->_array[i] = old[i];
    }
    delete[] old;
  }
}
