#include <iostream>


class Base{
    public:
        virtual void say_hello() const{
            std::cout << "hello - Base"<<std::endl;
        }
        virtual ~Base(){

        }
};


class Derived: public Base{
    public:
        virtual void say_hello () const override {
            std::cout << "Derived "<<std::endl;
        }
        virtual ~Derived(){
            
        }
};

int main(){
    Base *p1 = new Base(); // Base::say_hello
    p1->say_hello();

    Derived *d1 = new Derived();  // Derived::say_hello
    d1->say_hello();

    Base *p3 = new Derived(); // Base::say_hello ?? I wanted Derived::say_hello()
    p3->say_hello();
}