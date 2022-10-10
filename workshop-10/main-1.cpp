#include <iostream>
using std::cout;
using std::endl;

#include <stack>
using std::stack;

#include "USBConnection.h"

#define max_usb_ports 10

// Creating the stack of avaliable ids
stack<int> USBConnection::available_ids({3, 2, 1});

int main()
{
    // Array of usb connections
    USBConnection *c[max_usb_ports];
    // Creating lots of them
    for (int i = 0; i < max_usb_ports; i++)
    {
        // CreateUsbConnection is a static function
        // it creates a new object of USBConnection ...
        // if a port is available
        c[i] = USBConnection::CreateUsbConnection();
        if (c[i] != nullptr)
        {
            cout << "USB connection with ID =" << c[i]->get_id() << " was created\n";
        }
        else
        {
            cout << "no more USB ports available\n";
        }
    }
    // let's unplug one use connection
    delete c[1];
    // this should return ID 2 to the stack.

    USBConnection *a = USBConnection::CreateUsbConnection();
    if (a != nullptr)
    {
        cout << "USB connection with ID =" << a->get_id() << " was created\n";
    }
    else
    {
        cout << "no more USB ports available\n";
    }

    return 0;
}