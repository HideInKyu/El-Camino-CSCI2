#include <iostream>
#include <stdio.h>

class ArrayList {
  public:
    ArrayList();
    ArrayList(const size_t capacity);
    ~ArrayList();

    size_t size();
    size_t capacity();
    int& operator[](int i);
    void add(int value);
    bool remove(int value);
    bool removeAt(const int index);

  private:
    int* _array;
    size_t _size;
    size_t _capacity;
};

#endif /*arraylist_hpp*/