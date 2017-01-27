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
