#include "pincodedll.h"
#include <qdebug.h>

PinCodeDLL::PinCodeDLL()
{
    logindialog = new LoginDialog;
}

PinCodeDLL::~PinCodeDLL()
{
    delete logindialog;
}

void PinCodeDLL::login()
{
    logindialog->show();
}
