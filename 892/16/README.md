## 一、分析与解答（6×10=20）

1、线性表有两种存储结构：一种是顺序表，一种是链表。请比较二者的差异与优缺点。

2、总盘数为n的Hanoi塔（汗诺塔）需要移动多少次？假设三根柱子分别为A、B、C，最初有四个盘子都在A柱，大盘在下、小盘在上依次放置。请给出将四个盘子按照Hanoi塔的游戏规则全部移动到C柱的操作序列。

3、已知一颗完全二叉树有892个节点，请计算：

- 树的高度
- 叶节点个数
- 单支节点个数
- 最后一个非终端节点的序号

4、设有一堆栈，其入栈和出栈操作分别为`PUSH`和`POP`。现有三个元素a、b、c将依次进栈。请列出所有可能的出栈序列和获得该出栈序列的操作过程

5、设有n个元素采用冒泡排序法进行排序，通常需要进行多少趟排序？对于第i趟冒泡通常需要进行多少次关键字比较？在程序设计中如何设置判断条件，有可能使冒泡趟数减少并且能完成排序。

6、给定一个n个元素的整数数组A。A中连续的相等元素所形成的数据区域为“块”。请设计算法，求A中最大块的长度。

## 二、程序设计（6x15=90）

1、某函数原型为`int MySum(int m,int n)`;其功能是求两个正整数参数m到n之间（包括m和n）所有偶数的和。例如`Mysum(3,10)`的返回值为28.请给出该函数的实现代码。

2、编写程序，求e的值，`e≈1+1/1!+1/2!+1/3!+1/4!+...`,最后一项的值小于1e-6。

3、编写程序，从键盘输入正整数n（n不大于20），打印一个n层的杨辉三角形。例如从键盘输入4，则输出以下图形。

```
   1
  1 1
 1 2 1
1 3 3 1
```

4、编写一个函数，功能是对矩阵进行处理。对于一个`m X n`矩阵，执行函数后使其每行元素的大小按照升序排列。

5、采用递归思想，设计并实现一个函数，其功能是将正整数参数`n`，由低位到高位倒序输出。例如`n`为`4892`，则输出`2 9 8 4`。

6、编写程序，从键盘输入一个字符串，内有数字和非数字字符，如`xy12ab93?5786$`，连续的数字成为一个整数。例如：上述字符串中有3个整数：`12、93和5786`。统计字符串中有多少整数，并依次输出。


