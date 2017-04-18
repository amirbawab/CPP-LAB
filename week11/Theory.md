### Templates

#### Example 1
```C++
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

template<class T>
void detect(T t) {
    cout << "Type: " << typeid(t).name() << ". Value: " << t << endl;
}

int main() {
    // Specify template argument
    detect<int>(24);
    detect<float>(24.23);
    detect<int>(24.23);
    
    // Template argument deduction
    detect(24);
    detect(24l);
    detect(24.123);
    detect(24.123f);
    return 0;
}
```

#### Example 2
```C++
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Node {
    T1 data1;
    T2 data2;
public:
    void setData1(T1 data1);
    void setData2(T2 data2);
    T1 getData1() const{ return data1;}
    T2 getData2() const{ return data2;}
};

template <class T1, class T2>
void Node<T1,T2>::setData1(T1 data1) {
    this->data1 = data1;
}


template <class T1, class T2>
void Node<T1,T2>::setData2(T2 data2) {
    this->data2 = data2;
}

int main() {
    Node<int, float> node;
    node.setData1(123);
    node.setData2(321.123);
    cout << node.getData1() << endl;
    cout << node.getData2() << endl;
    return 0;
}
```
#### Difference between `template <class T>` and `template <typename T>`

> Stan Lippman talked about this here. I thought it was interesting.
> Summary: Stroustrup originally used class to specify types in templates to avoid introducing a new keyword. 
> Some in the committee worried that this overloading of the keyword led to confusion. Later, the committee 
> introduced a new keyword typename to resolve syntactic ambiguity, and decided to let it also be used to specify 
> template types to reduce confusion, but for backward compatibility, class kept its overloaded meaning.

Source: http://stackoverflow.com/a/213135/3435918
