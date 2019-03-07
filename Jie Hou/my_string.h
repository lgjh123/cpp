#ifndef __MYSTRING__
#define __MYSTRING__

#include<cstring>
class String
{
public:
    //big three
    String(const char* cstr = 0);
    String(const String& str);
    String& operator=(const String& str);
    ~String();
    //
    char* get_c_str() const {return m_data;}
private:
    char* m_data;
};

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

inline
String::~String()
{
    delete[] m_data;
}












#endif