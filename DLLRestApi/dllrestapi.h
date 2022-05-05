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

    void getAsiakas(QString idAsiakas);
    void getSaldo(QString TiliNro);
    void postTilitapahtuma(QString);
    void getKymmenenTilitapahtumaa(QString TiliNro);
    void getKortti(QString KorttiNro);
    QString returnResponseData();
  //  void Nosto(QString TiliNro,QString Summa);


signals:
    void NimiSignal(QString);
    void OsoiteSignal(QString);
    void PuhelinnumeroSignal(QString);
    void getSaldoSignal(QString);
    void postTilitapahtumaSignal(QString);
    void getKymmenenTilitapahtumaaSignal(QString);
    void getKorttiSignal(QString);
    void getAsiakasFromKorttiSignal(QString);
    void getTiliFromKorttiSignal(QString);
//    void NostoSignal(QString);
    void asiakasSignal(QStringList);

public slots:
  //  void getAsiakasSlot (QNetworkReply *reply);
    void getSaldoSlot (QNetworkReply *reply);
 //   void getTilitapahtumaSlot(QNetworkReply *reply);
    void getKymmenenTilitapahtumaaSlot(QNetworkReply *reply);
    void getKorttiSlot(QNetworkReply *reply);
    void testiAsiakas(QNetworkReply *reply);
 //   void getAsiakasFromKorttiSlot(QNetworkReply *reply);
 //   void getTiliFromKorttiSlot(QNetworkReply *reply);
  //  void NostoSlot(QNetworkReply *reply);


private:
    QNetworkAccessManager *getAsiakasManager;
    QNetworkAccessManager *getSaldoManager;
    QNetworkAccessManager *PostTilitapahtumaManager;
    QNetworkAccessManager *getKymmenenTilitapahtumaaManager;
    QNetworkAccessManager *getKorttiManager;
    QNetworkAccessManager *getAsiakasFromKorttiManager;
    QNetworkAccessManager *getTiliFromKorttiManager;
//    QNetworkAccessManager *NostoManager;

    QStringList asiakastiedot;

    QNetworkReply *reply;
    QByteArray response_data;

};

#endif // DLLRESTAPI_H
