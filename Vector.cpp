#include "Vector.h"

Vector::Vector(int size, const double elements[]) : size(size){
    this->elements = new double[size];

    for(int i = 0; i < size; i++){
        this->elements[i] = elements[i];
    }
}
Vector::Vector(int size, const std::initializer_list<double> &elements) : size(size){
    this->elements = new double[size];

    for(int i = 0; i < size; i++){
        this->elements[i] = *(elements.begin() + i);
    }
}
Vector::Vector(const Vector &v) : size(v.size){
    this->elements = new double[v.size];

    for(int i = 0; i < v.size; i++){
        this->elements[i] = v.elements[i];
    }

}
Vector::~Vector(){
    delete [] this->elements;
}
void Vector::add(const Vector &v){
    if(this->size > v.size) return;
    for(int i = 0; i < this->size; i++){
        this->elements[i] += v.elements[i];
    }
}
void Vector::sub(const Vector &v){
    if(this->size > v.size) return;

    for(int i = 0; i < this->size; i++){
        this->elements[i] -= v.elements[i];
    }
}
void Vector::mult(double multiply){
    for(int i = 0; i < this->size; i++){
        this->elements[i] *= multiply;
    }
}

double Vector::dotProduct(const Vector &v) const{
    if(this->size > v.size) return -1;
    double sum;

    for(int i = 0; i < this->size; i++){
        sum += this->elements[i] * v.elements[i];
    }

    return sum;
}

Vector Vector::addAndReturn(const Vector &v) const{
    if(this->size > v.size) return Vector(this->size, this->elements);

    Vector retVal(this->size, this->elements);

    retVal.add(v);

    return retVal;
}

void Vector::setElement(int index, double value) {
    if(this->inRange(index)) return;
    this->elements[index] = value;
}

double Vector::getElement(int index) const{
    if(this->inRange(index)) return -1;
    return this->elements[index];
}

bool Vector::equal(const Vector &v) const{
    if(this->size != v.size) return false;

    for(int i = 0; i < this->size; i++){
        if(this->elements[i] != v.elements[i])
            return false;
    }

    return true;
}
void Vector::show() const{
    std::cout << "[ ";
    for(int i = 0; i < this->size; i++){
        std::cout << this->elements[i] << "; ";
    }
    std::cout << "]";
}

bool Vector::inRange(int index) const{
    return (index < 0 || index > this->size - 1);
}
