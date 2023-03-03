#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>

typedef std::string mystr;

class BaseObject
{
public:
    explicit BaseObject(const mystr &name = "BaseObject");
    virtual ~BaseObject();

    const mystr& name() { return m_name; }

private:
    mystr m_name;
};

#endif // BASEOBJECT_H