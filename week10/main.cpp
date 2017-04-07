#include <iostream>

using namespace std;

int main() {
    
    // Example 1 - Simple
    cout << "Example 1" << endl << "----------" << endl;
    try {
        throw 123;
        cout << "Won't be printed!" << endl;
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

    // Example 6.1 - Non-Primitive types: slicing
    cout << endl << "Example 6.1" << endl << "----------" << endl;
    class Parent {};
    class Child : public Parent{};
    try {
        throw Child();
    } catch(Parent &p) {
        cout << "Sliced to parent!" << endl;
    } catch(Child &c) {
        cout << "Child exception!" << endl;
    }

    // Example 6.2 - Non-Primitive types: catch correct order
    cout << endl << "Example 6.2" << endl << "----------" << endl;
    try {
        throw Child();
    } catch(Child& c) {
        cout << "Child exception!" << endl;
    } catch(Parent& p) {
        cout << "Parent exception!" << endl;
    }

    // Example 6.3 - Non-Primitive types: catch with pointers
    cout << endl << "Example 6.3" << endl << "----------" << endl;
    try {
        throw new Child();
    } catch(Parent* p) {
        cout << "Polymorphism!" << endl;
    } catch(Child* c) {
        cout << "Child pointer exception!" << endl;
    }

    // Example 7 - Unhandled
    cout << endl << "Example 7" << endl << "----------" << endl;
    try {
        // throw 1;
    } catch(char c) {
        cout << "char exception!" << endl;
    }
    cout << "'throw 1' terminates the program" << endl;

    // Example 8 - Nested try
    cout << endl << "Example 8" << endl << "----------" << endl;
    try {
        try {
            throw 11;
        } catch(int e) {
            cout << "Inner scope: " << e << endl;
            throw;
        }
    } catch(int e) {
        cout << "Outer scope: " << e << endl;
    }

    // Example 9 - Destructor executed before catch
    cout << endl << "Example 9" << endl << "----------" << endl;
    class Book {
    public:
        Book(){cout<<"Book created!"<<endl;}
        ~Book(){cout<<"Book destroyed!"<<endl;}
    };
    try{
        Book b;
        throw 1;
    }catch(int e){
        cout << "int exception!" << endl;
    }

    return 0; 
}
