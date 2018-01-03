#pragma once
#include <QObject>
#include <QTimer>
#include <QDebug>
#include "model.h"

class NetTask : public QObject
{
	Q_OBJECT
public:
	explicit NetTask(QObject* parent = 0) : QObject(parent)	{ }
	void setModel(Model* m) { m_model = m; }

	void setTimer()
	{
		m_timer = new QTimer(this);
		connect(m_timer, SIGNAL(timeout()), this, SLOT(test()));
		//m_timer->setInterval(1000);
		QTimer::singleShot(1000, this, SLOT(test()));
		m_timer->start(1000);
	}

	public slots:
	void test() { 
		//qDebug() << "TESTING...";	
		if (m_model != nullptr)
			m_model->setTitle("title" + QString::number(cnt));

		cnt++;
	}

private:
	QTimer* m_timer;
	Model* m_model = nullptr;

	int cnt = 0;
	

};