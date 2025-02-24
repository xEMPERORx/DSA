# 📝 Comprehensive C++ Programming Notes

## 📌 Introduction to Flowcharts

Flowcharts visually represent the logical steps of an algorithm.

### 🔹 Components:
- **Terminators**: Represent start and end.
- **Input/Output**: Used for inputting data or displaying results.
- **Process**: Executes operations or calculations.
- **Decision**: Represents conditional branching (True/False).
- **Arrows**: Indicate flow direction.
- **Connectors**: Link different flowchart sections.

### Example:
```
Start → Input (a,b) → Process (sum = a+b) → Output (sum) → End
```

## 📌 Getting Started with C++

C++ is a general-purpose programming language popular for performance-critical applications.

### 🔹 IDE Setup (Code Blocks):
- Menu: `Settings → Compiler`
- Select `Toolchain Executables → Auto Detect`

### 🔹 Basic C++ Program Structure:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
```
- `#include <iostream>`: Includes Input/Output stream library.
- `main()`: Program execution starts here.

## 📌 Variables in C++

Variables are containers used to store data values. A variable must have a data type indicating the kind of data it stores.

### 🔹 Declaration and Initialization:

```cpp
int age = 25;
double salary = 45000.50;
char grade = 'A';
bool isPassed = true;
```

- **int**: Integer values
- **double**: Floating-point numbers
- **char**: Single characters
- **bool**: Boolean values (`true` or `false`)

## 📌 Conditional Statements

Control the flow of program execution based on specified conditions.

### 🔹 If-Else Statement:

```cpp
int score = 75;
if (score > 50) {
    cout << "Passed";
} else {
    cout << "Failed";
}
```

## 📌 Loops in C++

Loops repeatedly execute a block of code as long as a condition is true.

### 🔹 For Loop:

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
// Outputs numbers 1 to 5
```

### 🔹 While Loop:

```cpp
int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;
}
```

## 📌 Patterns and Nested Loops

Patterns help to master loops and logic.

### 🔹 Example (Square Pattern):

```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

```
* * *
* * *
* * *
```

## 📌 Operators

Perform operations on variables and values.

- **Arithmetic Operators**: `+`, `-`, `*`, `/`, `%`
- **Relational Operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Logical Operators**: `&&` (AND), `||` (OR), `!` (NOT)

### Example:

```cpp
int x = 10, y = 20;
if (x < y && y > 15) {
    cout << "Condition true";
}
```

## 📌 Functions in C++

Functions encapsulate a specific task, allowing code reuse.

### 🔹 Function Syntax:

```cpp
return_type function_name(parameters) {
    // function body
    return value;
}
```

### 🔹 Example Function:

```cpp
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    cout << sum(10, 20);  // Output: 30
}
```

### 🔹 Void Function:

Performs tasks without returning any value.

```cpp
void greet() {
    cout << "Hello, C++!";
}

int main() {
    greet();  // Output: Hello, C++!
}
```

## 📌 Variable Scope

Defines where variables can be accessed or modified.

- **Local Scope**: Declared inside a function or block; accessible only within it.
- **Global Scope**: Declared outside all functions; accessible throughout the program.

### Example:

```cpp
int globalVar = 100;  // Global variable

void display() {
    int localVar = 10;  // Local variable
    cout << localVar << endl;
    cout << globalVar << endl;
}

int main() {
    display();
}
```

## 🎯 Key Takeaways:
- Clearly understand data types and variable scopes.
- Use conditional statements and loops effectively to control flow.
- Master patterns and nested loops to strengthen logical thinking.
- Reuse code efficiently through functions.

Happy Coding! 🚀✨


## 📌 Arrays in C++

Arrays store multiple elements of the same data type in contiguous memory locations, facilitating efficient data access.

### 🔹 Memory Representation of Arrays:
Arrays are stored in contiguous memory blocks, where each element's address can be calculated easily.

**Visual Example:**

| Index | 0 | 1 | 2 | 3 | 4 |
|-------|---|---|---|---|---|
| Value |10 |20 |30 |40 |50 |
| Address |1000|1004|1008|1012|1016|

### 🔹 Declaration and Initialization:

- **Declaration:**
```cpp
int numbers[5];
```

- **Initialization at declaration:**
```cpp
int numbers[] = {10, 20, 30, 40, 50};
```

### 🔹 Useful Array Functions:
- `sizeof()`: calculates the total size in bytes
```cpp
int length = sizeof(numbers)/sizeof(numbers[0]);  // Number of elements
```

### 🔹 Passing Arrays to Functions:
```cpp
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
```

## 📌 Searching Algorithms

### 🔹 Linear Search:
Sequentially checks each element.

### 🔹 Binary Search:
Efficiently finds an element in a sorted array by repeatedly halving the search space.

#### Algorithm Visualization:
```
Sorted Array: [10, 20, 30, 40, 50]
Search for: 30

Step 1: mid = 2 (30) → Found!
```

#### Implementation:
```cpp
int binarySearch(int arr[], int n, int x) {
    int start = 0, end = n - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == x) return mid;
        else if(x < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
```

## 📌 Sorting Algorithms

### 🔹 Selection Sort:
Selects the smallest element and swaps it with the first unsorted element.

#### Visualization:
```
Initial: 64, 25, 12, 22, 11
Step 1: 11, 25, 12, 22, 64
Step 2: 11, 12, 25, 22, 64
Step 3: 11, 12, 22, 25, 64 (sorted)
```

#### Implementation:
```cpp
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
```

### 🔹 Bubble Sort:
Repeatedly swaps adjacent elements if in the wrong order.

#### Visualization:
```
Initial: 5, 1, 4, 2
Step 1: 1, 4, 2, 5
Step 2: 1, 2, 4, 5 (sorted)
```

#### Implementation:
```cpp
void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}
```

### 🔹 Insertion Sort:
Builds the sorted array by inserting each element into the correct position.

#### Visualization:
```
Initial: 9, 5, 1, 4
Step 1: 5, 9, 1, 4
Step 2: 1, 5, 9, 4
Step 3: 1, 4, 5, 9 (sorted)
```

#### Implementation:
```cpp
void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

## 📌 Character Arrays and Strings

- Arrays of characters terminated by null (`'\0'`).

### 🔹 Common String Functions:
- `strlen()`: length
- `strcmp()`: compare
- `strcpy()`: copy
- `strncpy()`: copy specified characters

```cpp
#include <cstring>
char s1[] = "Hello";
char s2[10];
strcpy(s2, s1);
```

### 🔹 Handling String Input:
- `cin`: stops at whitespace
- `cin.getline()`: reads a line with spaces

```cpp
char name[20];
cin.getline(name, 20);
```

## 📌 2D Arrays

Arrays of arrays, often used to represent matrices.

### 🔹 Declaration:
```cpp
int matrix[3][3];
```

### 🔹 Initialization:
```cpp
int matrix[2][2] = {{1,2}, {3,4}};
```

### 🔹 Accessing Elements:
```cpp
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

### 🔹 Memory Storage:
Stored as a linear array internally:

```
Row-wise Storage (Row-major order)
[1, 2, 3, 4, 5, 6]
Represented as:  {{1,2,3}, {4,5,6}}
```

### 🔹 Passing to Functions:
Second dimension is required:
```cpp
void displayMatrix(int arr[][3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

## 🎯 Key Points:
- Efficient memory handling with arrays.
- Visualization helps in understanding sorting and searching.
- Understand built-in string functions for common operations.
- Grasp 2D arrays for structured data handling.

Happy Learning! 🚀✨


## 📌 Pointers in C++

Pointers are special variables used to store addresses of other variables. They are fundamental to C++ for dynamic memory allocation and efficient array manipulation.

### 🔹 Pointer Declaration:

```cpp
int* ptr;
```
This pointer stores the address of an integer variable.

### 🔹 Address-of Operator (&):
Used to obtain the address of a variable.

```cpp
int var = 10;
int* ptr = &var;
```

### 🔹 Dereference Operator (*):
Accesses or modifies the value at the stored address.

```cpp
cout << *ptr;  // Outputs 10
```

### 🔹 Memory Representation:

```cpp
int a = 10;
int* ptr = &a;
```

| Variable | Value | Address |
|----------|-------|---------|
| a        | 10    | 2000    |
| ptr      | 2000  | 4000    |

### 🔹 Size of Pointers:
Pointer size depends on the system architecture:
- 32-bit system: 4 bytes
- 64-bit system: 8 bytes

```cpp
cout << sizeof(ptr);  // Typically 8 bytes on 64-bit systems
```

### 🔹 Pointer Arithmetic:
Pointer arithmetic adjusts pointer addresses by increments/decrements based on data type size.

```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;

ptr++; // moves ptr to arr[1]
cout << *ptr; // Outputs 20
```

### 🔹 Pointers and Arrays:
Arrays and pointers are closely related. An array's name acts as a pointer to its first element.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr;
cout << *(ptr + 2); // Outputs 3
```

### 🔹 Double Pointers:
Pointers that store addresses of other pointers.

```cpp
int a = 10;
int* p = &a;
int** q = &p;

cout << **q; // Outputs 10
```

### 🔹 Void Pointers:
Generic pointers that can store the address of any data type.

```cpp
int a = 10;
char b = 'x';
void* ptr;

ptr = &a; // Valid
ptr = &b; // Valid
```

### 🔹 Null Pointers:
Pointers initialized to null to avoid accidental dereferencing of garbage memory.

```cpp
int* ptr = NULL; // or int* ptr = nullptr;
```

### 🔹 Pointer Operators Summary:
| Operator | Meaning                        | Example |
|----------|--------------------------------|---------|
| &        | Address-of                     | `&var`  |
| *        | Dereference (value pointed by) | `*ptr`  |

### 🔹 Visual Pointer Example:

```cpp
int num = 5;
int* p = &num;

// Memory Visualization
// num: [Value: 5] [Address: 1000]
// p:   [Value: 1000] [Address: 2000]
```

## 🎯 Key Points on Pointers:
- Crucial for efficient memory management.
- Size depends on system architecture.
- Integral to understanding arrays and dynamic data structures.
- Should always initialize pointers to avoid undefined behavior.

Happy Learning! 🚀✨

## 📌 Dynamic Memory Allocation

Dynamic memory allocation allows us to allocate memory during runtime, offering flexibility to efficiently manage memory based on program needs.

### 🔹 Types of Memory in C++:

- **Stack Memory:**
  - Managed automatically.
  - Memory allocation and deallocation are automatic (LIFO - Last In First Out).
  - Size of memory is fixed and limited.

- **Heap Memory:**
  - Managed manually by the programmer.
  - Allocation and deallocation must be done explicitly.
  - Provides flexibility in size and usage.

### 🔹 Why Dynamic Allocation?
- Allocates exact memory size during runtime, reducing waste.
- Essential for data structures like linked lists, trees, etc., where size isn't predefined.

### 🔹 Dynamic Allocation Basics:

#### Allocating Single Variable:
```cpp
int *ptr = new int; // dynamically allocates an integer
*ptr = 20; // assigns value 20
```

#### Allocating Array:
```cpp
int size = 5;
int *arr = new int[size]; // allocates array dynamically
```

### 🔹 Releasing Memory:

Dynamically allocated memory must be explicitly released to prevent memory leaks:

- Single Variable:
```cpp
delete ptr;
```

- Array:
```cpp
delete[] arr;
```

### 🔹 Dynamic Allocation for 2D Arrays:

#### Allocation:
```cpp
int rows = 3, cols = 4;
int **arr = new int*[rows];
for(int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
}
```

#### Releasing:
```cpp
for(int i = 0; i < rows; i++) {
    delete[] arr[i];
}
delete[] arr;
```

## 📌 Address Typecasting and Pointer Typecasting

### 🔹 Address Typecasting:
- Necessary when converting pointers of one datatype to another.
- Ensures that pointers interpret the memory correctly.

#### Implicit vs Explicit Typecasting:
- **Implicit Typecasting:** Automatically handled by the compiler.
  ```cpp
  int num = 65;
  char ch = num; // implicitly converts integer to ASCII character ('A')
  ```

- **Explicit Typecasting:** Programmer explicitly specifies the conversion.
  ```cpp
  int num = 65;
  int *p = &num;
  char *ch_ptr = (char*) p; // explicitly converts integer pointer to char pointer
  ```

## 📌 References and Pass-by-Reference

### 🔹 References:
- Aliases for other variables, sharing the same memory address.

#### Declaration and Use:
```cpp
int x = 10;
int &y = x; // y is now an alias for x
x++;
cout << y; // outputs 11
```

### 🔹 Pass-by-Reference:
- Passes variable references to functions, allowing direct modification of original variables.

```cpp
void increase(int &val) {
    val += 1;
}

int main() {
    int num = 5;
    increase(num);
    cout << num; // outputs 6
}
```

## 📌 Macros and Global Variables

### 🔹 Macros:
- Defined constants using `#define`, replacing repeated values to prevent accidental modification.
```cpp
#define PI 3.14
```

### 🔹 Global Variables:
- Declared outside functions and accessible throughout the program.
- Changes affect all references to the variable.

## 📌 Inline Functions and Default Arguments

### 🔹 Inline Functions:
- Compiler replaces the function call with function code, reducing overhead.

```cpp
inline int multiply(int a, int b) {
    return a * b;
}
```

### 🔹 Default Arguments:
- Allow functions to use predefined values when arguments are omitted.

```cpp
int add(int x, int y, int z = 0) {
    return x + y + z;
}
```

## 📌 Constant Variables

- Declared with `const` to prevent value changes throughout program execution.
```cpp
const int MAX = 50;
```

## 🎯 Key Points:
- Dynamic allocation enables efficient and flexible memory use.
- Typecasting ensures accurate data handling and prevents errors.
- Explicitly release dynamic memory to avoid leaks.
- Utilize references for efficient memory handling and function interactions.
- Inline functions and default arguments optimize code performance.

Happy Learning! 🚀✨

## 📌 Recursion

Recursion is a powerful technique in programming where a function calls itself directly or indirectly to solve smaller instances of the same problem until it reaches a solution.

### 🔹 Principle of Mathematical Induction (PMI)

Recursion heavily relies on PMI, which has three main steps:

1. **Base Case (Trivial Case)**: Verify the statement for the initial or simplest case.
2. **Inductive Hypothesis**: Assume the statement is true for a general case (k).
3. **Inductive Step**: Prove that if the statement holds for k, it also holds for k+1.

#### Example (Sum of Natural Numbers):

Statement: The sum of the first n natural numbers is given by \( S(n) = \frac{n(n+1)}{2} \).

- **Base case (n=1)**:
\[ 1 = \frac{1(1+1)}{2} \quad \text{(true)} \]

- **Inductive hypothesis**:
Assume true for n=k:
\[ 1+2+3+...+k = \frac{k(k+1)}{2} \]

- **Inductive step (n=k+1)**:
\[ 1+2+3+...+k+(k+1) = \frac{k(k+1)}{2} + (k+1) = \frac{(k+1)(k+2)}{2} \]

Thus, the statement holds for k+1 if it holds for k.

### 🔹 Understanding Recursion

Recursion includes three crucial steps:
- **Base Case**: Termination condition of recursion.
- **Recursive Call**: Calls itself with smaller input.
- **Small Calculation**: Combining recursive result with the current input.

### 🔹 Simple Recursion Example (Factorial)

Factorial: \( n! = n \times (n-1)! \)

```cpp
int factorial(int n) {
    if (n == 0) return 1; // base case
    return n * factorial(n - 1); // recursive call
}
```

### 🔹 Complex Recursion Example (Fibonacci Series)

\( F(n) = F(n-1) + F(n-2) \), with base cases \( F(0)=0 \), \( F(1)=1 \).

```cpp
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

### 🔹 Recursion and Arrays

#### Check if Array is Sorted:
```cpp
bool isSorted(int arr[], int size) {
    if (size <= 1) return true; // base case
    if (arr[0] > arr[1]) return false; // small calculation
    return isSorted(arr + 1, size - 1); // recursive call
}
```

## 📌 Advanced Recursion and PMI

### 🔹 Complex Example: Finding the First Index of an Element

```cpp
int firstIndex(int arr[], int size, int x) {
    if (size == 0) return -1; // base case
    if (arr[0] == x) return 0; // small calculation

    int smallerArrayAns = firstIndex(arr + 1, size - 1, x); // recursive call
    if (smallerArrayAns == -1) return -1;
    else return smallerArrayAns + 1;
}
```

### 🔹 Complex Example: Finding Last Index

```cpp
int lastIndex(int arr[], int size, int x) {
    if (size == 0) return -1; // base case

    int smallerArrayAns = lastIndex(arr + 1, size - 1, x); // recursive call
    if (smallerArrayAns != -1) return smallerArrayAns + 1;
    if (arr[0] == x) return 0;

    return -1; // small calculation
}
```

### 🔹 Complex Example: Finding All Indices

```cpp
int allIndices(int arr[], int size, int x, int output[]) {
    if (size == 0) return 0; // base case

    int ans = allIndices(arr + 1, size - 1, x, output); // recursive call
    for(int i = 0; i < ans; i++) output[i]++;

    if (arr[0] == x) {
        for(int i = ans; i > 0; i--) output[i] = output[i-1];
        output[0] = 0;
        return ans + 1;
    }
    return ans; // small calculation
}
```

## 📌 Multiple Uses of Recursion

- **Divide and Conquer Algorithms**: Merge Sort, Quick Sort
- **Tree Traversals**: Inorder, Preorder, Postorder
- **Graph Traversals**: Depth-First Search (DFS)

## 📌 Mathematical Induction and Complex Problems

Recursion simplifies the implementation of mathematical induction principles in programming, allowing easier proofs and solving complex mathematical problems effectively.

### 🔹 Tips for Using Recursion:
- Clearly identify base cases to prevent infinite recursion.
- Carefully define recursive calls to ensure smaller sub-problems are solved.
- Optimize using memoization or dynamic programming to enhance performance.

## 🎯 Key Points:
- Recursion and PMI are closely linked; understanding one aids in grasping the other.
- Recursive algorithms can elegantly solve complex problems by breaking them down.
- Practice different problems to strengthen your understanding of recursive thinking.

Happy Learning! 🚀✨


### **Introduction to Recursion**
Recursion is a programming approach where a function calls itself to solve smaller instances of the same problem until reaching a base case, which stops the recursion.

### **Examples of Recursion with Strings:**

#### **1. Finding the Length of a String**
```cpp
#include <iostream>
using namespace std;

int length(char s[]) {
    if (s[0] == '\0') {    // Base case
        return 0;
    }
    int smallLength = length(s + 1);  // Recursive call
    return 1 + smallLength;           // Small calculation
}

int main() {
    char str[100];
    cin >> str;
    cout << length(str) << endl;
}
```

- **Explanation:**
The recursion stops when it encounters a null character (`'\0'`). Each recursive call processes the next character, adding `1` each time until the base case is reached.

---

#### **2. Remove 'X' from String**
```cpp
#include <iostream>
using namespace std;

void removeX(char s[]) {
    if (s[0] == '\0') {   // Base case
        return;
    }
    if (s[0] != 'x') {    // Recursive case
        removeX(s + 1);
    } else {              // When 'x' is found
        int i = 1;
        for (; s[i] != '\0'; i++) {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}

int main() {
    char str[100];
    cin >> str;
    removeX(str);
    cout << str << endl;
}
```

- **Explanation:**
The function recursively shifts the characters to remove occurrences of 'x' until the base case of end of string is reached.

---


## 🚩 **Sorting Techniques**

Sorting is arranging data in a particular format or order, typically ascending or descending. Various sorting algorithms are utilized based on efficiency and data structure requirements.

---

### 🟢 **1. Merge Sort**

**Concept:**
Merge Sort is based on the **Divide and Conquer** principle. It repeatedly divides the array into halves until each segment has one element (considered sorted) and merges these sorted segments to form the final sorted array.

**Algorithm Steps:**
- **Divide** the array recursively into two halves until one-element arrays remain.
- **Merge** these small sorted arrays into larger sorted arrays until the whole array is sorted.

**Key Features:**
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(n)`
- **Advantage:** Reliable performance for large datasets.
- **Disadvantage:** Not an in-place sort (requires extra memory).

---

### 🟢 **2. Quick Sort**

**Concept:**
Quick Sort also uses **Divide and Conquer**, selecting a pivot element and partitioning the array around the pivot. Elements less than pivot go to the left; those greater go to the right.

**Algorithm Steps:**
- **Partition** the array around a pivot.
- **Recursively sort** the left and right partitions.
- After partitioning, elements are already sorted around pivots.

**Key Features:**
- **Time Complexity:** `O(n log n)` (average), `O(n²)` (worst-case).
- **Space Complexity:** `O(log n)` (average, due to recursion stack), effectively in-place.
- **Advantage:** Generally faster in practice than Merge Sort.
- **Disadvantage:** Worst-case scenario when the smallest or largest element is consistently chosen as pivot.

---

### 🟢 **3. Bubble Sort**

**Concept:**
Repeatedly compares adjacent elements and swaps them if they're in the wrong order. Larger elements "bubble" to the end with each pass.

**Key Features:**
- **Time Complexity:** `O(n²)` (average and worst-case).
- **Space Complexity:** `O(1)`
- **Advantage:** Simple, easy to implement.
- **Disadvantage:** Inefficient for large data sets.

---

### 🟢 **4. Selection Sort**

**Concept:**
Repeatedly selects the smallest element from the unsorted part and places it at the start of the unsorted array segment.

**Key Features:**
- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`
- **Advantage:** Minimum memory writes.
- **Disadvantage:** Poor efficiency for large arrays.

---

### 🟢 **5. Insertion Sort**

**Concept:**
Builds the sorted array incrementally, inserting each new element into its proper place within the already sorted portion.

**Key Features:**
- **Time Complexity:** `O(n²)` (worst-case), but efficient `O(n)` for almost-sorted arrays.
- **Space Complexity:** `O(1)`
- **Advantage:** Efficient for small or nearly sorted datasets.
- **Disadvantage:** Inefficient for large, unsorted data.

---

## 🚀 **3. String Concept in C++**

### **String as a Class**
- A string can be considered as a class rather than just an array of characters ending with `'\0'`.

### **Declaring Strings**
```cpp
string str;                       // Normal declaration
string *str = new string;         // Dynamic allocation
```

### **Inputting Strings**
```cpp
getline(cin, str);  // Reads input including spaces until newline
```

---

### **String Operations (Inbuilt Functions)**

| Function                          | Explanation                                  | Syntax                                             |
|-----------------------------------|----------------------------------------------|----------------------------------------------------|
| **Concatenation (`+`)**           | Combine two strings                          | `string str = s1 + s2;`                            |
| **Length (`.length()`/`.size()`)**| Get string length                            | `int len = str.length();` or `str.size();`         |
| **Substring (`.substr()`)**       | Extract substring                            | `string sub = str.substr(start_index, length);`    |
| **Find Substring (`.find()`)**    | Find substring within a string (returns first occurrence)| `int index = str.find("pattern");`                 |

---

## 📚 **Example Code Snippets**

### **String Concatenation**
```cpp
string s1 = "Hello ";
string s2 = "World!";
string result = s1 + s2;
cout << result; // Output: Hello World!
```

### **Finding Length**
```cpp
string s = "Hello";
cout << s.length(); // Output: 5
```

### **Substring**
```cpp
string s = "Programming";
string sub = s.substr(3, 5);
cout << sub; // Output: gramm
```

### **Finding a Pattern**
```cpp
string s = "Hello, World!";
int position = s.find("World");
cout << position; // Output: 7
```

---

## 🚩 **Practice Questions and Resources:**
- [Merge Sort Practice Problems](https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/)
- [Quick Sort Practice Problems](https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/)
- [Recursion Practice Problems (String related)](https://www.techiedelight.com/recursion-practice-problems-with-solutions)

---

This detailed note encapsulates all necessary information about recursion, sorting, and string manipulation in an organized markdown format suitable for academic and professional use.



## 🧑‍💻 **Introduction to Algorithm Efficiency**

In programming, the efficiency of an algorithm determines how fast and resource-efficient the algorithm will be. Efficiency typically considers:

- **CPU (Processing Time)**
- **Memory Usage**
- **Disk Usage**
- **Network Usage**

Among these, **CPU time** is usually the primary focus.

---

## 🎯 **Performance vs. Complexity**

It is crucial to differentiate between:

- **Performance**:
  - Actual resource use (time, memory) when the program runs.
  - Influenced by hardware, compilers, and code quality.

- **Complexity**:
  - How resource usage scales with input size.
  - Complexity affects performance but not vice-versa.

---

## 🔍 **Basic Operations in Algorithms**

An algorithm's efficiency is measured by counting **basic operations**:

- Arithmetic operations (e.g., `a + b`)
- Assignment operations (e.g., `int x = 5`)
- Conditional checks (e.g., `if (x == 0)`)
- Input/Output operations (e.g., reading/writing from/to the console)

---

## ⏱️ **Time Complexity**

### **Understanding Time Complexity**

Time Complexity refers to how an algorithm's runtime scales as the size of the input increases.

- **Constant Time (O(1))**
  - Operations that always take the same amount of time, regardless of input size.
  - Example: `size()` function in a string always performs one operation.

- **Linear Time (O(N))**
  - Time increases directly proportional to the input size.
  - Example: removing an item from an array where all subsequent elements must shift left.

- **Quadratic Time (O(N²))**
  - Typically occurs with nested loops that depend on input size.

---

## 🔖 **Big-O Notation**

Big-O notation is used to classify algorithms by their complexity:

| Complexity       | Big-O Notation | Description                             |
|------------------|----------------|-----------------------------------------|
| Constant Time    | O(1)           | Time remains constant                   |
| Linear Time      | O(N)           | Time scales linearly with input size    |
| Quadratic Time   | O(N²)          | Time scales with the square of input size |

**Important points about Big-O:**

- Ignores lower-order terms and constants as they become insignificant for large input sizes.
- Indicates worst-case complexity.

---

## 📈 **Calculating Complexity**

The complexity of different programming constructs is as follows:

### 1. **Sequence of Statements**
- Complexity: Sum of individual statement complexities
- Typically O(1) if statements are basic.

### 2. **Conditional Statements (`if-else`)**
- Complexity: Maximum complexity among possible branches.

### 3. **Loops (`for` loops)**
- Complexity: Number of loop iterations × complexity of loop body.
- Example: single loop iterating N times → O(N).

### 4. **Nested Loops**
- Complexity: Multiply the iterations of loops.
  - If outer loop = N and inner loop = N, Complexity = O(N²).

### 5. **Statements with Function Calls**
- Complexity depends on the called function.
  - If a function `g(N)` has O(N), a loop calling it N times results in O(N²).

---

## 📊 **Complexity Examples**

### **Nested Loop (Independent Iterations)**
```cpp
for (int i = 0; i < N; i++) {
  for (int j = 0; j < M; j++) {
    // Constant-time statements
  }
}
// Complexity: O(N * M)
```

### **Nested Loop (Dependent Iterations)**
```cpp
for (int i = 0; i < N; i++) {
  for (int j = i + 1; j < N; j++) {
    // Constant-time statements
  }
}
// Complexity: O(N²)
```

---

## 📐 **Space Complexity**

- Space complexity measures the memory required by an algorithm.
- Expressed similarly using Big-O notation.
- Important in resource-constrained systems (e.g., embedded systems).

---

## ⚖️ **Best, Average, and Worst-Case Complexity**

- **Worst-Case**: Maximum time or space required for any input.
- **Average-Case**: Expected time or space over all inputs.
- **Best-Case**: Minimum possible time or space required.

**Example:**
Adding an element to a dynamic array (e.g., `Vector`):

- **Worst-case**: Array is full; all elements must be copied → O(N).
- **Best-case**: Space is available → O(1).

---

## 🚩 **When Do Constants Matter?**

- Constants and lower-order terms generally do not matter for large inputs.
- Two algorithms might have the same Big-O complexity but different real-time performance due to constants.
- Example:
  - Algorithm A: `N²`
  - Algorithm B: `10 * N² + N`

  Both have O(N²), but algorithm A is always faster practically.

---

## 📌 **Example Table Showing Constants vs. Scalability**

| N      | Linear Time (100×N) | Quadratic Time (N²/100) | Faster Algorithm |
|--------|---------------------|-------------------------|------------------|
| 10²    | 10,000              | 100                     | Quadratic        |
| 10³    | 100,000             | 10,000                  | Quadratic        |
| 10⁴    | 1,000,000           | 1,000,000               | Equal            |
| 10⁵    | 10,000,000          | 100,000,000             | Linear           |
| 10⁶    | 100,000,000         | 10,000,000,000          | Linear           |

- At lower input sizes, constants matter.
- At higher input sizes, the complexity type (Linear, Quadratic) dominates.

---

## 🌟 **Summary & Key Takeaways**

- Efficiency involves CPU time, memory, and other resources.
- Big-O notation simplifies understanding how algorithms scale.
- Worst-case complexity often dominates decision-making.
- Space complexity is as crucial as time complexity, especially in constrained environments.
- Constants and low-order terms matter practically at small scales, less so at large scales.

---

### 📝 **Quick Reference: Big-O Complexity**

| Big-O Complexity | Efficiency                      | Use Case Examples                     |
|------------------|---------------------------------|---------------------------------------|
| O(1)             | Excellent (constant time)       | Accessing array elements              |
| O(log N)         | Very good (logarithmic time)    | Binary search                         |
| O(N)             | Good (linear time)              | Searching an unsorted array           |
| O(N log N)       | Good                            | QuickSort, MergeSort                  |
| O(N²)            | Poor (quadratic time)           | Nested loops, Bubble sort             |
| O(2ᴺ)            | Very poor (exponential time)    | Brute-force algorithms                |

---

This note has been structured to facilitate clear and simple understanding, suitable even for non-programmers to grasp essential concepts of complexity in programming.


# 📚 **Detailed and Beginner-Friendly Notes on Object-Oriented Programming (OOP) in C++**

---

## 📝 **What is Object-Oriented Programming (OOP)?**

Object-Oriented Programming (OOP) is a programming paradigm that structures software design around **data** or **objects**, rather than functions and logic. It helps programmers model real-world scenarios through code.

### ✅ **Why use OOP?**

- Mimics real-world objects, making programs intuitive.
- Enables code reusability.
- Enhances software modularity and maintainability.
- Allows data hiding and encapsulation for secure coding.

---

## 📌 **Core Concepts of OOP**

OOP relies on these foundational concepts:

1. **Class**
2. **Object**
3. **Encapsulation**
4. **Abstraction**
5. **Inheritance**
6. **Polymorphism**

(These notes focus primarily on Classes, Objects, and Encapsulation.)

---

## 🏛️ **1. Classes and Objects**

### **Class**
- A **Class** is a blueprint or template for creating objects.
- Defines **attributes** (data members) and **behaviors** (member functions).

**Syntax of a Class in C++:**
```cpp
class ClassName {
  // Access modifiers
  private:
    // private data members and member functions

  public:
    // public data members and member functions
};
```

### **Object**
- An **Object** is an instance of a class.
- Objects store real values in the data members defined by the class.

**Creating Objects:**
- **Statically (Compile-time):**
```cpp
ClassName objectName;
```

- **Dynamically (Run-time):**
```cpp
ClassName* objectName = new ClassName();
```

**Example:**
```cpp
class Student {
public:
    int rollNo;
    char name[20];
};

int main() {
    Student s1; // static object
    Student* s2 = new Student(); // dynamic object
}
```

---

## 🔐 **2. Data Members and Member Functions**

- **Data Members:** Attributes that store data.
- **Member Functions:** Functions operating on data members.

**Example:**
```cpp
class Student {
private:
    int rollNo;
    char name[20];

public:
    void setDetails(int r, const char* n) {
        rollNo = r;
        strcpy(name, n);
    }

    void showDetails() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};
```

---

## 🛡️ **3. Access Modifiers**

Control accessibility of class members:

| Modifier  | Description                                       |
|-----------|---------------------------------------------------|
| **public**    | Accessible from anywhere in the program.          |
| **private**   | Accessible only within the class itself.          |
| **protected** | Accessible within the class and subclasses.       |

> **Note:** If no modifier is specified, class members are private by default.

**Example:**
```cpp
class Person {
private:
    int age;

public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
```

---

## 🔍 **4. Getters and Setters**

Allow controlled access and modification of private data members.

- **Getters (Accessor methods):** Return values of private variables.
- **Setters (Mutator methods):** Modify values of private variables.

**Example:**
```cpp
class Student {
private:
    int marks;

public:
    void setMarks(int m) { marks = m; }   // Setter
    int getMarks() { return marks; }      // Getter
};
```

---

## 🛠️ **5. Constructors**

- Special methods called automatically when an object is created.
- Used to initialize data members.

### **Types of Constructors:**

- **Default Constructor:** Has no parameters.
- **Parameterized Constructor:** Takes parameters to initialize members.

**Default Constructor Example:**
```cpp
class Box {
public:
    int width;

    // Default constructor
    Box() {
        width = 10;
    }
};

int main() {
    Box b; // Default constructor invoked
    cout << b.width; // Output: 10
}
```

**Parameterized Constructor Example:**
```cpp
class Box {
public:
    int width;

    // Parameterized constructor
    Box(int w) {
        width = w;
    }
};

int main() {
    Box b(20); // Parameterized constructor invoked
    cout << b.width; // Output: 20
}
```

---

## 🗑️ **6. Destructors**

- Automatically invoked when objects are destroyed or go out of scope.
- Used to release allocated resources.

**Syntax:** `~ClassName()`

**Example:**
```cpp
class Box {
public:
    Box() { cout << "Constructor invoked" << endl; }
    ~Box() { cout << "Destructor invoked" << endl; }
};

int main() {
    Box b; // Constructor invoked
} // Destructor invoked automatically here
```

---

## 🎯 **7. this Keyword**

- A pointer to the object itself within a member function.
- Used when parameter names conflict with class member names.

**Example:**
```cpp
class Sample {
    int x;

public:
    void setX(int x) {
        this->x = x; // refers to data member x
    }
};
```

---

## 📌 **8. Static Members**

- Shared across all instances of a class.
- Belong to the class itself rather than objects.

**Syntax:**
```cpp
static datatype memberName;
```

**Example:**
```cpp
class Student {
public:
    static int totalStudents;

    Student() { totalStudents++; }
};

int Student::totalStudents = 0; // Initialize static member

int main() {
    Student s1, s2, s3;
    cout << Student::totalStudents; // Output: 3
}
```

---

## 🌀 **9. Copy Constructors (Shallow vs. Deep Copy)**

- **Shallow Copy:** Copies object's pointer/reference, causing shared resources.
- **Deep Copy:** Copies actual resources, each object gets independent copies.

**Deep Copy Example:**
```cpp
class Student {
    char *name;

public:
    Student(char *n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Deep copy constructor
    Student(const Student &s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }
};
```

---

## ⚙️ **10. Operator Overloading**

Redefines operators to work with class objects, providing intuitive syntax.

**Example (overloading +):**
```cpp
class Complex {
    int real, imag;

public:
    Complex(int r, int i): real(r), imag(i) {}

    Complex operator+(const Complex& obj) {
        Complex res(0, 0);
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
```

---

## 📋 **11. Initialization Lists**

Initialize const and reference data members directly during object creation.

**Example:**
```cpp
class Test {
    const int x;
    int &y;

public:
    Test(int &n): x(10), y(n) {}
};
```

---

## 🔖 **12. Constant Member Functions**

Functions declared with `const` cannot modify data members.

**Example:**
```cpp
class Example {
    int val;

public:
    int getVal() const { return val; } // Cannot modify val
};
```

---

## 🚀 **Quick Tips for Beginners:**

- Always provide getters/setters for private data members.
- Prefer initialization lists for efficiency.
- Use destructors to prevent memory leaks.
- Prefer deep copies when working with dynamic memory.
- Use meaningful naming conventions for clarity.

---

## 🌟 **Conclusion**

These notes comprehensively cover foundational aspects of **OOP in C++**, designed explicitly for beginners. Understanding these concepts thoroughly will provide a strong foundation for advanced programming and software development.

# 📚 **Deep and Shallow Copy, and Copy Constructors in C++ (Detailed Explanation)**


## 🟢 **Understanding Copying of Objects in C++**

In C++, objects can be copied into new objects in two ways:

- **Shallow Copy**
- **Deep Copy**

The method chosen significantly affects how the objects handle memory, especially when dynamic memory (pointers) is involved.

---

## 🧩 **What is a Shallow Copy?**

**Shallow copy** creates a new object, but the new object's data members directly copy values from the original object. This means **pointer variables** from both objects point to the same memory location.

**Visual Explanation:**

```
Object 1                  Object 2 (Shallow Copy)
   |                           |
   |--- pointer member --------|
           (both point to the same memory)
```

**Characteristics of Shallow Copy:**
- Automatically done by C++'s **default copy constructor** and **assignment operator** (`=`).
- Both original and copied objects share the same dynamically allocated memory.

### **Problem with Shallow Copy:**
- Changes in one object affect the other because they share memory.
- Deleting the pointer in one object causes issues (like double deletion or dangling pointers) for the other object.

---

## 🛠️ **What is a Deep Copy?**

**Deep copy** creates a new object and also allocates new memory for its pointer members. Thus, original and copied objects have **independent copies of dynamically allocated memory**.

**Visual Explanation:**

```
Object 1                 Object 2 (Deep Copy)
   |                          |
   |--pointer member--|       |--pointer member--|
          ↓                            ↓
    [memory block 1]           [memory block 2]
(separate memory allocated for each object)
```

**Characteristics of Deep Copy:**
- Each object has its own memory; objects are completely independent.
- Changes to one object don't affect another.

### **When to use Deep Copy?**
- Whenever your class has dynamically allocated memory (pointers).

---

## 🧑‍💻 **Copy Constructors in C++**

A copy constructor is a special constructor used to create an object as a copy of an existing object.

### **Syntax:**
```cpp
ClassName(const ClassName &obj) {
    // Copy object's data here
}
```

### **Shallow Copy Constructor (Default provided by C++):**
If you don't define your own, C++ creates one, performing a shallow copy.

**Example:**
```cpp
class Student {
public:
    int age;
    char* name; // dynamic memory

    Student(int age, char* name) {
        this->age = age;
        this->name = name; // Shallow copy (pointer only copied)
    }

    // Default copy constructor is provided by compiler
};
```

Here, `name` in both objects points to the same memory location, causing problems when one object changes or deletes the pointer.

---

## 🚩 **Implementing Deep Copy Constructor (Recommended Approach):**

To avoid problems associated with shallow copy, you define your own **deep copy constructor**:

**Example:**
```cpp
#include <cstring>

class Student {
public:
    int age;
    char* name;

    // Parameterized Constructor
    Student(int age, const char* name) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Deep Copy Constructor
    Student(const Student &s) {
        age = s.age;
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }

    // Destructor
    ~Student() {
        delete[] name;  // releases dynamic memory
    }
};
```

### **Explanation of the Above Deep Copy Constructor:**
- Allocates new memory for the `name`.
- Copies content from the source object's name to ensure independence.

---

## 🚧 **Assignment Operator Overloading (for Deep Copy):**

Besides the copy constructor, it's recommended to define an **assignment operator (`=`)** to ensure deep copying during assignment.

**Syntax:**
```cpp
Student& operator=(const Student &s) {
    if (this != &s) { // self-assignment check
        delete[] name; // delete existing memory
        age = s.age;
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }
    return *this;
}
```

---

## 📌 **Complete Example Demonstrating Deep vs. Shallow Copy:**

```cpp
#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    int age;
    char* name;

    Student(int age, const char* name) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Deep Copy Constructor
    Student(const Student &s) {
        age = s.age;
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }

    // Assignment Operator Overloading
    Student& operator=(const Student &s) {
        if (this != &s) {
            delete[] name; // delete existing memory
            age = s.age;
            name = new char[strlen(s.name) + 1];
            strcpy(name, s.name);
        }
        return *this;
    }

    ~Student() {
        delete[] name;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "John");
    Student s2 = s1; // invokes deep copy constructor

    s1.display(); // John, 20
    s2.display(); // John, 20

    strcpy(s2.name, "Mike"); // Changing s2 name won't affect s1

    s1.display(); // John, 20 (unchanged)
    s2.display(); // Mike, 20 (changed)

    return 0;
}
```

---

## 📌 **Key Differences Summary:**

| **Feature**        | **Shallow Copy**                   | **Deep Copy**                    |
|--------------------|------------------------------------|----------------------------------|
| **Memory Sharing** | Shares memory addresses            | Allocates separate memory        |
| **Speed**          | Faster, just copies addresses      | Slower, allocates new memory     |
| **Memory Issues**  | Possible memory leak & conflicts   | Safe and independent memory use  |
| **Complexity**     | Automatically provided by compiler | Must be explicitly defined       |

---

## 🚀 **When to Use Each Copy?**

- **Shallow copy:**
  When no dynamic memory allocation is involved.

- **Deep copy:**
  Always recommended for classes managing dynamic memory.

---

## 🎯 **Conclusion:**

Understanding and correctly implementing **deep copy constructors** and **assignment operators** are crucial in C++ for managing dynamic memory safely. Using deep copies prevents memory errors, memory leaks, and unintended behaviors in your programs.

These detailed notes provide foundational knowledge required to handle copying of objects effectively in C++.

# 📌 **Detailed Notes on Linked Lists in C++**

---

## 🔍 **Introduction to Linked Lists**

### 🟢 **What is a Linked List?**
A **linked list** is a linear data structure where each element (node) is stored separately and connected via pointers. Unlike arrays, linked lists are **dynamic** and can grow or shrink in size.

---

## 📌 **Why Linked Lists? (Limitations of Arrays)**

### 🚨 **Problems with Arrays:**
1. **Fixed Size:**
   - The size of an array must be defined at declaration.
   - If we need more elements than allocated, it leads to an **index out of range error**.

2. **Memory Waste:**
   - If fewer elements than allocated are used, memory is wasted.

3. **Expensive Deletion:**
   - Removing an element requires shifting all subsequent elements.

### ✅ **Advantages of Linked Lists over Arrays**
- **Dynamic Size** – Can grow or shrink as needed.
- **Efficient Insertions/Deletions** – Unlike arrays, no shifting is required.
- **Memory Efficient** – No need to allocate a fixed size.

---

## 📌 **Basic Structure of a Linked List Node**
Each **node** consists of:
1. **Data** – Stores the value.
2. **Pointer (Next)** – Holds the address of the next node.

### **C++ Implementation of a Node**
```cpp
class Node {
public:
    int data;      // Stores data
    Node* next;    // Stores the address of the next node

    // Constructor
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
```

---

## 📌 **Types of Linked Lists**

1. **Singly Linked List** – Each node has one pointer pointing to the next node.
2. **Doubly Linked List** – Each node has two pointers (previous and next).
3. **Circular Linked List** – The last node connects back to the head, forming a circular structure.

---

## 📌 **Basic Operations on Linked Lists**

### 🔹 **1. Traversing a Linked List**
To **print** all elements in a linked list, we traverse the list from `head` until reaching `NULL`.

```cpp
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
```

---

## 📌 **Insertion in Linked List**
There are three cases of inserting a node:

### **1️⃣ Insert at the End (Tail)**
- Create a new node.
- Traverse to the last node.
- Update the last node’s `next` pointer to the new node.

```cpp
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

---

### **2️⃣ Insert at the Beginning (Head)**
- New node’s `next` pointer should point to `head`.
- Update `head` to the new node.

```cpp
Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    return newNode;
}
```

---

### **3️⃣ Insert at a Specific Position**
- Traverse to the `position-1` node.
- Insert the new node by updating pointers.

```cpp
Node* insertAtPosition(Node* head, int pos, int data) {
    Node* newNode = new Node(data);
    if (pos == 0) {  // Insert at head
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}
```

---

## 📌 **Deleting a Node from Linked List**
There are two main cases for deletion:

### **1️⃣ Deleting the First Node (Head)**
- Move `head` to `head->next`.
- Free memory of the old head.

```cpp
Node* deleteHead(Node* head) {
    if (head == NULL) return NULL; // If list is empty

    Node* temp = head;
    head = head->next;
    delete temp; // Free memory
    return head;
}
```

---

### **2️⃣ Deleting a Node from the Middle/End**
- Traverse to the node before the one to be deleted.
- Update `next` pointer to skip the node.
- Free the deleted node’s memory.

```cpp
Node* deleteNode(Node* head, int pos) {
    if (head == NULL) return NULL;

    if (pos == 0) {
        return deleteHead(head);
    }

    Node* temp = head;
    int count = 0;

    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    return head;
}
```

---

## 📌 **Recursive Approach for Insert/Delete Operations**

### **1️⃣ Recursive Insertion**
```cpp
Node* insertRecursive(Node* head, int pos, int data) {
    if (head == NULL && pos > 0) return NULL;

    if (pos == 0) {
        Node* newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    head->next = insertRecursive(head->next, pos - 1, data);
    return head;
}
```

---

### **2️⃣ Recursive Deletion**
```cpp
Node* deleteRecursive(Node* head, int pos) {
    if (head == NULL) return NULL;

    if (pos == 0) {
        Node* temp = head->next;
        delete head;
        return temp;
    }

    head->next = deleteRecursive(head->next, pos - 1);
    return head;
}
```

---

## 📌 **Circular Linked List**
Unlike singly linked lists, circular linked lists:
- The last node points back to the first node (`head`).
- No `NULL` value in the `next` pointer.

### **Traversal in Circular Linked List**
```cpp
void printCircular(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
```

---

## 📌 **Doubly Linked List (DLL)**
A **doubly linked list** contains:
- A `next` pointer (points to the next node).
- A `prev` pointer (points to the previous node).

### **DLL Node Structure**
```cpp
class DoublyNode {
public:
    int data;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
```

### **Inserting in a Doubly Linked List**
```cpp
void insertAtHead(DoublyNode*& head, int data) {
    DoublyNode* newNode = new DoublyNode(data);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}
```

---

## 🏆 **Summary Table of Operations**

| Operation  | Singly LL | Doubly LL | Circular LL |
|------------|----------|----------|-------------|
| Insert at Head | ✅ | ✅ | ✅ |
| Insert at Tail | ✅ | ✅ | ✅ |
| Insert at Position | ✅ | ✅ | ✅ |
| Delete Head | ✅ | ✅ | ✅ |
| Delete from Middle | ✅ | ✅ | ✅ |
| Traversal | ✅ (O(N)) | ✅ (O(N)) | ✅ (O(N)) |

---

## 🎯 **Conclusion**
- **Linked lists** are useful for **dynamic memory allocation** and efficient insertions/deletions.
- **Singly Linked List** is simple but **Doubly Linked List** allows efficient backward traversal.
- **Circular Linked List** ensures no node is **NULL**.

Mastering linked lists is essential for competitive programming and system design! 🚀


## 📌 **Advanced Linked List Operations**

Following our basic understanding of linked lists (creation, traversal, insertion, and deletion), we now explore some advanced operations:

1. **Finding the Midpoint**
2. **Merging Two Sorted Linked Lists**
3. **Merge Sort on Linked Lists**
4. **Reversing a Linked List**
   - Recursive Approach
   - Improved Recursive Approach (Optimized)
   - Iterative Approach

---

## 🔍 **1. Finding the Midpoint of a Linked List**

### **Approach: Two-Pointer Technique**

- Use two pointers: `slow` and `fast`.
- `slow` pointer moves one step at a time, while the `fast` pointer moves two steps at a time.
- When the `fast` pointer reaches the end, the `slow` pointer is at the midpoint.

**Code Example:**
```cpp
Node* midpoint(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;  // midpoint
}
```

**Important Note:**
- For even-length lists, the above method returns the **first of the two middle nodes**.

---

## 🔗 **2. Merging Two Sorted Linked Lists**

### **Approach (Similar to merging sorted arrays):**
- Compare the heads of the two lists.
- Pick the smaller node and append it to the new merged list.
- Move the pointer of the list from which the node was picked.
- Continue until one list ends; append the remaining list to the merged list.

**Code Example:**
```cpp
Node* mergeSortedLists(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node* mergedHead = NULL;
    if (head1->data <= head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeSortedLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeSortedLists(head1, head2->next);
    }
    return mergedHead;
}
```

---

## 🔄 **3. Merge Sort on a Linked List**

### **Merge Sort Logic:**
- **Divide** the list into two halves using the midpoint approach.
- **Recursively** apply merge sort on both halves.
- **Merge** the two sorted halves using the merge function described above.

**Code Example:**
```cpp
Node* mergeSort(Node* head) {
    if (!head || !head->next)
        return head;

    Node* mid = midpoint(head);
    Node* half2 = mid->next;
    mid->next = NULL;  // split the list into two halves

    Node* sorted1 = mergeSort(head);
    Node* sorted2 = mergeSort(half2);

    return mergeSortedLists(sorted1, sorted2);
}
```

---

## ↩️ **4. Reversing a Linked List**

We discuss three methods for reversing a linked list:

### 🌀 **Method 1: Recursive Approach (Simple)**

- Reverse the smaller list first.
- Append the current head node at the end of the reversed smaller list.

**Time Complexity:** O(n²)

**Code Example:**
```cpp
Node* reverseLL(Node* head) {
    if (!head || !head->next) return head;

    Node* smallAns = reverseLL(head->next);

    Node* temp = smallAns;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;

    return smallAns;
}
```

---

### 🚀 **Method 2: Optimized Recursive Approach (Using Pair class)**

**Optimization Idea:**
- Maintain both head and tail pointers to avoid traversing to the end repeatedly.

**Code Example:**
```cpp
class Pair {
public:
    Node* head;
    Node* tail;
};

Pair reverseLL_Optimized(Node* head) {
    if (!head || !head->next) {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLL_Optimized(head->next);
    smallAns.tail->next = head;
    head->next = NULL;

    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}
```

**Time Complexity:** O(n)

---

### ⚡ **Method 3: Most Optimized Recursive Approach**

Directly utilize the fact that the tail node is always `head->next`.

**Code Example:**
```cpp
Node* reverseLL_Best(Node* head) {
    if (!head || !head->next) return head;

    Node* smallAns = reverseLL_Best(head->next);
    Node* tail = head->next;
    tail->next = head;
    head->next = NULL;

    return smallAns;
}
```

**Time Complexity:** O(n)

---

### 🔁 **Method 4: Iterative Approach**

Use three pointers: `prev`, `current`, and `next`:
- Reverse the direction of each node iteratively.

**Code Example:**
```cpp
Node* reverseIterative(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current) {
        next = current->next;       // Store next node
        current->next = prev;       // Reverse current node's pointer
        prev = current;             // Move pointers forward
        current = next;
    }
    return prev; // New head
}
```

**Time Complexity:** O(n)

---

## 📖 **Summary of Operations:**

| Operation                        | Time Complexity | Difficulty        |
|----------------------------------|-----------------|-------------------|
| Midpoint                         | O(n)            | Easy              |
| Merge Two Sorted Lists           | O(n+m)          | Medium            |
| Merge Sort                       | O(n log n)      | Medium            |
| Reverse (Recursive, Basic)       | O(n²)           | Easy              |
| Reverse (Recursive, Optimized)   | O(n)            | Medium            |
| Reverse (Iterative)              | O(n)            | Medium (Preferred)|

---

## 🎯 **Practice Problems:**

Enhance your understanding by practicing more:

- [HackerRank - Linked List Problems](https://www.hackerrank.com/domains/data-structures?filters%5Bsubdomains%5D%5B%5D=linked-lists)

---

## 🗝️ **Key Points to Remember:**

- **Two-Pointer Approach** is essential for midpoint and cycle-detection problems.
- **Merge sort** is efficient for sorting linked lists as it doesn’t require random access.
- The **iterative approach** for reversing linked lists is generally preferred due to simplicity and optimal performance.

---

These comprehensive notes equip you with advanced operations on linked lists, ensuring strong theoretical understanding and practical expertise for efficient problem-solving.
