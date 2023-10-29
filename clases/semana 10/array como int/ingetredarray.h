//
// Created by Usuario on 27/10/2023.
//
#ifndef INGETREDARRAY_H
#define INGETREDARRAY_H

class IntegerArray;{
public:
    int *data; int size;
    IntegerArray(int size) {
        data = new int[size];
        this->size = size;
    }
    IntegerArray(IntegerArray &o) {
        data = new int[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }
    ~IntegerArray() {
        delete[] data;
    }
};

void a(int i);

int main() {
    IntegerArray; a(2);
    a.data[0] = 4; a.data[1] = 2;
    if (true) {
        IntegerArray; b = a;
    }
    std::cout << a.data[0] << std::endl; // 4
}


#endif