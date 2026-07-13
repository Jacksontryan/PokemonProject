//
// Created by jacksonryan on 6/24/26.
//

#ifndef POKEMONPROJECT_SMARTPOINTER_H
#define POKEMONPROJECT_SMARTPOINTER_H

#include <string>
#include <iostream>
#include <utility>

template <typename T>
class SmartPointer {

    //wrapped pointer
    T* ptr;

    //bool to check if the pointer is to be used as an array or not.
    //An array has a set size, whereas a regular pointer can access adjacent memory values stretching out just as long as a regular pointer can
    //If array = true, the destructor MUST call delete[] on ptr. If array = false, calling delete[] on ptr would crash the program and delete must be called instead
    bool array;

    bool reference;

    bool dynamic;

    //size of array, if array. If not array, size = 0
    size_t size;

    size_t totalElements;

    std::string name = "no name";

    //constructors

    SmartPointer() {

        std::cout << "Null Pointer Constructor Started" << std::endl;

        ptr = nullptr;
        array = false;
        size = 0;
        reference = false;
        dynamic = false;
        totalElements = 1;

        std::cout << "Null Pointer Constructed" << std::endl << std::endl;

    }

    SmartPointer(size_t size) {

        std::cout << "Array Constructor 1 Started" << std::endl;

        this->ptr = new T[size];
        this->size = size;
        this->array = true;
        this->reference = false;
        dynamic = false;
        totalElements = 0;

        std::cout << "Array Pointer Constructed" << std::endl << std::endl;

    }

    SmartPointer(T array[], size_t size, bool reference) {

        std::cout << "Array Constructor 2 started" << std::endl;

        this->ptr = new T[size];

        for (int i = 0; i < size; i++) {
            ptr[i] = array[i];
        }

        this->array = true;
        this->size = size;
        this->reference = false;
        dynamic = false;

        totalElements = 0;

        std::cout << "Array Pointer Constructed" << std::endl << std::endl;

    }

    SmartPointer(T& data, bool reference) {

        std::cout << "Reference Pointer Constructor Started" << std::endl;

        this->reference = reference;

        if (reference) {
            this->ptr = &data;
        }else {
            this->ptr = new T(data);
        }
        this->array = false;
        this->size = 0;
        dynamic = false;
        totalElements = 0;

        std::cout << this->size << std::endl;

        std::cout << "Reference Pointer Constructed" << std::endl << std::endl;

    }

    SmartPointer(T* data) {
        this->reference = false;
        this->ptr = data;
        this->array = false;
        this->size = 0;
        dynamic = false;
        totalElements = 0;
    }

    SmartPointer(bool dynamic) {
        this->reference = false;
        this->array = true;
        this->size = 1;
        this->dynamic = true;
        this->ptr = new T[1];
        totalElements = 1;
    }

public:

    SmartPointer(const SmartPointer<T>& other) {


        std::cout << "Copy Constructor Started" << std::endl;

        //this->clear();

        this->array = other.array;
        this->size = other.size;
        this->reference = other.reference;
        this->name = other.name;
        this->dynamic = other.dynamic;
        this->totalElements = other.totalElements;

        if (array) {
            this->ptr = static_cast<T*>(::operator new(sizeof(T) * size));
            for (size_t i = 0; i < other.size; i++) {
                new (&ptr[i]) T(other.ptr[i]);
            }
            this->reference = true;
        }else {
            if (reference) {
                this->ptr = other.ptr;
            }else {
                this->ptr = new T(*other.ptr);
            }
        }

        std::cout << "Copy constructor finished" << std::endl << std::endl;

    }

    static SmartPointer<T> nullPointer() {
        SmartPointer<T> output = SmartPointer<T>();
        output.setName("null pointer");
        return output;
    }

    static SmartPointer<T> nullPointer(const std::string &name) {
        SmartPointer<T> output = SmartPointer<T>();
        output.setName(name);
        return output;
    }

    static SmartPointer<T> arrayPointer(size_t size) {

        SmartPointer<T> output = SmartPointer<T>(size);
        output.setName("array pointer");
        return output;

    }

    static SmartPointer<T> arrayPointer(const std::string &name, size_t size) {

        SmartPointer<T> output = SmartPointer<T>(size);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> arrayPointer(T array[], size_t size) {

        SmartPointer<T> output = SmartPointer<T>(array, size, false);
        output.setName("array pointer");
        return output;

    }

    static SmartPointer<T> arrayPointer(const std::string &name, T array[], size_t size) {

        SmartPointer<T> output = SmartPointer<T>(array, size, false);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> newPointer(T data) {

        SmartPointer<T> output = SmartPointer<T>(data, false);
        output.setName("new pointer");
        return output;

    }

    static SmartPointer<T> newPointer(const std::string &name, T data) {

        SmartPointer<T> output = SmartPointer<T>(data, false);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> newPointer(T* data) {

        SmartPointer<T> output = SmartPointer<T>();
        output.setName("new pointer");
        output.ptr = data;
        return output;

    }

    static SmartPointer<T> newPointer(const std::string &name, T* data) {

        SmartPointer<T> output = SmartPointer<T>();
        output.setName(name);
        output.ptr = data;
        return output;

    }

    template <typename... Args>
    static SmartPointer<T> newPointer(Args&&... args) {
        SmartPointer<T> output = SmartPointer<T>(new T(std::forward<Args>(args)...));
        output.setName("new pointer");
        return output;
    }

    static SmartPointer<T> referencePointer(T& data) {

        SmartPointer<T> output = SmartPointer<T>(data, true);
        output.setName("reference pointer");
        return output;

    }

    static SmartPointer<T> referencePointer(const std::string &name, T& data) {

        SmartPointer<T> output = SmartPointer<T>(data, true);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> dynamicPointer() {

        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName("dynamic pointer");
        return output;

    }

    static SmartPointer<T> dynamicPointer(const std::string &name) {

        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> dynamicPointer(size_t initialSize) {

        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName("dynamic pointer");
        return output;

    }

    static SmartPointer<T> dynamicPointer(const std::string &name, size_t initialSize) {

        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName(name);
        return output;

    }

    static SmartPointer<T> dynamicPointer(T data[], size_t initialSize) {
        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName("dynamic pointer");
        return output;
    }

    static SmartPointer<T> dynamicPointer(const std::string &name, T data[], size_t initialSize) {
        SmartPointer<T> output = SmartPointer<T>(true);
        output.setName(name);
        return output;
    }

    //destructor

    ~SmartPointer() {

        std::cout << "Destructor started for value " << this->getName() << std::endl;

        this->clear();

        std::cout << "Destructor Finished Successfully" << std::endl;

    }

    std::string getName() {
        return name;
    }

    void setName(const std::string& n) {
        this->name = n;
    }

    //get method for reference of ptr

    T& get() {

        std::cout << "Getting data" << std::endl;

        if (ptr == nullptr) {
            std::cout << "Null pointer detected" << std::endl;
            throw std::runtime_error("Cannot get data from nullptr");
        }

        std::cout << "Getting data" << std::endl;

        return *ptr;
    }

    //delete method

    SmartPointer(SmartPointer<T>&& other) noexcept {

        //this->clear();

        this->ptr = other.ptr;
        this->array = other.array;
        this->reference = other.reference;
        this->size = other.size;
        this->name = std::move(other.name);
        this->dynamic = other.dynamic;

        other.ptr = nullptr;
        other.array = false;
        other.reference = false;
        other.dynamic = false;
        other.size = 0;
        other.totalElements = 0;

    }

    SmartPointer& operator=(SmartPointer<T>&& other) noexcept {
        if (this == &other) {
            return *this;
        }

        this->clear();

        this->ptr = other.ptr;
        this->array = other.array;
        this->reference = other.reference;
        this->size = other.size;
        this->name = std::move(other.name);
        this->dynamic = other.dynamic;

        other.ptr = nullptr;
        other.array = false;
        other.reference = false;
        other.size = 0;
        other.dynamic = false;

        return *this;
    }

    void clear() {
        if (array && ptr != nullptr && !reference) {
            std::cout << "Deleting[] pointer " << this->getName() << std::endl;
            delete [] ptr;
            std::cout << "pointer[] deleted" << std::endl;
        }else if (!reference && ptr != nullptr) {
            std::cout << "Deleting pointer " << this->getName() << std::endl;
            delete ptr;
            std::cout << "pointer deleted" << std::endl;
        }else if (array && reference && ptr != nullptr) {
            std::cout << "Deleting array pointer Path 2: " << this->getName() << std::endl;
            for (int i = 0; i < this->size; i++) {
                ptr[i].~T();
            }
            ::operator delete(ptr);
            std::cout << "Pointer deleted" <<std::endl;
        }

        ptr = nullptr;
        this->name = "no name";
        array = false;
        dynamic = false;
        reference = false;
        size = 0;

        std::cout << std::endl;

    }

    T& operator[](int pos) {

        if (size != 0 && (pos < 0 || pos >= size)) {
            std::cout << "Index out of bounds" << std::endl;
            return ptr[0];
        }

        return ptr[pos];
    }

    T& operator*() {

        if (ptr == nullptr) {
            return NULL;
        }

        return *ptr;
    }

    T* pointer() {
        return ptr;
    }

    void addFront(T& data) {

        if (!dynamic) {
            throw std::runtime_error("Cannot add front to non dynamic pointer");
        }

        if (totalElements == 0) {

            this->ptr[0] = data;
            ++totalElements;

        }else if (totalElements == size) {

            SmartPointer<T> temp = SmartPointer(*this);

            ++this->size;
            this->ptr = new T[this->size];

            this->ptr[0] = data;

            for (int i = 1; i < this->size; i++) {
                this->ptr[i] = temp.ptr[i-1];
            }

            ++this->totalElements;

        }else {

            for (int i = totalElements; i > 0; i--) {
                this->ptr[i] = this->ptr[i-1];
            }

            this->ptr[0] = data;

            ++totalElements;

        }

    }

    void addFront(T* data) {

        if (!dynamic) {
            throw std::runtime_error("Cannot add front to non dynamic pointer");
        }

        if (totalElements == 0) {

            this->ptr[0] = *data;
            ++totalElements;

        }else if (totalElements == size) {

            SmartPointer<T> temp = SmartPointer(*this);

            ++this->size;
            this->ptr = new T[this->size];

            this->ptr[0] = *data;

            for (int i = 1; i < this->size; i++) {
                this->ptr[i] = temp.ptr[i-1];
            }

            ++this->totalElements;

        }else {

            for (int i = totalElements; i > 0; i--) {
                this->ptr[i] = this->ptr[i-1];
            }

            this->ptr[0] = *data;

            ++totalElements;

        }

    }

    void addBack(T& data) {

        if (!dynamic) {
            throw std::runtime_error("Cannot add front to non dynamic pointer");
        }
        if (totalElements == 0) {
            this->ptr[0] = data;
            ++totalElements;
        }
        else if (totalElements == size) {

            SmartPointer<T> temp = SmartPointer(*this);

            ++this->size;
            this->ptr = new T[this->size];

            this->ptr[size - 1] = data;

            for (int i = 0; i < this->size - 1; i++) {
                this->ptr[i] = temp.ptr[i];
            }

            ++totalElements;

        }else {

            this->ptr[totalElements] = data;
            ++totalElements;

        }

    }

    void addBack(T* data) {

        if (!dynamic) {
            throw std::runtime_error("Cannot add front to non dynamic pointer");
        }
        if (totalElements == 0) {
            this->ptr[0] = *data;
            ++totalElements;
        }
        else if (totalElements == size) {

            SmartPointer<T> temp = SmartPointer(*this);

            ++this->size;
            this->ptr = new T[this->size];

            this->ptr[size - 1] = *data;

            for (int i = 0; i < this->size - 1; i++) {
                this->ptr[i] = temp.ptr[i];
            }

            ++totalElements;

        }else {

            this->ptr[totalElements] = *data;
            ++totalElements;

        }

    }

    [[nodiscard]] size_t getSize() const {
        return totalElements;
    }

    [[nodiscard]] size_t getCapacity() const {
        return size;
    }

    SmartPointer& operator=(SmartPointer const& other) {
        if (this == &other) {
            return *this;
        }
        //this->clear();

        this->array = other.array;
        this->size = other.size;
        this->name = other.name + " Copy";
        this->reference = other.reference;

        if (array) {
            this->ptr = static_cast<T*>(::operator new(sizeof(T) * other.size));;
            for (size_t i = 0; i < other.size; i++) {
                new (&this->ptr[i]) T(other.ptr[i]);
            }
            this->reference = true;
        }else {
            if (reference) {
                this->ptr = other.ptr;
            }else {
                this->ptr = new T(*other.ptr);
            }
        }

        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, SmartPointer<T>& p) {
        os << p.ptr;
        return os;
    }

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