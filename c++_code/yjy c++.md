# c语言基础

打空格：1.逗号后面  	2.运算符前后	3.for循环里的分号后	4.小括号和花括号间	5.双斜杠注释后	

函数：memset	头文件：string.h	为每一个**字节**附上一个值	 范围：-128~127  memset(指针从当前位置开始， 想赋的值，为后面多少个字节赋值 )

​			对int数组赋值 eg. meset (arr, 0,5*4) //数组长度是5，每个int是4个字节，用5 * 4或者sizeof(arr)

​			bool	头文件：stdbool

​			rand()	随机数	头文件：stdlib

#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main (void) {
	srand((unsigned)time(NULL));
	int a = rand();
	printf ("%d", a);
	return 0;
}

​			math	1.pow(x,y)  	2.sqrt(x) 	 3.fabs(x)"返回x的绝对值“ 	 4. log10(x)”返回以10为底x的对数“ 	5. ceil(x)"向上取整”	6.floor"向下取整“	7.modf(double x,double*y)"返回x的小数部分，整数部分赋值给y"	8.hypot(x,y)"返回根号下x平方+y平方“

9.fmax(x,y)"返回最大值”	10.fmin(x,y)"返回最小值“	

​            sprintf	按照格式将结果赋值给char数组	sprintf(arr, "%d %d %s\n%d",3, 4, "hello", 5);

**c++**基础知识**

1.头文件：一般去“c”，在开头加上“c”   例外：1.malloc函数要用<cstdlib>	2.meset函数要用<cstring>

2.iostream：输入cin  输出cout	cin >> a; cout << a;  包含了cstdio里面的输入输出，还包含了max和min函数

​                        endl相当于'\n'(慢于'\n')，

#include <iostream>
using namespace std;

int main (void) {
	int a;
	double b;
	cin >> a >> b;
	cout << a << ' ' << b << endl;
    return 0;
}

3.引用和取地址：引用：1.定义函数时，函数的参数列表里面的

​                                             int f (int& a) {

​                                                    return a + 1;

​                                             }

​                                          2.创建引用变量时，数据类型后面的&

​                                             int a = 3;

​                                             int &b = a;

​                                          3.定义函数时放在参数列表中

​                                              \#include <cstdio>

​                                              int f(int& t) { 

​                                                        ++t; 

​                                                         printf ("%p %d\n", &t, t);

​														 return t;

​												 }

​												 int main (void) {

​														 int a = 2; 

​														printf ("%p %d\n", &a, a);     

​														printf ("%d\n", f(a));

​														 printf ("%d\n", a); 

​													   return 0;

​												 }

​                              取地址：1.调用函数时，传参数的参数上面的&

​                                              f(&a);	注意：调用函数时不写&取地址

​                                             2.scanf里面的&

4.函数重载(c语言不行）：需满足：1.参数的个数不同	2.参数的类型不同	3.参数的顺序不同

5.pair: 	头文件：utility	pair<数据类型1， 数据类型2> 变量名	p.first 访问第一个数据	p.second 访问第二个数据

6.增强型for循环：for（元素的数据类型  变量：数组/容器）改变里面的值，数据类型要加引用

​                                 auto关键字会自动帮我们匹配类型

\#include <cstdio> 

int main (void) {

 int a[5] = {1, 2, 3, 4, 5};

 for (auto i : a) { 	

printf ("%d ", i);

 }	*// 输出：1 2 3 4 5*   

  return 0;

 }

**C++STL**

1.algorithm 包含很多常用的函数 	包含了“cstdlib”头文件

(1).max和min

max(a, b);	min(a,b);

在algorithm头文件下的max可以这样使用：max({3, 5, ,4 ,1 , 2}); //输出5

(2).abs(x)

返回整数的绝对值

如果是浮点数，要用"cmath"里的fabs函数

(3).swap

交换两个变量内的数据

(4).reverse

reverse(a, b)

将指定区间或迭代器范围内的元素反转（<u>左闭右开</u>）

int a[5] = {1, 2, 3, 4, 5};

reverse(a + 1, a + 4);

for(int i : a){

printf(%d, i)   // 输出：1 4  3 2 5

}

(5).next_permutation

将区间内的元素变为下一个<u>全排列</u>

#include <cstdio>

#include <algorithm>

using namespace std;

int main (){

int a[4] = {1, 2, 3, 4};

do{

​		printf("%d %d %d %d\n", a[1], a[2], a[3], a[4]);

}while(next_permutation(a,a+4));

return 0;

}

(6).fill

fill(a, b, val)	将区间（a,b)内的值赋为val

(7).sort

sort(a, b); 或sort(a, b, bool(*func)(T, T))；

将指定区间按从小到大排列

"bool cmp(int a, int b){

retuen a >= b;

}

int main(){

int a[5]={0, 4, 3, 2, 1};

sort(a, a+5, cmp);

for(int i : a){

printf("%d",i);

}//输出0，1,2,3,4；

}“

基本数据类型，有自带的比较类greater和less 	头文件：functional(一般不写)

greater<int>()

(8).max_element和min_element

返回区间内最大值/最小值的指针/迭代器

(9).find

find(a, b, ,val)

在区间从左到右找到第一个出现val的指针/迭代器

int a[5] = {3, 5, 1, 1, 2};
	printf ("%d", find(a, a+5, 1) -a);// *<u>指针之间的相减可以获取下标</u>*

(10).lower_bound和upper_bound

lower_bound(a, b, val): 二分法找区间第一个<u>大于等于</u>val的指针/迭代器

upper_bound(a, b, val): 二分法找区间第一个<u>大于</u>val的指针/迭代器

在升序数组或容器中才能顺利使用

如果是降序数组，则第四个参数加上greater<int>()

(11).unique

unique(a, b): 将升序数组/容器去重，并返回去重后的结尾指针/迭代器

int a[5] = {1, 1, 2, 3, 3};
	int i, len;
	printf ("%d\n", len = unique(a, a+5) - a);
	for (i = 0; i < len; ++i) {
		printf ("%d ", a[i]);

2.vector(容器：变长数组)

二维vector：vector<vector<int> > a(3, vector<int>(2, 4));

//三行两列的数组，值均为4

arr.size(): 返回arr容器中的元素个数

arr.capacity(): 查看容量，返回容量数

arr.reserve(x): 手动更改容量







