const static double PI 3.1415926
void Dialog::on_countBtn_clicked()
{
	bool ok;
	QString tempStr;
	QString valueStr=ui->radiusLineEdit->text();
	int valueInt=valueStr.toInt(&ok);
	double area=valueInt*valueInt*PI;
	ui->areaLabel_2->setText(tempStr.setNum(area));
}

void. Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
	bool ok;
	QString tempStr;
	QString valueStr=ui->radiusLineEdit->text();
	int valueInt=valueStr.toInt(&ok);
	double area=valueInt*valueInt*PI;
	ui->areaLabel_2->setText(tempStr
}