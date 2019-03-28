#include "my_string.h"


inline 
String::String(const char* cstr)    //这里写成(const char* cstr = 0)会报错
{
    if(cstr){
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data,cstr);
    }
    else{  //未指定初始值
        m_data = new char[1];
        *m_data = '\0';
    }
}
inline   //???????作用？
String::String(const String &str)
{
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data,str.m_data);
}

inline
String::~String()
{
    delete[] m_data;
}

inline
String String::operator+(const String &str)
{
    strcat(m_data,str.m_data);  //strcat可能会导致溢出
    return *this;
}