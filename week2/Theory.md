#### Casting

Block 1:
```
#include <iostream>

using namespace std;

int main() {
    double a = 1.1;
    double b = 1.9;
    int c = a + b;
    cout << c << endl; // 3
    return 0;
}
```

Block 2:
```
#include <iostream>

using namespace std;

int main() {
    double a = 1.1;
    double b = 1.9;
    double c = (int)a + b; // 2.9
    cout << c << endl;
    return 0;
}
```

Block 3:
```
#include <iostream>

using namespace std;

int main() {
    double a = 1.1;
    double b = 1.9;
    double c = (int)a + (int)b; // 2
    cout << c << endl;
    return 0;
}
```

#### Pointers

##### Block 1:
```
#include <iostream>

using namespace std;

int main() {
    double a = 1;
    double *c = &a;
    cout << "&a:" << &a << endl<< "a:" << a << endl << "c:" << c << endl << "&c:" << &c << endl;
    return 0;
}
```
##### Comment 1:
value of a and c should be the same

##### Block 2:
```
#include <iostream>

using namespace std;

int main() {
    double a = 1;
    cout << &*a << endl;
    return 0;
}
```

##### Comment 1:
Does not compile because a is not a pointer

#### Lifetime of variables

##### Static variables

The lifetime of function static variables begins the first time the program flow encounters the declaration and it ends at program termination. This means that the run-time must perform some book keeping in order to destruct it only if it was actually constructed.   
http://stackoverflow.com/questions/246564/what-is-the-lifetime-of-a-static-variable-in-a-c-function

Also destructor are executed in reverse order

#### Global variables

The lifetime of function global variables begins the first time the program flow encounters the declaration and it ends at program termination.

Destructor after static and are executed in reverse order (C++11)
