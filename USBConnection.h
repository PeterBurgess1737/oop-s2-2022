#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
using std::stack;

class USBConnection
{
private:
    static bool available_ids_initilised;

    int ID;

    USBConnection()
    {
        ID = available_ids.top();
        available_ids.pop();
    }

public:
    static stack<int> available_ids;

    static USBConnection *CreateUsbConnection()
    {
        if (available_ids.empty())
            return nullptr;

        return new USBConnection();
    }

    int get_id()
    {
        return ID;
    }

    ~USBConnection()
    {
        available_ids.push(ID);
    }
};

stack<int> USBConnection::available_ids({3, 2, 1});

#endif // USBCONNECTION_H