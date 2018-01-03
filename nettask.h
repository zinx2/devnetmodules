#pragma once
#include <QObject>
#include <QTimer>
#include <QDebug>

class NetTask : public QObject
{
	Q_OBJECT
public:
	explicit NetTask(QObject* parent = 0) : QObject(parent)
	{
		m_timer = new QTimer(this);
		connect(m_timer, SIGNAL(timeout()), this, SLOT(test()));
		m_timer->start(1000);
	}

	public slots:
	void test()
	{
		qDebug() << "<TESTING...>";
	}

private:
	QTimer* m_timer;

};