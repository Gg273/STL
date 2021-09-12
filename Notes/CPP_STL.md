# C++标准库（基于C++ 11）

推荐几个便于写程序的网页[cppreference.com](https://en.cppreference.com/w/)、[cplusplus.com - The C++ Resources Network](http://cplusplus.com/)、[GCC, the GNU Compiler Collection - GNU Project](http://gcc.gnu.org/)

## 1.STL体系结构基础介绍

#### ==STL六大部件（Components）==

* 容器（Container）：其实也就是抽象数据结构（Abstract Data Struct）
* 分配器（Allocator）：为容器分配内存
* 算法（Algorithm）：控制容器中的具体数据中的方法，通常放在类中；例如排序数组中的数据
* 迭代器（Iterator）：泛化的指针，可以通过迭代器来访问容器中的每一个数据
* 适配器（Adapter）：转换·····
* 仿函数（Functor）：类似为一个函数

##### ==容器==：基本所有的容器内部都包含有`.begin()`和`.end()`这两个内置函数，这两个函数就是返回一个==迭代器==即一个泛化的指针，`.begin()`返回的迭代器是容器中第一个元素的位置，`.end()`返回的迭代器是容器中最后一个元素的下一个位置；所以不可以解引用`.end()`返回的迭代器；