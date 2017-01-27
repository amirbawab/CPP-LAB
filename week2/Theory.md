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

```
| add1 | val1 |
| add2 | val2 |
| add3 | val3 |
| add4 | val4 |
...
```

If a type has `*`, then the variable value contains values of the first column. If a not, then it's the second column.

If the variable is of type pointer to "something", then we can obtain its actual value its pointing to using `*`. If the variable is not of type pointer to "something", then we can obtain its address holding it using `&`.


