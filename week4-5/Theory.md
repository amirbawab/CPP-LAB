
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

#### Block 4
Original code can be found at: https://www.tutorialspoint.com/cplusplus/cpp_polymorphism.htm

```
#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
		
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }
		
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape{
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main( ) {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
	
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
	
   // call triangle area.
   shape->area();
   
   return 0;
}
```

#### Comment 1
Output:
```
Parent class area
Parent class area
```
Early binding, decision at compile-time

#### Comment 2
What if we add `virutal` before the function `area` definition in the `Shape` class ?  
Output
```
Rectangle class area
Triangle class area
```
Late binding, decision at runtime

#### Comment 3
What if we change the definition of area function to: `virtual area()=0;` ?  
This is equivalent to abstract methods in Java.
