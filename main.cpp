/* 
 * File:   main.cpp
 * Author: luowf
 *
 * Created on July 31, 2014, 5:22 PM
 */

#include <cstdlib>
#include <iostream>
#include "PublicFunction.h"
#include <string>
#include "RetCode.h"

using namespace std;

std::wstring s2ws(const std::string& s)
{
	std::string curLocale = setlocale(LC_ALL, ""); 
	const char* _Source = s.c_str();
	size_t _Dsize = mbstowcs(NULL, _Source, 0) + 1;
	wchar_t *_Dest = new wchar_t[_Dsize];
	wmemset(_Dest, 0, _Dsize);
	mbstowcs(_Dest,_Source,_Dsize);
	std::wstring result = _Dest;
	delete []_Dest;
	setlocale(LC_ALL, curLocale.c_str());
	return result;
}

//void StringToWchar(const string str, wchar_t* strDest)
//{
//    wstring wStr(str);
//    if(wStr != NULL)
//    {
//        DELETE_POINTER(strDest);
//    }
//    strDest = new wchar_t[wStr.size() + 1];
//    wcscpy(strDest, wStr.c_str());
//    return true;
//}

#define DEQUALZEOR(X)  ((X) <= 0.0001 && (X) > -0.0001) 

ReturnCode division(double dividend, double divisor, double& result)
{
    if(DEQUALZEOR(divisor))
        return RT_PARAM_ERROR;
    else
    {
        result = dividend / divisor;
        return RT_OK;
    }
}

int main(int argc, char** argv) 
{
    double r = 0;
    ReturnCode ret = division(5, 1, r);
    if(RT_PARAM_ERROR == ret)
    {
        std::cout << "参数错误，检查是否除数为0。" << std::endl;
    } else
    {
        std::cout << r << std::endl;
    }
    return 0;
}

