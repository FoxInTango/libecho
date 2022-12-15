#ifndef _ECHO_H_foxintango
#define _ECHO_H_foxintango
#include <libcpp/libcpp.h>

EXTERN_C_BEGIN
namespaceBegin(foxintango)
namespaceBegin(echo)
struct Color {
    unsigned char r,g,b,a;
};

struct Alignment {

};

class foxintangoAPI Target {
public:
    Target();
    virtual ~Target();
};

class foxintangoAPI Format {

};

class foxintangoAPI Range :public Target {
public:
    Range();
   ~Range();
};

class foxintangoAPI VoidTarget :public Target {
public:
    VoidTarget();
   ~VoidTarget();
};

class foxintangoAPI FileTarget :public Target {
public:
    FileTarget();
   ~FileTarget();
};

class foxintangoAPI ScreenTarget :public Target {
public:
    ScreenTarget();
   ~ScreenTarget();
public:
    void clear();
};

typedef ScreenTarget s;

//extern 

namespaceEnd
namespaceEnd
EXTERN_C_END
#endif
