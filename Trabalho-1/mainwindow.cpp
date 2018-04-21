#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pdi = new PDI();
}

QString filename;

MainWindow::~MainWindow()
{
    delete ui;
    delete pdi;
}

void MainWindow::on_actionAbrir_Imagem_triggered()
{
    //abre uma caixa de dialogo para selecao de uma imagem
    filename = QFileDialog::getOpenFileName(
    this, "Abrir",
    tr("JPEG (*.jpg *.jpeg);;PNG (*.png);;BMP (*.bmp)")
    );
    if (!filename.isNull())
        pdi->carregarImagem(filename.toStdString());
}

void MainWindow::on_actionHistograma_triggered()
{
    if (!filename.isNull())
        pdi->histograma();
}

void MainWindow::on_actionNegativo_triggered()
{
    if (!filename.isNull())
        pdi->negativo();
}

void MainWindow::on_actionAjuste_de_Contraste_triggered()
{
    if (!filename.isNull())
        pdi->ajusteContraste();
}

void MainWindow::on_actionTransformacao_Logaritmica_triggered()
{
    if (!filename.isNull())
        pdi->logaritmica();
}

void MainWindow::on_actionTransformacao_de_Potencia_triggered()
{
    if (!filename.isNull())
        pdi->potencia();
}

void MainWindow::on_actionEqualizacaoHistograma_triggered()
{
    if (!filename.isNull())
        pdi->equalizacaoHistograma();

}

void MainWindow::on_actionMedia_triggered()
{
    if (!filename.isNull())
        pdi->filtroMedia();
}

void MainWindow::on_actionBrilho_triggered()
{
    if (!filename.isNull())
        pdi->brilhoHSV();
}
