#ifndef __MYSTRING__
#define __MYSTRING__

#include<cstring>
class String
{
public:
    //构造与析构
    String(const char* cstr = 0);
    String(const String& str);
    ~String();


    String& operator=(const String& str);
    String operator+(const String& str);
    
    char* get_c_str() const {return m_data;};


private:
    char* m_data;
};

#endif