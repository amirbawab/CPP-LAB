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
