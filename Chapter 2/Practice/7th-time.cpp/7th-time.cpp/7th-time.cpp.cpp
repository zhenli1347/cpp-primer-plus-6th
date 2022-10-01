// 7th-time.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void time(double hours, double minutes);
using namespace std;

int main()
{
    double hours;
    cout << "Enter the number of hours:";
    cin >> hours; //输入数字后回车会自动进行换行
    //cout << endl;
    double minutes;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    time(hours, minutes);
    //cin.get();
    //cin.get();
    //其中两个cin.get()可用于直接运行 程序(.exe)进行停留；
    //不使用的话直接运行程序基本算是直接闪退。
    return 0;
}

void time(double hours,double minutes )
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
