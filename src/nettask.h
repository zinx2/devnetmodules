#pragma once
#include <QObject>
#include <QNetworkAccessManager>

class QNetworkReply;
class Model;
class NetTask : public QObject
{
	Q_OBJECT
      
public:
	explicit NetTask(QObject* parent = 0);
	~NetTask();
	
	void request(QString urlStr);

	public slots:
	
	void test();
	void title();


private:	
	Model* m_model = nullptr;
	int cnt = 0;

	QNetworkAccessManager m_netManager;
	QNetworkReply *m_netReply;
};