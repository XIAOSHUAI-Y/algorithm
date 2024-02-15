#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <graphics.h>

using namespace std;

// 全局变量
string expression; // 存储用户输入的表达式

// 判断运算符的优先级
int getPriority(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    else if (op == '^')
    {
        return 3;
    }
    return 0;
}

// 执行运算
double performOperation(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            throw runtime_error("除数不能为零！");
        }
    case '^':
        return pow(num1, num2);
    default:
        throw runtime_error("无效的运算符！");
    }
}

// 计算表达式的值
double calculateExpression()
{
    stack<double> numStack; // 存储操作数的栈
    stack<char> opStack;    // 存储运算符的栈

    for (char c : expression)
    {
        if (isdigit(c))
        {
            double num = c - '0';
            numStack.push(num);
        }
        else if (c == '(')
        {
            opStack.push(c);
        }
        else if (c == ')')
        {
            while (!opStack.empty() && opStack.top() != '(')
            {
                char op = opStack.top();
                opStack.pop();

                double num2 = numStack.top();
                numStack.pop();
                double num1 = numStack.top();
                numStack.pop();

                double result = performOperation(num1, num2, op);
                numStack.push(result);
            }
            if (opStack.empty())
            {
                throw runtime_error("括号不匹配！");
            }
            opStack.pop(); // 弹出左括号
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            while (!opStack.empty() && getPriority(opStack.top()) >= getPriority(c))
            {
                char op = opStack.top();
                opStack.pop();

                double num2 = numStack.top();
                numStack.pop();
                double num1 = numStack.top();
                numStack.pop();

                double result = performOperation(num1, num2, op);
                numStack.push(result);
            }
            opStack.push(c);
        }
        else if (c != ' ' && c != '\t')
        {
            throw runtime_error("无效的字符！");
        }
    }

    while (!opStack.empty())
    {
        char op = opStack.top();
        opStack.pop();

        double num2 = numStack.top();
        numStack.pop();
        double num1 = numStack.top();
        numStack.pop();

        double result = performOperation(num1, num2, op);
        numStack.push(result);
    }

    if (numStack.size() != 1)
    {
        throw runtime_error("表达式错误！");
    }

    return numStack.top();
}

// 绘制界面
void drawUI()
{
    initgraph(400, 300); // 初始化绘图窗口大小

    // 绘制界面元素
    settextcolor(BLACK);
    settextstyle(20, 0, _T("宋体"));
    outtextxy(10, 10, _T("请输入要计算的表达式："));

    setfillcolor(WHITE);
    bar(10, 40, 390, 70); // 绘制文本框背景

    settextcolor(BLACK);
    settextstyle(20, 0, _T("宋体"));
    outtextxy(20, 45, expression.c_str()); // 绘制用户输入的表达式

    setfillcolor(LIGHTGRAY);
    bar(150, 100, 250, 130); // 绘制计算按钮背景

    settextcolor(BLACK);
    settextstyle(20, 0, _T("宋体"));
    outtextxy(180, 105, _T("计算")); // 绘制计算按钮文本

    // 监听鼠标点击事件
    MOUSEMSG m;
    while (true)
    {
        m = GetMouseMsg();
        if (m.uMsg == WM_LBUTTONDOWN)
        {
            if (m.x >= 150 && m.x <= 250 && m.y >= 100 && m.y <= 130)
            {
                try
                {
                    double result = calculateExpression();
                    char buffer[50];
                    sprintf(buffer, "结果是：%.2f", result);
                    outtextxy(10, 150, buffer);
                }
                catch (const exception &e)
                {
                    outtextxy(10, 150, e.what());
                }
            }
        }
    }

    closegraph(); // 关闭绘图窗口
}

int main()
{
    cout << "请输入要计算的表达式：";
    getline(cin, expression);

    drawUI();

    return 0;
}