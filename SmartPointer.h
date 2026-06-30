//
// Created by jacksonryan on 6/24/26.
//

#ifndef POKEMONPROJECT_SMARTPOINTER_H
#define POKEMONPROJECT_SMARTPOINTER_H

#include <string>

template <typename T>
class SmartPointer {

    //wrapped pointer
    T* ptr;

    //bool to check if the pointer is to be used as an array or not.
    //An array has a set size, whereas a regular pointer can access adjacent memory values stretching out just as long as a regular pointer can
    //If array = true, the destructor MUST call delete[] on ptr. If array = false, calling delete[] on ptr would crash the program and delete must be called instead
    bool array;

    bool reference;

    //size of array, if array. If not array, size = 0
    size_t size;

    //constructors

    SmartPointer() {

        ptr = nullptr;
        array = false;
        size = 0;
        reference = false;

    }

    SmartPointer(size_t size) {

        std::cout << "Option 1 triggered" << std::endl;

        this->ptr = new T[size];
        this->size = size;
        this->array = true;
        this->reference = false;

    }

    SmartPointer(T array[], size_t size, bool reference) {

        std::cout << "Option 2 triggered" << std::endl;

        this->ptr = new T[size];

        for (int i = 0; i < size; i++) {
            ptr[i] = array[i];
        }

        this->array = true;
        this->size = size;
        this->reference = false;

    }

    SmartPointer(T& data, bool reference) {

        std::cout << "Constructor started" << std::endl;

        this->reference = reference;

        if (reference) {
            this->ptr = &data;
        }else {
            this->ptr = new T(data);
        }
        this->array = false;
        this->size = 0;

        std::cout << this->size << std::endl;

    }

public:


    static SmartPointer<T> nullPointer() {

        SmartPointer<T> output = SmartPointer<T>();
        return output;

    }

    static SmartPointer<T> arrayPointer(size_t size) {

        SmartPointer<T> output = SmartPointer<T>(size);
        return output;

    }

    static SmartPointer<T> arrayPointer(T array[], size_t size) {

        SmartPointer<T> output = SmartPointer<T>(array, size, false);
        return output;

    }

    static SmartPointer<T> newPointer(T data) {

        SmartPointer<T> output = SmartPointer<T>(data, false);
        return output;

    }

    static SmartPointer<T> referencePointer(T& data) {

        SmartPointer<T> output = SmartPointer<T>(data, true);
        return output;

    }

    //destructor

    ~SmartPointer() {

        //std::cout << "Destructor started for value " << this->get() << std::endl;

        this->clear();

        std::cout << "Destructor Finished Successfully" << std::endl;

    }

    //get method for reference of ptr

    T get() {

        std::cout << "Getting data" << std::endl;

        if (ptr == nullptr) {
            throw std::runtime_error("Cannot get data from nullptr");
        }

        return *ptr;
    }

    //delete method

    void clear() {
        if (array && ptr != nullptr) {
            delete [] ptr;
        }else if (!reference) {
            delete ptr;
        }

        ptr = nullptr;
        array = false;
        reference = false;
        size = 0;
    }

    T& operator[](int pos) {

        if (size != 0 && (pos < 0 || pos >= size)) {
            std::cout << "Index out of bounds" << std::endl;
            return ptr[0];
        }

        return ptr[pos];
    }

    T operator*() {

        if (ptr == nullptr) {
            return NULL;
        }

        return *ptr;
    }

    [[nodiscard]] size_t getSize() const {
        return size;
    }

    SmartPointer& operator=(SmartPointer const& other) {
        if (this == &other) {
            return *this;
        }
        this->clear();
        this->ptr = other.ptr;
        this->array = other.array;
        this->size = other.size;
        this->reference = other.reference;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, SmartPointer<T>& p) {
        os << p.ptr;
        return os;
    }

    /*

    SmartPointer operator+(T* other) {
        SmartPointer output = SmartPointer(&other);
        return ptr + other;
    }

    void operator++() {
         ++ptr;
    }

    void operator+=(T* other) {
        ptr += other;
    }

    T* operator+(int x) {
        return ptr + x;
    }

    T* operator-(T* other) {
        return ptr - other;
    }

    void operator--() {
        --ptr;
    }

    T* operator-(int x) {
        return ptr - x;
    }

    void operator-=(T* other) {
        ptr -= other;
    }
    */

    bool operator>(SmartPointer<T> other) {
        return ptr > other.ptr;
    }

    bool operator>(T* other) {
        return ptr > other;
    }

    bool operator<(SmartPointer<T> other) {
        return ptr < other.ptr;
    }

    bool operator<(T* other) {
        return ptr < other;
    }

    bool operator>=(SmartPointer<T> other) {
        return ptr >= other.ptr;
    }

    bool operator>=(T* other) {
        return ptr >= other;
    }

    bool operator<=(SmartPointer<T> other) {
        return ptr <= other.ptr;
    }

    bool operator<=(T* other) {
        return ptr <= other;
    }

    bool operator==(SmartPointer<T> other) {
        return ptr == other.ptr;
    }

    bool operator==(T* other) {
        return ptr == other;
    }

    bool operator!=(SmartPointer<T> other) {
        return ptr != other.ptr;
    }

    bool operator!=(T* other) {
        return ptr != other;
    }

};

#endif //POKEMONPROJECT_SMARTPOINTER_H