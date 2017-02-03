### Constructor & Destructor

##### Person.h
```
class Person{
public:
    Person(int id);
    ~Person();
private:
    int id;
};
```

##### Person.cpp
```
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(int id) {
    this->id = id;
    cout << "Person: " << id << " created!" << endl; 
}

Person::~Person() {
    cout << "Person: " << id << " destroyed!" << endl; 
}
```

##### main.cpp
```
#include <iostream>
#include "Person.h"

void f1() {
    Person p(0);
}

Person f2() {
    return Person(2);
}

Person* f3() {
    return new Person(3);
}

Person& f4(Person &p) {
    return p;
}

Person g1(-2);

int main(int argc, char *argv[]) {

    // Create local in f1
    f1();

    // Local
    Person p1(1);

    // Return local copy
    Person p2 = f2();

    // Return pointer
    Person *p3 = f3();

    // Return reference
    Person tmp = Person(4);
    Person &p4 = f4(tmp);

    static Person p5(5);

    // Delete pointer
    delete p3;
    return 0;
}

Person g2(-1);
```

#### Output
```
g++ main.cpp Person.cpp -o run && ./run 

Person: -2 created!
Person: -1 created!
Person: 0 created!
Person: 0 destroyed!
Person: 1 created!
Person: 2 created!
Person: 3 created!
Person: 4 created!
Person: 5 created!
Person: 3 destroyed!
Person: 4 destroyed!
Person: 2 destroyed!
Person: 1 destroyed!
Person: 5 destroyed!
Person: -1 destroyed!
Person: -2 destroyed!
```

### Friend member
```
#include <iostream>

class Person {
public:
    Person(int age) : age(age) {}
    friend std::ostream& operator<<(std::ostream& stream, const Person &p);
private:
    int age;
};

std::ostream& operator<<(std::ostream& stream, const Person &p) {
    stream << "Age: " << p.age;
    return stream;
}

int main() {
    Person p1(3);
    std::cout << p1 << std::endl;
    return 0;
}
```

#### Output
```
Age: 3
```
