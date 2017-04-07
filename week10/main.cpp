#include <iostream>

using namespace std;

int main() {
    
    // Example 1 - Simple
    cout << "Example 1" << endl << "----------" << endl;
    try {
        throw 123;
    } catch(int e){
        cout << "Error: " << e << endl;
    }

    // Example 2 - Catch else
    cout << endl << "Example 2" << endl << "----------" << endl;
    try {
        throw 123;
    } catch(char *c) {
        cout << "Catched 123!" << endl;
    } catch(...) {
        cout << "Catched something else!" << endl;
    }

    // Example 3 - Throw by value, catch by reference
    cout << endl << "Example 3" << endl << "----------" << endl;
    struct Person {
        int age;
    };
    Person person{-2};
    try{
        if(person.age < 0) {
            throw person;
        }
    }catch(Person& p) {
        cout << "Person age is negative!"<< endl;
        p.age = 0;
    }
    cout << "Person's new age: " << person.age << endl;
    // Reference: http://stackoverflow.com/questions/36738607/throw-exception-by-value-or-reference/36738778#36738778

    // Example 4 - MyException
    cout << endl << "Example 4" << endl << "----------" << endl;
    class MyException : public exception {
    public:
        const char* what() const noexcept {
            return "MyException::what() called!";
        };
    };
    try {
        throw MyException();
    } catch(MyException& e) {
        cout << e.what() << endl;
    }

    // Example 5 - Primitive types: no conversion
    cout << endl << "Example 5" << endl << "----------" << endl;
    try {
        throw 1;
    } catch(char c) {
        cout << "char exception!" << endl;
    } catch(...) {
        cout << "Unhandled type" << endl; 
    }

    // Example 6 - Non-Primitive types: slicing
    cout << endl << "Example 5" << endl << "----------" << endl;
    return 0;
}
