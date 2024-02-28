#include <iostream>
#include <string>
using namespace std;
class Person {
    private:
        string name;
        int age;
    public:
        Person(const std::string& personname,int personage):name(personname),age(personage){}
        void display()const{
            cout<<"名字是："<< name <<endl;
            cout<<"年龄是："<< age <<endl;
        }    
    
};
int main(){
    Person jack("jack",18);
    Person mike("mike",17);
    jack.display();
    mike.display();
    return 0;
}