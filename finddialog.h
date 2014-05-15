#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QLabel;
class QCheckBox;
class QLineEdit;
class QPushBUtton;


namespace Ui {
class finddialog;
}

class finddialog : public QDialog
{
    Q_OBJECT

public:
    explicit finddialog(QWidget *parent = 0);
    ~finddialog();
signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);
private slots:
    void findClicked();
    void enableFindButton(const QString &text);
private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;

    Ui::finddialog *ui;
};

#endif // FINDDIALOG_H
