# CPP Modules - Learning Project

A comprehensive C++ learning project covering fundamental to advanced programming concepts. This project is structured as a series of modules (CPP00 through CPP09), each focusing on specific C++ topics and best practices.

## 📋 Project Overview

This project demonstrates proficiency in modern C++ programming, including object-oriented design, memory management, polymorphism, exception handling, templates, and the Standard Template Library (STL). Each module builds upon previous knowledge with increasingly complex concepts.

## 📁 Project Structure

```
CPP/
├── CPP00/          # Namespace, class basics, I/O
├── CPP01/          # Memory allocation, pointers, file I/O
├── CPP02/          # Ad-hoc polymorphism, operator overloading
├── CPP03/          # Inheritance
├── CPP04/          # Subtype polymorphism, abstract classes
├── CPP05/          # Exception handling, form validation
├── CPP06/          # Type casting (static, dynamic, reinterpret, const)
├── CPP07/          # Templates (functions and classes)
├── CPP08/          # Templated containers, iterators
└── CPP09/          # STL containers and algorithms
```

## 📚 Module Descriptions

### CPP00 - Namespace & Class Basics
- Introduction to C++ syntax and conventions
- Using namespaces to organize code
- Basic class design and encapsulation
- **Exercises:** Megaphone, Phone Book application

### CPP01 - Memory Management & Pointers
- Dynamic memory allocation (new/delete)
- Pointer arithmetic and references
- File I/O operations
- Object lifecycle management

### CPP02 - Ad-hoc Polymorphism
- Operator overloading
- Fixed-point number arithmetic
- Copy constructor and assignment operator
- Bitwise operations

### CPP03 - Inheritance
- Class hierarchy and inheritance relationships
- Constructor/Destructor call chains
- Member access and visibility
- Multiple inheritance patterns

### CPP04 - Subtype Polymorphism
- Virtual functions and polymorphism
- Abstract base classes
- Method overriding
- Dynamic dispatch

### CPP05 - Exception Handling
- Try-catch-throw mechanism
- Custom exceptions
- Form validation with exception-based error handling
- Bureaucrat and Form system design

### CPP06 - Type Casting
- Static casting for compile-time conversions
- Dynamic casting for runtime type checking
- Reinterpret casting for low-level conversions
- Const casting semantics

### CPP07 - Templates
- Function templates with template parameters
- Class templates and instantiation
- Template specialization
- Generic programming patterns

### CPP08 - Templated Containers
- Implementing custom container templates
- Iterator patterns
- Template method patterns
- Generic algorithms

### CPP09 - STL Containers
- Standard containers (vector, list, map, set)
- Container algorithms and operations
- STL best practices
- Real-world problem solving with STL

## 🚀 Getting Started

### Prerequisites
- **Compiler:** GCC 7.0+ or Clang with C++98 support
- **Build Tool:** Make
- **OS:** Linux/Unix (macOS, Windows with WSL supported)

### Compilation & Execution

Navigate to any exercise directory and compile:
```bash
cd CPP<module>/ex<number>
make
./a.out
```

To clean build artifacts:
```bash
make clean      # Remove object files
make fclean     # Remove all generated files
make re         # Clean and rebuild
```

### Example Usage

```bash
# Navigate to a module
cd CPP00/ex00

# Compile
make

# Run
./a.out "text to convert"
```

## 🛠️ Building Individual Modules

Each exercise contains a `Makefile` configured for easy compilation:

```bash
# Compile specific exercise
cd CPP03/ex02
make

# Run the compiled program
./a.out

# Clean up
make clean
```

## 📖 Coding Standards

This project adheres to C++ best practices and the 42 School C++ norm:

- **Style:** Orthodox Object-Oriented Programming (OOP)
- **Standard:** C++98 (with some C++11 features in later modules)
- **Memory:** Manual memory management with RAII principles
- **Naming:** camelCase for members, PascalCase for classes
- **const-correctness:** Proper use of const qualifiers

## 🧪 Testing

Each module includes test cases in `main.cpp` to verify functionality:

```bash
cd CPP04/ex01
make
./a.out  # Run tests
```

Check the output to verify correct behavior and polymorphism implementation.

## 📝 Key Concepts Covered

| Concept | Module | Details |
|---------|--------|---------|
| Classes & Encapsulation | CPP00 | Basic OOP principles |
| Memory Management | CPP01 | new/delete, pointers |
| Operator Overloading | CPP02 | Custom operators |
| Inheritance | CPP03 | Class hierarchies |
| Polymorphism | CPP04 | Virtual functions, abstract classes |
| Exceptions | CPP05 | Error handling patterns |
| Type Casting | CPP06 | Safe type conversions |
| Templates | CPP07 | Generic programming |
| Containers | CPP08-09 | STL and custom implementations |

## 🔍 File Organization

Each exercise typically contains:
- `.hpp` - Header files with class declarations
- `.cpp` - Implementation files
- `main.cpp` - Test/demonstration code
- `Makefile` - Build configuration

## 💡 Tips for Learning

1. **Start with CPP00** - Understand basic class structure
2. **Progress sequentially** - Each module builds on previous concepts
3. **Review Makefiles** - Understand compilation flags and dependencies
4. **Modify examples** - Experiment with code changes to deepen understanding
5. **Study inheritance chains** - Trace constructor/destructor calls

## 📄 License

This project is for educational purposes at 42 School.

## 👤 Author

Abdellatif231

---

**Note:** This project emphasizes understanding core C++ concepts and proper coding practices over modern C++ features. It's designed as a learning progression from basic to advanced OOP concepts.
