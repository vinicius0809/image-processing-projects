// Nome: Flávio Vinícius Martins dos Santos -- RA: 1477048

#ifndef PDI_H
#define PDI_H
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;


class PDI
{
    public:
        //metodos
        PDI();
        ~PDI();
        void carregarImagem(String filename);
        void negativo();
        void logaritmica();
        void potencia();
        void ajusteContraste();
        void histograma();
        void equalizacaoHistograma();
        void filtroMedia();
        void brilhoHSV();
        void filtroMediana();
        void filtroMinimo();
        void filtroMaximo();
        void filtroGaussiano();
        void equalizacaoHistogramaHSV();
        void filtroMedianaHSV();
        void filtroGaussianoHSV();

        //atributos
        Mat imagemRGB;
        Mat imagemCINZA;
};

#endif // PDI_H
