#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "DLLRestApi_global.h"
#include <QString>
#include <QDebug>

class DLLRESTAPI_EXPORT DLLRestApi : public QObject
{
    Q_OBJECT

public:
    DLLRestApi(QObject *parent = nullptr);
    ~DLLRestApi();

    void getAsiakas(QString);
   /* void getSaldo(QString);
    void postTilitapahtuma(QString);
    void getKymmenenTilitapahtumaa(QString);
    void getKortti(QString);
    void getAsiakasFromKortti (QString);
    void getTiliFromKortti(QString);
    QString returnResponseData();
    void Nosto(QString,QString);*/

signals:
  //  void getAsiakasSignal(QString);
   /* void getSaldoSignal(QString);
    void postTilitapahtumaSignal(QString);
    void getKymmenenTilitapahtumaaSignal(QString);
    void getKorttiSignal(QString);
    void getAsiakasFromKorttiSignal(QString);
    void getTiliFromKorttiSignal(QString);
    void NostoSignal(QString);*/

private slots:
    void getAsiakasSlot (QNetworkReply *reply);
    /*void getSaldoSlot (QNetworkReply *reply);
    void getTilitapahtumaSlot(QNetworkReply *reply);
    void getKymmenenTilitapahtumaaSlot(QNetworkReply *reply);
    void getKorttiSlot(QNetworkReply *reply);
    void getAsiakasFromKorttiSlot(QNetworkReply *reply);
    void getTiliFromKorttiSlot(QNetworkReply *reply);
    void NostoSlot(QNetworkReply *reply);
    void postTilitapahtumaSignal(QNetworkReply *reply);*/

private:
    QNetworkAccessManager *getAsiakasManager;
   /* QNetworkAccessManager *getSaldoManager;
    QNetworkAccessManager *PostTilitapahtumaManager;
    QNetworkAccessManager *getKymmenenTilitapahtumaaManager;
    QNetworkAccessManager *getKorttiManager;
    QNetworkAccessManager *getAsiakasFromKorttiManager;
    QNetworkAccessManager *getTiliFromKorttiManager;
    QNetworkAccessManager *NostoManager;*/

    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // DLLRESTAPI_H
