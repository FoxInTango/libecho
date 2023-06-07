#ifndef _LIBECHO_VIEW_H_foxintango
#define _LIBECHO_VIEW_H_foxintango
#include "node.h"
#include <libcpp/libcpp.h>
namespaceBegin(foxintango)
namespaceBegin(echo)
class foxintangoAPI view :public node{
public:
    class foxintangoAPI border{
    public:
        char* color;
        char* border;
    };
protected:
    border v_border;// view border
public:
    view();
    virtual ~view();
};
namespaceEnd
namespaceEnd
#endif
