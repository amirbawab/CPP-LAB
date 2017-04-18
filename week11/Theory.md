### Templates

Simple example:
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

#### Difference between `template <class T>` and `template <typename T>`

> Stan Lippman talked about this here. I thought it was interesting.
> Summary: Stroustrup originally used class to specify types in templates to avoid introducing a new keyword. 
> Some in the committee worried that this overloading of the keyword led to confusion. Later, the committee 
> introduced a new keyword typename to resolve syntactic ambiguity, and decided to let it also be used to specify 
> template types to reduce confusion, but for backward compatibility, class kept its overloaded meaning.

Source: http://stackoverflow.com/a/213135/3435918
