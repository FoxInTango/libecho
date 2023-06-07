#ifndef _LIBECHO_NODE_H_foxintango
#define _LIBECHO_NODE_H_foxintango
#include <libcpp/libcpp.h>
namespaceBegin(foxintango)
namespaceBegin(echo)
class foxintangoAPI node{
protected:
    unsigned int z_index;
    Array<node*> subnodes;
public:
    node(){};
    virtual ~node();
public:
    virtual Error show();
    virtual Error hide();
    virtual Error echo();
};
namespaceEnd
namespaceEnd
#endif
