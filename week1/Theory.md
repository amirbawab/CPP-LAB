#### C++ vs Java

C++ extends C  
Java is strongly influenced by C++/C syntax

C++ compiler can compile C (most of the time)  
Java compiler is for Java

C++ write once and compile anywhere  
Java write once run anywhere

C++ runs as native executable machine code  
Java runs on a virtual machine

More information: https://en.wikipedia.org/wiki/Comparison_of_Java_and_C%2B%2B

#### C++ preprocessor
```
g++ -E <file>
```

#### C++ header files
- A header file is like an interface in Java.

#### C++ Compiling steps

**Preprocessor:** It works on one C++ source file at a time by replacing #include directives with the content of the respective files (which is usually just declarations), doing replacement of macros (#define), and selecting different portions of text depending of #if, #ifdef and #ifndef directives.

**Compiler:** Object files can refer to symbols that are not defined. This is the case when you use a declaration, and don't provide a definition for it. The compiler doesn't mind this, and will happily produce the object file as long as the source code is well-formed.

**Linker**: It links all the object files by replacing the references to undefined symbols with the correct addresses. Each of these symbols can be defined in other object files or in libraries. If they are defined in libraries other than the standard library, you need to tell the linker about them.

More information: http://stackoverflow.com/a/6264256/3435918

#### Block 1

```
#include "iostream"
#define ADD 1+2
int main() {
    std::cout << ADD * ADD << std::endl;
    return 1;
}
```

##### Comment 1
The `include` can be of the following forms:  
`#include <iostream>` (1) or `#include "my-file.h"` (2)  
(1) searches in default paths plus others defined manually (e.g. Using `-I` flag)  
(2) searches in the project. If not found, goes to (1)

##### Comment 2
The output of this program would be: 5  
*Try `g++ -E <file.cpp>`*

#### Block 2
```
int main() {
    return 3;
}
```

##### Comment 1
The return value is very important, especially for scripting (e.g. BASH, Python etc...).
```
./a.out
RET="$?"

if [[ $RET -eq 3 ]]
then
    echo "File returned 3"
else
    echo "File did not return 3"
fi
```
