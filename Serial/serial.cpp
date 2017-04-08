#include "serial.h"
#include <QSerialPort>
#include <iostream>

QSerialPort *serial;

Serial::Serial()
{
}

double Serial::getData()
{
    return data;
}

