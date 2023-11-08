# abhi-STL2.cpp
STL stands for the Standard Template Library in C++. It is a collection of template classes and functions that provide general-purpose classes and functions with templates to implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks. The STL is a powerful and fundamental part of C++ that can significantly simplify and speed up your code development.

Here are some common components of the STL with examples:

1. **Vectors**:
   Vectors are dynamic arrays that can grow in size. They provide fast random access and are commonly used for storing collections of data.

   ```cpp
   #include <vector>
   std::vector<int> numbers = {1, 2, 3, 4, 5};
   numbers.push_back(6);
   ```

2. **Lists**:
   Lists are doubly-linked lists, allowing for efficient insertions and deletions at both ends of the list.

   ```cpp
   #include <list>
   std::list<char> characters = {'a', 'b', 'c'};
   characters.push_back('d');
   characters.push_front('z');
   ```

3. **Queues**:
   Queues are implemented using the `queue` or `deque` (double-ended queue) data structures in the STL.

   ```cpp
   #include <queue>
   std::queue<int> q;
   q.push(1);
   q.push(2);
   int frontElement = q.front();
   q.pop();
   ```

4. **Stacks**:
   Stacks are implemented using the `stack` container in the STL.

   ```cpp
   #include <stack>
   std::stack<int> s;
   s.push(1);
   s.push(2);
   int topElement = s.top();
   s.pop();
   ```

5. **Maps and Sets**:
   Maps store key-value pairs, and sets store unique values.

   ```cpp
   #include <map>
   #include <set>
   std::map<std::string, int> phoneBook;
   phoneBook["Alice"] = 123456;
   
   std::set<int> uniqueNumbers = {5, 3, 1, 3, 2};
   ```

6. **Algorithms**:
   The STL provides various algorithms to operate on containers, such as `sort`, `find`, `transform`, and more. These algorithms can be used with different containers.

   ```cpp
   #include <algorithm>
   std::vector<int> numbers = {5, 2, 8, 1, 6};
   std::sort(numbers.begin(), numbers.end());
   int findResult = std::find(numbers.begin(), numbers.end(), 8);
   ```

7. **Iterators**:
   Iterators allow you to traverse and manipulate elements in containers. They are used in conjunction with various algorithms.

   ```cpp
   std::vector<int> numbers = {1, 2, 3, 4, 5};
   std::vector<int>::iterator it = numbers.begin();
   ++it;
   int secondElement = *it;
   ```

STL components significantly simplify the implementation of common data structures and algorithms in C++. They promote code reusability and readability while providing efficient and well-tested implementations.
