#include <iostream>
#include "Vector.h"

using namespace std;

void testVectorAdd(const Vector &v1, const Vector &v2, const Vector &xpt);
void testVectorSub(const Vector &v1, const Vector &v2, const Vector &xpt);
void testVectorMult(const Vector &v1, const double &multiply, const Vector &xpt);
void testVectorDotProduct(const Vector &v1, const Vector &v2, const double &xpt);
void testVectorAddAndReturn(const Vector &v1, const Vector &v2, const Vector &xpt);

int main(){


    Vector v1(3, {1, 2, 3});
    Vector v2(1, {2});

    v1 = v1;
    std::cout << v1;
    /*
    testVectorAdd(Vector(3, {2.5, 5, 42}), Vector(3, {3.5, 5, -10}), Vector(3, {6, 10, 32}));
    testVectorAdd(Vector(2, {-1, 2}), Vector(3, {1, 3, 20}), Vector(2, {0, 5}));
    testVectorAdd(Vector(3, {4, 0, 42}), Vector(2, {3.5, 5}), Vector(3, {4, 0, 42}));
    std::cout << std::endl;
    testVectorSub(Vector(3, {2.5, 5, 42}), Vector(3, {3.5, 5, -10}), Vector(3, {-1, 0, 52}));
    testVectorSub(Vector(2, {-1, 2}), Vector(3, {1, 3, 20}), Vector(2, {-2, -1}));
    testVectorSub(Vector(3, {4, 0, 42}), Vector(2, {3.5, 5}), Vector(3, {4, 0, 42}));
    std::cout << std::endl;
    testVectorMult(Vector(3, {2, 3, 4}), 2, Vector(3, {4, 6, 8}));
    testVectorMult(Vector(2, {3, 12}), 3, Vector(2, {9, 36}));
    testVectorMult(Vector(1, {3}), 2, Vector(1, {6}));
    std::cout << std::endl;
    testVectorDotProduct(Vector(3, {2, 3, 4}), Vector(3, {2.4, 2, 4}), 26.8);
    testVectorDotProduct(Vector(2, {1, 5}), Vector(3, {6, 2.5, 4}), 18.5);
    testVectorDotProduct(Vector(3, {2, 3, 4}), Vector(2, {2.4, 2}), -1);
    std::cout << std::endl;
    testVectorAddAndReturn(Vector(3, {2.5, 5, 42}), Vector(3, {3.5, 5, -10}), Vector(3, {6, 10, 32}));
    testVectorAddAndReturn(Vector(2, {-1, 2}), Vector(3, {1, 3, 20}), Vector(2, {0, 5}));
    testVectorAddAndReturn(Vector(3, {4, 0, 42}), Vector(2, {3.5, 5}), Vector(3, {4, 0, 42}));
    */
}
void testVectorAdd(const Vector &v1, const Vector &v2, const Vector &xpt){
    std::cout << "Add ";
    v1.show();
    std::cout << " and ";
    v2.show();
    Vector result(v1);
    result.add(v2);
    std::cout << std::endl << "Result:   ";
    result.show();
    std::cout << std::endl << "Expected: ";
    xpt.show();
    std::cout << std::endl << "----------------------------------------" << std::endl;

}
void testVectorSub(const Vector &v1, const Vector &v2, const Vector &xpt) {

    std::cout << "Sub ";
    v1.show();
    std::cout << " and ";
    v2.show();
    Vector result(v1);
    result.sub(v2);
    std::cout << std::endl << "Result:   ";
    result.show();
    std::cout << std::endl << "Expected: ";
    xpt.show();
    std::cout << std::endl << "----------------------------------------" << std::endl;
}
void testVectorMult(const Vector &v1, const double &multiply, const Vector &xpt) {
    std::cout << "Multiply ";
    v1.show();
    std::cout << " and " << multiply;
    Vector result(v1);
    result.mult(multiply);
    std::cout << std::endl << "Result:   ";
    result.show();
    std::cout << std::endl << "Expected: ";
    xpt.show();
    std::cout << std::endl << "----------------------------------------" << std::endl;
}
void testVectorDotProduct(const Vector &v1, const Vector &v2, const double &xpt){
    std::cout << "Dot Product ";
    v1.show();
    std::cout << " and ";
    v2.show();
    double sum = v1.dotProduct(v2);
    std::cout << std::endl << "Result:   " << sum;
    std::cout << std::endl << "Expected: " << xpt;
    std::cout << std::endl << "----------------------------------------" << std::endl;
}
void testVectorAddAndReturn(const Vector &v1, const Vector &v2, const Vector &xpt){
std::cout << "AddAndReturn ";
    v1.show();
    std::cout << " and ";
    v2.show();
    Vector result = v1.addAndReturn(v2);
    std::cout << std::endl << "Result:   ";
    result.show();
    std::cout << std::endl << "Expected: ";
    xpt.show();
    std::cout << std::endl << "----------------------------------------" << std::endl;
}
