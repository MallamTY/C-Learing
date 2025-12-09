#ifndef SWAPPER_H
#define SWAPPER_H

#include <iostream>

template<class T>

class Swapper {
    private:
        T first;
        T second;
        
    public:
        Swapper(T first, T second);
        void swap();
        T getFirst() const;
        T getSecond() const;
        T getSmaller(T first, T second) const;
};

template <class T>
Swapper<T>::Swapper(T first, T second) : first(first), second(second) {};

template <class T>
void Swapper<T>::swap() {
    T temp = first;
    first = second;
    second = temp;
}

template <class T>
T Swapper<T>::getFirst() const {
    return first;
};

template <class T>
T Swapper<T>::getSecond() const {
    return second;
};

template <class T>
T Swapper<T>::getSmaller(T first, T second) const {
    return (first < second) ? first : second;
};
#endif