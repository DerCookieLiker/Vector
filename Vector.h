#pragma once
#include <iostream>

class Vector{

public:
    Vector(int size, const double elements[]);
    Vector(int size, const std::initializer_list<double> &elements);
    Vector(const Vector &v);
    ~Vector();

    void add(const Vector &v);
    void sub(const Vector &v);
    void mult(double multiply);

    double dotProduct(const Vector &v) const;

    Vector addAndReturn(const Vector &v) const;

    void setElement(int index, double value);
    double getElement(int index) const;

    Vector& operator=(const Vector& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Vector& v);

    bool equal(const Vector &v) const;
    void show() const;
private:
    const int size;
    double* elements;

    bool inRange(int index) const;
};
