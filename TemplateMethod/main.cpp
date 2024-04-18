#include <iostream>

class TemplateMethodBase
{
public:
    void NormalMethod();
    virtual void subMethod() = 0;
    virtual ~TemplateMethodBase()=default;
};

void TemplateMethodBase::NormalMethod() {
    //...
    subMethod();
    //...
}


class conMethod1 : public TemplateMethodBase
{
public:
    void subMethod() override;
};

void conMethod1::subMethod() {std::cout<<"using subMethod1";}

int main() {
    conMethod1 method1;
    method1.NormalMethod();
    return 0;
}
