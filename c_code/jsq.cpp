#ifndef STACK_H

#define STACK_H

 

#include<cassert>

#include<iostream>

using namespace std;

 

template<typename T>classStack;//类声明

 

template<typename T>class Node{

private:

    Tinfo;

    Node<T>*link;

public:

    Node(Tdata = 0, Node<T>*next = NULL){

        info = data;

        link = next;

    }

    friendclass Stack<T>;

};

 

//链栈类模板，无头结点链表

template<typename T>classStack{

private:

    Node<T>*top;//栈顶指针

public:

    Stack(){top = NULL; }

    ~Stack();

    voidPush(const T&data);//压栈

    TPop();//弹出

    TGetTop();//取栈顶元素

    voidMakeEmpty();//清空栈

    boolIsEmpty(){ return top == NULL; }

};

 

template<typename T>Stack<T>::~Stack(){MakeEmpty(); }

 

template<typename T>voidStack<T>::Push(const T&data){

    top= new Node<T>(data, top);

}

 

template<typename T>voidStack<T>::MakeEmpty(){

    Node<T>*temp;

    while(top != NULL){

        temp = top;

        top = top->link;

        delete temp;

    }

}

 

template<typename T>TStack<T>::Pop(){

    assert(!IsEmpty());

    Node<T>*temp= top;

    Tdata = temp->info;

    top= top->link;//丢弃栈顶结点

    deletetemp;//释放栈顶结点

    returndata;//返回栈顶数据

}

 

template<typename T>TStack<T>::GetTop(){

    assert(!IsEmpty());

    returntop->info;

}

#endif

//保存在Stack.h

 

#ifndef CALCULATOR_H

#define CALCULATOR_H

 

#include"Stack.h"

#include<iostream>

#include<string>

 

using namespace std;

 

class Calculator{

private:

    Stack<double>Nstack;

    Stack<char>Ostack;

public:

    doublea;

    Calculator():a(0){};

    ~Calculator(){};

    voidClear();

    voidCompute(char Opr);

    voidGetTwoNumDouble(double &Num1,double &Num2);

    voidGetTwoNumInt(int &Num1,int &Num2);

    voidCal(string);//计算器运算程序

};

 

#endif

//保存在Calculator.h

 

//{{NO_DEPENDENCIES}}

// Microsoft Visual C++ 生成的包含文件。

// 供 Resource.rc使用

//

#define IDR_MYMENU                      101

#define IDD_START                       102

#define IDC_BUTTON1                     1000

#define IDC_BUTTON2                     1001

#define IDC_BUTTON3                     1002

#define IDC_BUTTON4                     1003

#define IDC_BUTTON5                     1004

#define IDC_BUTTON6                     1005

#define IDC_BUTTON7                     1006

#define IDC_BUTTON8                     1007

#define IDC_BUTTON9                     1008

#define IDC_BUTTON10                    1009

#define IDC_BUTTON11                    1010

#define IDC_BUTTON12                    1011

#define IDC_BUTTON13                    1012

#define IDC_BUTTON14                    1013

#define IDC_BUTTON15                    1014

#define IDC_BUTTON16                    1015

#define IDC_BUTTON17                    1016

#define IDC_BUTTON18                    1017

#define IDC_LIST1                       1018

#define IDC_BUTTON19                    1019

#define IDC_BUTTON20                    1020

#define ID_FILE_EXIT                    40001

#define ID_START_START                  40002

 

// Next default values for newobjects

//

#ifdef APSTUDIO_INVOKED

#ifndef APSTUDIO_READONLY_SYMBOLS

#define _APS_NEXT_RESOURCE_VALUE        103

#define _APS_NEXT_COMMAND_VALUE         40003

#define _APS_NEXT_CONTROL_VALUE         1021

#define _APS_NEXT_SYMED_VALUE           101

#endif

#endif

//保存在resource.h

 

// Microsoft Visual C++ generatedresource script.

//

#include "resource.h"

 

#define APSTUDIO_READONLY_SYMBOLS

/

//

// Generated from the TEXTINCLUDE 2resource.

//

#ifndef __BORLANDC__

#include "winres.h"

#endif

 

/

#undef APSTUDIO_READONLY_SYMBOLS

 

/

// 英语(美国) resources

 

#if !defined(AFX_RESOURCE_DLL) ||defined(AFX_TARG_ENU)

LANGUAGE LANG_ENGLISH,SUBLANG_ENGLISH_US

 

#ifdef APSTUDIO_INVOKED

/

//

// TEXTINCLUDE

//

 

1 TEXTINCLUDE

BEGIN

   "resource.h\0"

END

 

2 TEXTINCLUDE

BEGIN

   "#ifndef __BORLANDC__\r\n"

   "#include ""winres.h""\r\n"

   "#endif\r\n"

   "\0"

END

 

3 TEXTINCLUDE

BEGIN

   "\r\n"

   "\0"

END

 

#endif    // APSTUDIO_INVOKED

 

 

/

//

// Menu

//

 

IDR_MYMENU MENU

BEGIN

   POPUP "&File"

   BEGIN

        MENUITEM "E&xit",                       ID_FILE_EXIT

   END

   POPUP "&START"

   BEGIN

        MENUITEM"&START...",                  ID_START_START

   END

END

 

 

/

//

// Dialog

//

 

IDD_START DIALOGEX 0, 0, 339, 182

STYLE DS_SETFONT | DS_MODALFRAME |WS_POPUP | WS_CAPTION | WS_SYSMENU

CAPTION "My Calculator"

FONT 8, "MS Sans Serif", 0,0, 0x1

BEGIN

   PUSHBUTTON     "Cancel",IDCANCEL,261,135,63,28

   PUSHBUTTON     "1",IDC_BUTTON1,7,47,50,39

   PUSHBUTTON     "2",IDC_BUTTON2,7,84,50,39

   PUSHBUTTON     "3",IDC_BUTTON3,7,122,50,43

   PUSHBUTTON     "4",IDC_BUTTON4,57,48,50,37

   PUSHBUTTON     "5",IDC_BUTTON5,57,86,50,36

   PUSHBUTTON      "6",IDC_BUTTON6,58,123,50,42

   PUSHBUTTON     "7",IDC_BUTTON7,108,49,50,35

   PUSHBUTTON     "8",IDC_BUTTON8,108,85,50,37

   PUSHBUTTON     "9",IDC_BUTTON9,108,124,50,41

   PUSHBUTTON     "0",IDC_BUTTON10,159,49,50,35

   PUSHBUTTON     ".",IDC_BUTTON11,159,86,50,38

   PUSHBUTTON     "=",IDC_BUTTON12,159,124,50,41

   PUSHBUTTON     "+",IDC_BUTTON13,210,49,50,30

   PUSHBUTTON     "-",IDC_BUTTON14,210,79,50,28

   PUSHBUTTON     "*",IDC_BUTTON15,210,108,50,26

   PUSHBUTTON     "/",IDC_BUTTON16,209,135,50,29

   PUSHBUTTON     "(",IDC_BUTTON17,260,50,32,28

   PUSHBUTTON     ")",IDC_BUTTON18,293,51,32,27

   LISTBOX        IDC_LIST1,8,0,316,49,LBS_NOINTEGRALHEIGHT | LBS_EXTENDEDSEL | WS_VSCROLL| WS_TABSTOP

   PUSHBUTTON     "%",IDC_BUTTON19,261,80,63,28

   PUSHBUTTON     "Clear",IDC_BUTTON20,262,108,62,27

END

 

 

/

//

// DESIGNINFO

//

 

#ifdef APSTU// Microsoft Visual C++generated resource script.

//

#include "resource.h"

 

#define APSTUDIO_READONLY_SYMBOLS

/

//

// Generated from the TEXTINCLUDE 2resource.

//

#ifndef __BORLANDC__

#include "winres.h"

#endif

 

/

#undef APSTUDIO_READONLY_SYMBOLS

 

/

// 英语(美国) resources

 

#if !defined(AFX_RESOURCE_DLL) ||defined(AFX_TARG_ENU)

LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US

 

#ifdef APSTUDIO_INVOKED

/

//

// TEXTINCLUDE

//

 

1 TEXTINCLUDE

BEGIN

   "resource.h\0"

END

 

2 TEXTINCLUDE

BEGIN

   "#ifndef __BORLANDC__\r\n"

   "#include ""winres.h""\r\n"

   "#endif\r\n"

   "\0"

END

 

3 TEXTINCLUDE

BEGIN

   "\r\n"

   "\0"

END

 

#endif    // APSTUDIO_INVOKED

 

 

/

//

// Menu

//

 

IDR_MYMENU MENU

BEGIN

   POPUP "&File"

   BEGIN

        MENUITEM "E&xit",                       ID_FILE_EXIT

   END

   POPUP "&START"

   BEGIN

        MENUITEM"&START...",                  ID_START_START

   END

END

 

 

/

//

// Dialog

//

 

IDD_START DIALOGEX 0, 0, 339, 182

STYLE DS_SETFONT | DS_MODALFRAME |WS_POPUP | WS_CAPTION | WS_SYSMENU

CAPTION "My Calculator"

FONT 10, "MS Sans Serif",0, 0, 0x0

BEGIN

   PUSHBUTTON     "Cancel",IDCANCEL,261,135,63,28

   PUSHBUTTON     "1",IDC_BUTTON1,7,47,50,39

   PUSHBUTTON     "2",IDC_BUTTON2,7,84,50,39

   PUSHBUTTON     "3",IDC_BUTTON3,7,122,50,43

   PUSHBUTTON     "4",IDC_BUTTON4,57,48,50,37

   PUSHBUTTON     "5",IDC_BUTTON5,57,86,50,36

   PUSHBUTTON      "6",IDC_BUTTON6,58,123,50,42

   PUSHBUTTON     "7",IDC_BUTTON7,108,49,50,35

   PUSHBUTTON     "8",IDC_BUTTON8,108,85,50,37

   PUSHBUTTON     "9",IDC_BUTTON9,108,124,50,41

   PUSHBUTTON     "0",IDC_BUTTON10,159,49,50,35

   PUSHBUTTON     ".",IDC_BUTTON11,159,86,50,38

   PUSHBUTTON     "=",IDC_BUTTON12,159,124,50,41

   PUSHBUTTON     "+",IDC_BUTTON13,210,49,50,30

   PUSHBUTTON     "-",IDC_BUTTON14,210,79,50,28

   PUSHBUTTON     "*",IDC_BUTTON15,210,108,50,26

   PUSHBUTTON     "/",IDC_BUTTON16,209,135,50,29

   PUSHBUTTON     "(",IDC_BUTTON17,260,50,32,28

   PUSHBUTTON     ")",IDC_BUTTON18,293,51,32,27

    LISTBOX         IDC_LIST1, 8, 0, 316, 49,LBS_NOINTEGRALHEIGHT | LBS_EXTENDEDSEL | WS_VSCROLL | WS_TABSTOP

   PUSHBUTTON     "%",IDC_BUTTON19,261,80,63,28

   PUSHBUTTON     "Clear",IDC_BUTTON20,262,108,62,27

END

 

 

/

//

// DESIGNINFO

//

 

#ifdef APSTUDIO_INVOKED

GUIDELINES DESIGNINFO

BEGIN

   IDD_ABOUT, DIALOG

   BEGIN

        LEFTMARGIN, 7

        RIGHTMARGIN, 332

        TOPMARGIN, 7

        BOTTOMMARGIN, 175

   END

END

#endif    // APSTUDIO_INVOKED

 

#endif    // 英语(美国) resources

/

 

 

 

#ifndef APSTUDIO_INVOKED

/

//

// Generated from the TEXTINCLUDE 3resource.

//

 

 

/

#endif    // not APSTUDIO_INVOKED

 

NVOKED

GUIDELINES DESIGNINFO

BEGIN

   IDD_START, DIALOG

   BEGIN

   END

END

#endif    // APSTUDIO_INVOKED

 

#endif    // 英语(美国) resources

/

 

 

 

#ifndef APSTUDIO_INVOKED

/

//

// Generated from the TEXTINCLUDE 3resource.

//

 

 

/

#endif    // not APSTUDIO_INVOKED

//保存在Resource.rc

 

#include<iostream>

#include<string>

#include<cmath>

#include<cstdlib>

#include <sstream>

#include"Calculator.h"

using namespace std;

 

void Calculator::Clear(){

    Nstack.MakeEmpty();

    Ostack.MakeEmpty();

}

 

voidCalculator::GetTwoNumDouble(double & Num1,double & Num2){

    Num1=Nstack.Pop();

    Num2=Nstack.Pop();

}

 

void Calculator::GetTwoNumInt(int&Num1,int &Num2){

    Num1=Nstack.Pop();

    Num2=Nstack.Pop();

}

 

void Calculator::Compute(char Opr){

    charOpr1=Opr;

    doubleNum1,Num2;

    intNum3,Num4;

    if(Opr!='='&&Opr!='%')GetTwoNumDouble(Num1,Num2);

    elseif(Opr!='=') GetTwoNumInt(Num3,Num4);

    switch(Opr){

    case'+':Nstack.Push(Num2+Num1);break;

    case'-':Nstack.Push(Num2-Num1);break;

    case'*':Nstack.Push(Num2*Num1);break;

    case'/':Nstack.Push(Num2/Num1);break;

    case'%':Nstack.Push(Num4%Num3);break;

    case'=':a=Nstack.Pop();break;

    }

}

void Calculator::Cal(string str){

    boolb1=true;

    boolb2=true;

    charch2,str2[50];

    stringstr1=str;

    intk,j=-1;

    Nstack.Push(0);

    if(str1[0]=='#'){

        for(k=1;k<=(int)str.length()-1;k++){

        if((str1[k]>='0'&&str1[k]<='9')||str1[k]=='.'){

            j++;

            str2[j]=str1[k];

        }

        else{

                if(j>=0){

                    str2[j+1]='\0';

                    Nstack.Push(atof(str2));

                    j=-1;

                }

            switch(str1[k]){

                case'+':case'-':

                    while(!Ostack.IsEmpty()&&Ostack.GetTop()!='('){//*************注意

                        ch2=Ostack.Pop();

                        Compute(ch2);

                    }

                    Ostack.Push(str1[k]);

                    break;

                case'*':case'/':case'%':

                    while(!Ostack.IsEmpty()&&b1&&Ostack.GetTop()!='('){

                        ch2=Ostack.Pop();

                        if(ch2=='*'||ch2=='/'||ch2=='%')

                            Compute(ch2);

                        else{

                            Ostack.Push(ch2);

                            b1=false;

                        }

                    }

                    Ostack.Push(str1[k]);

                    b1=true;

                    break;

                case'=':

                    while(!Ostack.IsEmpty()){

                        ch2=Ostack.Pop();

                        Compute(ch2);

                    }

                    Compute(str1[k]);

                    break;

                case'(':Ostack.Push(str1[k]);break;

                case')':

                    charstr3=Ostack.GetTop();

                    while(str3!='('){

                        str3=Ostack.Pop();

                        Compute(str3);

                        str3=Ostack.GetTop();

                    }

                    Ostack.Pop();

                    break;

            }

            }

    }

    }

    elsecout<<"输入格式错误！"<<endl;

}

//保存在Calculator.cpp

 

#include<iostream>

#include<string>

#include <sstream>

#include"Calculator.h"

using namespace std;

 

#include <windows.h>

#include "resource.h"

 

char buf1[20];

 

string DoubleToString(double d){

    stringstr;

    stringstreamss;

    ss<< d;

    ss>> str;

    returnstr;

}

 

//主函数，测试,下面是api

const char g_szClassName[] ="myWindowClass";

 

char buf[100];

int i = 1;

 

BOOL CALLBACK AboutDlgProc(HWND hwnd,UINT Message, WPARAM wParam, LPARAM lParam)

{

    buf[0]='#';

    switch(Message)

    {

    caseWM_INITDIALOG:

        return TRUE;

    caseWM_COMMAND:

        switch (LOWORD(wParam))

        {

        case IDC_BUTTON1:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '1';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON2:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '2';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON3:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '3';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON4:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '4';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON5:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '5';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON6:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '6';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON7:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '7';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON8:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '8';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON9:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '9';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON10:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '0';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON11:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '.';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON12:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '=';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

            CalculatorCalcul;

           Calcul.Cal(buf);

            stringstr1 = DoubleToString(Calcul.a);

            for(inti=0;i<str1.size();i++){

                buf1[i]=str1[i];

            }

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf1);

        }

            break;

        case IDC_BUTTON13:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '+';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON14:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '-';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON15:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '*';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON16:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '/';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON17:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '(';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON18:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= ')';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON19:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            buf[i]= '%';

            buf[++i]= '\0';

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_ADDSTRING, 0, (LPARAM)buf);

        }

            break;

        case IDC_BUTTON20:{

            SendDlgItemMessage(hwnd,IDC_LIST1, LB_RESETCONTENT, 0, 0);

            i=1;

            for(inti=1;buf[i]!='\0';i++){

                buf[i]='\0';

            }

        }

            break;

        case IDCANCEL:

            EndDialog(hwnd,IDCANCEL);

            break;

        }

        break;

    default:

        return FALSE;

    }

    returnTRUE;

}

 

LRESULT CALLBACK WndProc(HWND hwnd,UINT Message, WPARAM wParam, LPARAM lParam){

    switch(Message){

    caseWM_COMMAND:

        switch (LOWORD(wParam)){

        case ID_FILE_EXIT:

            PostMessage(hwnd,WM_CLOSE, 0, 0);

            break;

        case ID_START_START:{

            intret = DialogBox(GetModuleHandle(NULL),

                MAKEINTRESOURCE(IDD_START), hwnd,AboutDlgProc);

            if(ret == IDCANCEL){

                MessageBox(hwnd, "Dialog exited withIDCANCEL.", "Notice",

                        MB_OK | MB_ICONINFORMATION);

                }

            elseif (ret == -1){

                MessageBox(hwnd, "Dialog failed!","Error",

                        MB_OK | MB_ICONINFORMATION);

                }

        }

            break;

        }

        break;

    caseWM_CLOSE:

        DestroyWindow(hwnd);

        break;

    caseWM_DESTROY:

        PostQuitMessage(0);

        break;

    default:

        return DefWindowProc(hwnd, Message, wParam,lParam);

    }

    return0;

}

 

 

int WINAPI WinMain(HINSTANCEhInstance, HINSTANCE hPrevInstance,

    LPSTRlpCmdLine, int nCmdShow)

{

    WNDCLASSEXwc;

    HWNDhwnd;

    MSGMsg;

 

    wc.cbSize= sizeof(WNDCLASSEX);

    wc.style= 0;

    wc.lpfnWndProc= WndProc;

    wc.cbClsExtra= 0;

    wc.cbWndExtra= 0;

    wc.hInstance= hInstance;

    wc.hIcon= LoadIcon(NULL, IDI_APPLICATION);

    wc.hCursor= LoadCursor(NULL, IDC_ARROW);

    wc.hbrBackground= (HBRUSH)(COLOR_WINDOW + 1);

    wc.lpszMenuName= MAKEINTRESOURCE(IDR_MYMENU);

    wc.lpszClassName= g_szClassName;

    wc.hIconSm= LoadIcon(NULL, IDI_APPLICATION);

 

    if(!RegisterClassEx(&wc))

    {

        MessageBox(NULL, "Window RegistrationFailed!", "Error!",

            MB_ICONEXCLAMATION| MB_OK);

        return 0;

    }

 

    hwnd= CreateWindowEx(

        WS_EX_CLIENTEDGE,

        g_szClassName,

        "My First API",

        WS_OVERLAPPEDWINDOW,

        CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,

        NULL, NULL, hInstance, NULL);

 

    if(hwnd == NULL)

    {

        MessageBox(NULL, "Window CreationFailed!", "Error!",

            MB_ICONEXCLAMATION| MB_OK);

        return 0;

    }

 

    ShowWindow(hwnd,nCmdShow);

    UpdateWindow(hwnd);

 

    while(GetMessage(&Msg, NULL, 0, 0) > 0)

    {

        TranslateMessage(&Msg);

        DispatchMessage(&Msg);

    }

    returnMsg.wParam;

}

