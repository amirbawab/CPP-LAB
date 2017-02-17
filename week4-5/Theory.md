
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
