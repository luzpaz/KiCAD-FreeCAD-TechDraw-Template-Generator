#ifndef ISO7200OPTIONS_H
#define ISO7200OPTIONS_H

#include <QDialog>

#include "templateoptions.h"
#include "changetitelblockfield.h"

namespace Ui {
class ISO7200Options;
}

class ISO7200Options : public QDialog
{
    Q_OBJECT
private slots:
    void on_opt1PushButton_clicked();
    void on_opt2PushButton_clicked();
    void on_opt3PushButton_clicked();
    void on_opt4PushButton_clicked();
    void on_opt5PushButton_clicked();
    void on_opt6PushButton_clicked();
    void on_opt7PushButton_clicked();
    void on_opt8PushButton_clicked();
    void on_opt9PushButton_clicked();
    void on_opt10PushButton_clicked();
    void on_opt11PushButton_clicked();
    void on_opt12PushButton_clicked();
    void on_opt13PushButton_clicked();
    void on_opt14PushButton_clicked();
    void on_opt15PushButton_clicked();
    void on_opt16PushButton_clicked();
    void on_opt17PushButton_clicked();
    void on_opt18PushButton_clicked();
    void on_opt19PushButton_clicked();
    void on_opt20PushButton_clicked();
    void on_opt21PushButton_clicked();
    void on_opt22PushButton_clicked();

    void on_buttonBox_rejected();

private:
    Ui::ISO7200Options *ui;

    QMap<QString, TitelblockField> TITELBLOCKFIELDS;
    QMap<QString, TitelblockField> TITELBLOCKFIELDS_ORG;


    void loadStdOptions();
    void loadButtonText();

public:
    explicit ISO7200Options(QWidget *parent = nullptr);
    ~ISO7200Options();
    const QMap<QString, TitelblockField> &getTITELBLOCKFIELDS() const;
    void setTITELBLOCKFIELDS(const QMap<QString, TitelblockField> &newTITELBLOCKFIELDS);
};

#endif // ISO7200OPTIONS_H