#ifndef arraylist_hpp  // Include guard starts here
#define arraylist_hpp

#include <iostream>

class ArrayList {
  public:
    ArrayList();
    ArrayList(const size_t capacity);
    ~ArrayList();

    size_t size();
    size_t capacity();
    int& operator[](int i);
    void add(int value);
    int get(const int index);
    bool remove(int value);
    bool removeAt(const int index);
// didn't the question say to use protected instead of private? are we going to do the same here?
  protected:
    int* _array;
    size_t _size;
    size_t _capacity;
};

// what does endif do??
#endif /* arraylist_hpp */