/********************************************************************************
** Form generated from reading UI file 'jaymainwidget.ui'
**
** Created: Mon Apr 2 20:02:54 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAYMAINWIDGET_H
#define UI_JAYMAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JayMainWidget
{
public:

    void setupUi(QWidget *JayMainWidget)
    {
        if (JayMainWidget->objectName().isEmpty())
            JayMainWidget->setObjectName(QString::fromUtf8("JayMainWidget"));
        JayMainWidget->resize(400, 300);

        retranslateUi(JayMainWidget);

        QMetaObject::connectSlotsByName(JayMainWidget);
    } // setupUi

    void retranslateUi(QWidget *JayMainWidget)
    {
        JayMainWidget->setWindowTitle(QApplication::translate("JayMainWidget", "JayMainWidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JayMainWidget: public Ui_JayMainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYMAINWIDGET_H
