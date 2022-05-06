#ifndef PINCODEDLL_H
#define PINCODEDLL_H

#include "PinCodeDLL_global.h"
#include "logindialog.h"

class PINCODEDLL_EXPORT PinCodeDLL
{
public:
    PinCodeDLL();
    ~PinCodeDLL();
    void login();

    LoginDialog* logindialog;


};

#endif // PINCODEDLL_H
