#include "mybarchart.h"



myBarChart::myBarChart(QObject *parent) : QObject(parent){

}
void myBarChart::initialize(QDesignerFormEditorInterface * /* core */){
    if (initialized)
        return;
    initialized = true;
}

bool myBarChart::isContainer() const {
    return true;
}
bool myBarChart::isInitialized() const{
    return true;
}
QWidget* myBarChart::createWidget(QWidget *parent){
    return new AnalogClock(parent);

}

QIcon myBarChart::icon() const{
    QIcon ic;
    return ic;
}

QString myBarChart::domXml() const{

    return hi;
}
QString myBarChart::group() const{

    return hi;
}
QString myBarChart::includeFile() const{

    return hi;
}
QString myBarChart::name() const{

    return hi;
}
QString myBarChart::toolTip() const{

    return hi;
}
QString myBarChart::whatsThis() const{

    return hi;
}
