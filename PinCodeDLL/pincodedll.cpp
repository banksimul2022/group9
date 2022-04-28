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

void PinCodeDLL::tulostaTerveisia()
{
    qDebug() <<"Terveisiä pincodeDLL:stä";
}

void PinCodeDLL::login()
{
    logindialog->show();
}
