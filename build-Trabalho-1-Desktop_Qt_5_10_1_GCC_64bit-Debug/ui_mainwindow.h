/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir_Imagem;
    QAction *actionHistograma;
    QAction *actionEqualizacaoHistograma;
    QAction *actionNegativo;
    QAction *actionAjuste_de_Contraste;
    QAction *actionTransformacao_de_Potencia;
    QAction *actionTransformacao_Logaritmica;
    QAction *actionMedia;
    QAction *actionBrilho;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuFiltros;
    QMenu *menuFiltros_2;
    QMenu *menuImagem_colorida;
    QMenu *menuOp_es;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionAbrir_Imagem = new QAction(MainWindow);
        actionAbrir_Imagem->setObjectName(QStringLiteral("actionAbrir_Imagem"));
        actionHistograma = new QAction(MainWindow);
        actionHistograma->setObjectName(QStringLiteral("actionHistograma"));
        actionEqualizacaoHistograma = new QAction(MainWindow);
        actionEqualizacaoHistograma->setObjectName(QStringLiteral("actionEqualizacaoHistograma"));
        actionNegativo = new QAction(MainWindow);
        actionNegativo->setObjectName(QStringLiteral("actionNegativo"));
        actionAjuste_de_Contraste = new QAction(MainWindow);
        actionAjuste_de_Contraste->setObjectName(QStringLiteral("actionAjuste_de_Contraste"));
        actionTransformacao_de_Potencia = new QAction(MainWindow);
        actionTransformacao_de_Potencia->setObjectName(QStringLiteral("actionTransformacao_de_Potencia"));
        actionTransformacao_Logaritmica = new QAction(MainWindow);
        actionTransformacao_Logaritmica->setObjectName(QStringLiteral("actionTransformacao_Logaritmica"));
        actionMedia = new QAction(MainWindow);
        actionMedia->setObjectName(QStringLiteral("actionMedia"));
        actionBrilho = new QAction(MainWindow);
        actionBrilho->setObjectName(QStringLiteral("actionBrilho"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuFiltros = new QMenu(menuBar);
        menuFiltros->setObjectName(QStringLiteral("menuFiltros"));
        menuFiltros_2 = new QMenu(menuFiltros);
        menuFiltros_2->setObjectName(QStringLiteral("menuFiltros_2"));
        menuImagem_colorida = new QMenu(menuFiltros);
        menuImagem_colorida->setObjectName(QStringLiteral("menuImagem_colorida"));
        menuOp_es = new QMenu(menuBar);
        menuOp_es->setObjectName(QStringLiteral("menuOp_es"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuFiltros->menuAction());
        menuBar->addAction(menuOp_es->menuAction());
        menuArquivo->addAction(actionAbrir_Imagem);
        menuFiltros->addAction(actionNegativo);
        menuFiltros->addAction(actionAjuste_de_Contraste);
        menuFiltros->addAction(actionTransformacao_Logaritmica);
        menuFiltros->addAction(actionTransformacao_de_Potencia);
        menuFiltros->addAction(actionEqualizacaoHistograma);
        menuFiltros->addAction(menuFiltros_2->menuAction());
        menuFiltros->addAction(menuImagem_colorida->menuAction());
        menuFiltros_2->addAction(actionMedia);
        menuImagem_colorida->addAction(actionBrilho);
        menuOp_es->addAction(actionHistograma);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir_Imagem->setText(QApplication::translate("MainWindow", "Abrir Imagem", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbrir_Imagem->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionHistograma->setText(QApplication::translate("MainWindow", "Histograma", nullptr));
        actionEqualizacaoHistograma->setText(QApplication::translate("MainWindow", "Equaliza\303\247\303\243o de Histograma", nullptr));
        actionNegativo->setText(QApplication::translate("MainWindow", "Negativo", nullptr));
        actionAjuste_de_Contraste->setText(QApplication::translate("MainWindow", "Ajuste de Contraste", nullptr));
        actionTransformacao_de_Potencia->setText(QApplication::translate("MainWindow", "Transforma\303\247\303\243o de Pot\303\252ncia", nullptr));
        actionTransformacao_Logaritmica->setText(QApplication::translate("MainWindow", "Transforma\303\247\303\243o Logar\303\255tmica", nullptr));
        actionMedia->setText(QApplication::translate("MainWindow", "Media", nullptr));
        actionBrilho->setText(QApplication::translate("MainWindow", "Brilho", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuFiltros->setTitle(QApplication::translate("MainWindow", "Realce", nullptr));
        menuFiltros_2->setTitle(QApplication::translate("MainWindow", "Filtros - Imagem Monocrom\303\241tica", nullptr));
        menuImagem_colorida->setTitle(QApplication::translate("MainWindow", "Imagem colorida", nullptr));
        menuOp_es->setTitle(QApplication::translate("MainWindow", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
