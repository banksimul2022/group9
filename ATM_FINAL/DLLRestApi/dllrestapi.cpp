#include "dllrestapi.h"
#include <qdebug.h>

DLLRestApi::DLLRestApi(QObject *parent) : QObject(parent)
{
    qDebug() << "DLLRestApi muodostin";
}

DLLRestApi::~DLLRestApi()
{
    qDebug() << "DLLRestApi tuhoaja";
}

void DLLRestApi::getAsiakas(QString idAsiakas)
{
       QString site_url="http://localhost:3000/asiakas/" + idAsiakas + "/"; // kutsu backendiin
       qDebug() << "DLLRestApi::getAsiakas = " + site_url;

       QNetworkRequest request ((site_url));
       QString credentials="Toope:admin";
       QByteArray data = credentials.toLocal8Bit().toBase64();
       QString headerData = "Basic " + data;
       request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

       getAsiakasManager = new QNetworkAccessManager(this);
       connect(getAsiakasManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(testiAsiakas(QNetworkReply*)));
       reply = getAsiakasManager->get(request);
}

void DLLRestApi::testiAsiakas(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getAsiakas";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        asiakastiedot.append(json_obj["Nimi"].toString());
        asiakastiedot.append(json_obj["Osoite"].toString());
        asiakastiedot.append(json_obj["Puhelinnumero"].toString());
    }
    qDebug() <<"asiakastiedot lähetetty";
    emit asiakasSignal(asiakastiedot);
}

void DLLRestApi::getSaldo(QString TiliNro)
{
    QString site_url="http://localhost:3000/tili/" + TiliNro +"/";
    qDebug() << "DLLRestApi::getSaldo = " + site_url;

    QNetworkRequest request((site_url));
    QString credentials="Toope:admin";
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    getSaldoManager = new QNetworkAccessManager(this);
    connect(getSaldoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getSaldoSlot(QNetworkReply*)));
    reply = getSaldoManager->get(request);
}

void DLLRestApi::getSaldoSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getSaldo";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    qDebug() << json_array;

    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        saldo.append(json_doc["saldo"].toString());
    }

    qDebug() <<"saldo lähetetty" << saldo;
    emit getSaldoSignal(saldo);
}

 void DLLRestApi::nosto(QString Tilinro, QString Summa)    //Ei toimi, korjataan jos jää aikaa
{
    QJsonObject jsonObj;
    jsonObj.insert("Saldo",Summa);
    qDebug() << "Nosto";

    QString site_url="http://localhost:3000/tili/" + Tilinro +"/";
    QNetworkRequest request((site_url));
    QString credentials="Toope:admin";
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    nostoManager = new QNetworkAccessManager(this);
    connect(nostoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(nostoSlot(QNetworkReply*)));

    reply = nostoManager->put(request, QJsonDocument(jsonObj).toJson());
}

void DLLRestApi::nostoSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getNosto";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    reply->deleteLater();
    nostoManager->deleteLater();

}

void DLLRestApi::getKortti(QString KorttiNro)
{
    QString site_url="http://localhost:3000/kortti/" + KorttiNro +"/";
    qDebug() << "DLLRestApi::getKortti = " + site_url;

    QNetworkRequest request((site_url));
    QString credentials="Toope:admin";
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    getKorttiManager = new QNetworkAccessManager(this);
    connect(getKorttiManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getKorttiSlot(QNetworkReply*)));
    reply = getKorttiManager->get(request);
}


void DLLRestApi::getKorttiSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getKortti";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        pin.append(json_obj["Tunnusluku"].toString());

    }
    qDebug() <<"pin lähetetty";
    emit getKorttiSignal(pin);

}

void DLLRestApi::getTilitapahtuma(QString Tilinro)
{
       QString site_url="http://localhost:3000/tilitapahtumat/" + Tilinro + "/"; // kutsu backendiin
       qDebug() << "DLLRestApi::getTilitapahtuma = " + site_url;

       QNetworkRequest request ((site_url));
       QString credentials="Toope:admin";
       QByteArray data = credentials.toLocal8Bit().toBase64();
       QString headerData = "Basic " + data;
       request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

       getTilitapahtumaManager = new QNetworkAccessManager(this);
       connect(getTilitapahtumaManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getTilitapahtumaSlot(QNetworkReply*)));
       reply = getTilitapahtumaManager->get(request);
}

void DLLRestApi::getTilitapahtumaSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getTilitapahtuma";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        tilitapahtumat.append(json_obj["PvmAika"].toString());
        tilitapahtumat.append(json_obj["Summa"].toString());
    }

    emit getTilitapahtumaSignal(tilitapahtumat);
    qDebug() << "Tilitapahtuma lähetetty";
    reply->deleteLater();
    getTilitapahtumaManager->deleteLater();
}

