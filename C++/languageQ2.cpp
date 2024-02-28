#include <iostream>

class Shape {
public:virtual double calculateArea()const =0;
    
};

class Circle : public Shape {
    private:
        double r;
    public:
        Circle(double ra):r(ra){}
        virtual double calculateArea()const override{
            return 3.1415*r*r;
        }
};
class Rectangle : public Shape {
    private:
        double chang;
        double kuan;
    public:
        Rectangle(double chang1,double kuan1):chang(chang1),kuan(kuan1){}
        virtual double calculateArea()const override{
            return chang*kuan;
        }
};

int main() {
    Circle shape1(6);
    Rectangle shape2(2,3);
    std::cout<<shape1.calculateArea()<<std::endl;
    std::cout<<shape2.calculateArea()<<std::endl;
    return 0;
}