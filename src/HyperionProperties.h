#ifndef HYPERIONPROPERTIES_H
#define HYPERIONPROPERTIES_H

#include <QDialog>
#include "hyperion-obs.h"

namespace Ui {
	class HyperionProperties;
}

class HyperionProperties : public QDialog
{
	Q_OBJECT

public:
	explicit HyperionProperties(QWidget *parent = nullptr);
	~HyperionProperties() override;
	void enableStart(bool enable);
	void setWarningText(const char *msg);
	void saveSettings();

private Q_SLOTS:
	void onStart();
	void onStop();

private:
	Ui::HyperionProperties *ui;
};

static void output_started(void *data, calldata_t *cd);
static void output_stopped(void *data, calldata_t *cd);

#endif // HYPERIONPROPERTIES_H
