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

## 2.容器结构与分类

* 序列式容器（Sequence Container）：
  * 数组（array）：存储在一个连续的固定空间的数据结构，每个元素紧密连接；
  * 向量（vector）：和数组类似，但是它的空间可以尾部扩展；这里扩展其实是通过另外在分配一个更大的内存，然后把原来内存的全部元素复制到这个更大的内存中去。所以在使用vector前尽量先分配一个适合的大小；
  * 双向队列（deque）：存储在一个连续空间可以双向扩展的数据结构，
  * 链表（list）：它的元素不是存储在一个连续的空间，是通过指针来链接每一个元素的，可以通过一个元素访问到它前后的元素；
  * 单项链表（forward-list）：和链表一样，只是元素和元素之间链接是通过一个指针进行的；例如可能通过一个随机元素在它前后都有元素的情况下只能访问到它后面的元素；每个元素占用的内存比链表小；
* 关联式容器（Associative Container）：具有一个关键词的和值，通过关键词可以很容易的查找值；是通过树（tree）实现的
  * 集合（set/multiset）：它的关键词和值一样；
  * 映射（map/multimap）：它的关键词和值分开存放；
* 不定序式容器（Unordered Container）：实际上是通过哈希表（hashtable）来实现的
  * 不定序集合（unordered set/multiset）：
  * 不定序映射（unordered map/multimap）：

## 3.