#include <QApplication>

#include "calculator.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    Calculator qtcalc;

    qtcalc.show();
    
    return app.exec();
}