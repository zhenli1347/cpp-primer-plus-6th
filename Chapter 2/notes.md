#Chapter2

在vs 2021中编写C++程序并生成相应程序后，若直接运行生成后的程序需要在 “return  0; ”
之前添加 两个连续的 cin.get(); 才行；否则会直接闪退。最终的程序段为：

cin.get();
cin.get();
return 0;

##命名空间 -namespace 
目的：防止变量名称重复造成冲突，进而划定了一个更大的某种名称分类进行区分
##命名空间的创建
namespace name
{
    //函数或变量
};

##作用域操作符 :: 
如using  std::cin; 
using std::endl;
其中 using 为编译指令

##C语言函数库在C++中的使用
数学库 C语言中为math.h，C++中为cmath,但亦可使用math.h 
C语言的函数库在C++使用时，通常是
 #include <cmath> 或者 #include<math.h>的形式

##C++常用输入输出
###cin和cout
cin