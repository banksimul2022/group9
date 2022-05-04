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
       connect(getAsiakasManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getAsiakasSlot(QNetworkReply*)));
       reply = getAsiakasManager->get(request);
}

void DLLRestApi::getAsiakasSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getAsiakas";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString Nimisig;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "Nimi=" + json_obj["Nimi"].toString();
        Nimisig+= "Nimi=" + json_obj["Nimi"].toString();
        emit NimiSignal(Nimisig);
    }

   QString Osoitesig;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "Osoite=" + json_obj["Osoite"].toString();
        Osoitesig+= "Osoite=" + json_obj["Osoite"].toString();
        emit OsoiteSignal(Osoitesig);
    }

    QString Puhnrosig;
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "Puhelinnumero=" + json_obj["Puhelinnumero"].toString();
        Puhnrosig+= "Puhelinnumero=" + json_obj["Puhelinnumero"].toString();
        emit PuhelinnumeroSignal(Puhnrosig);
    }

    reply->deleteLater();
    getAsiakasManager->deleteLater();
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
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "Saldo=" + json_obj["Saldo"].toString();
    }

    reply->deleteLater();
    getSaldoManager->deleteLater();

}

void DLLRestApi::Nosto(QString Tilinro, QString Summa)
{
    QJsonObject jsonObj;
    jsonObj.insert("Tilinro",Tilinro);
    jsonObj.insert("Saldo",Summa);

    QString site_url="http://localhost:3000/tili";
    QNetworkRequest request((site_url));
    QString credentials="Toope:admin";
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    NostoManager = new QNetworkAccessManager(this);
    connect(NostoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(NostoSlot(QNetworkReply*)));

    reply = NostoManager->post(request, QJsonDocument(jsonObj).toJson());
}

void DLLRestApi::NostoSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getNosto";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    reply->deleteLater();
    NostoManager->deleteLater();

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
        qDebug() << json_obj["Tunnusluku"].toString();
    }

    reply->deleteLater();
    getKorttiManager->deleteLater();

}

void DLLRestApi::getKymmenenTilitapahtumaa(QString Tilinro)
{
       QString site_url="http://localhost:3000/tilitapahtumat/" + Tilinro + "/"; // kutsu backendiin
       qDebug() << "DLLRestApi::getKymmenenTilitapahtumaa = " + site_url;

       QNetworkRequest request ((site_url));
       QString credentials="Toope:admin";
       QByteArray data = credentials.toLocal8Bit().toBase64();
       QString headerData = "Basic " + data;
       request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

       getKymmenenTilitapahtumaaManager = new QNetworkAccessManager(this);
       connect(getKymmenenTilitapahtumaaManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getKymmenenTilitapahtumaaSlot(QNetworkReply*)));
       reply = getKymmenenTilitapahtumaaManager->get(request);
}

void DLLRestApi::getKymmenenTilitapahtumaaSlot(QNetworkReply *reply)
{
    qDebug() << "DLLRestApi::getKymmenenTilitapahtumaa";
    QByteArray response_data=reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    for (int i = 0; i < 10; i++)
    {
    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "PvmAika=" + json_obj["PvmAika"].toString();
    }

    foreach (const QJsonValue &value, json_array)
    {
        QJsonObject json_obj = value.toObject();
        qDebug() << "Summa=" + json_obj["Summa"].toString();
    }
    }

    reply->deleteLater();
    getKymmenenTilitapahtumaaManager->deleteLater();
}

