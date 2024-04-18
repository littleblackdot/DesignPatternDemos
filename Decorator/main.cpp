#include <iostream>

class NetStream
{
public:
    virtual void SendMessage() = 0;
    virtual ~NetStream()= default;
};

class WindowsNetStream : public NetStream
{
    void SendMessage() override {} ;
};

class LinuxNetStream : public NetStream
{
    void SendMessage() override{};
};

class DecoratorNetStream :public NetStream
{
protected:
    NetStream* stream;
};

class BufferedNetStream : public DecoratorNetStream
{
public:
    BufferedNetStream BufferedNetStream(NetStream* netStream): stream(netStream){}
    void SendMessage() override
    {
        //....
        stream->SendMessage();
        //.....
    }
};

class DecryStream: public DecoratorNetStream
{
public:
    void SendMessage() override
    {
        
    }
};

int main() {

}
