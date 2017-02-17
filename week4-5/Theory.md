
#### Block 1
```
#include <iostream>
#include <vector>

using namespace std;

void manip(int  array[], vector<int> vector) {
    array[0] = 10; 
    vector[0] = 10; 
}

int main() {

    int array[10];
    vector<int> vector(10);
    manip(array, vector);
    cout << array[0] << endl;
    cout << vector[0] << endl;
    return 0;
}
```

##### Comment 1
The output will be:
```
10
0
```
Arrays cannot be passed by value (copy). However, you can pass objects by value (like a vector).

Reference: http://stackoverflow.com/questions/7454990/why-cant-we-pass-arrays-to-function-by-value


### Block 2

```
#include <iostream>
#include <vector>

using namespace std;

void print(int array[][]) {
    cout << array[0][0] << endl;
}

int main() {

    int array[10][10];
    print(array);

    return 0;
}
```

#### Comment 1

This does not compile because the outer dimension should always be specified when an array is delcared as parameter in a function.

Reference: http://stackoverflow.com/questions/17662507/c-array-as-parameter-why-do-you-only-need-to-specify-outer-dimension

### Block 3
```
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main() {
    cout << setw(10) << 1.0 
        << setw(10) <<  2.0 
        << setw(10) <<  3.0 
        << endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << setw(10) << 1.0 
        << setw(10) <<  2.0 
        << setw(10) <<  3.0 
        << endl;
    return 0;
}
```

#### Comment 1
Output:
```
         1         2         3
       1.0       2.0       3.0
```

#### Comment 2
setw(#):  Sets the field width to be used on output operations.  
ios::showpoint: Show decimal point (this will show the point)  
ios::fixed: Use fixed floating-point notation  
ios::precision: Set decimal precision  
