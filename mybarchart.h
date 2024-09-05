#ifndef MYBARCHART_H
#define MYBARCHART_H

#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QDesignerCustomWidgetInterface>




class myBarChart : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")

    Q_INTERFACES(QDesignerCustomWidgetInterface)
public:
    explicit myBarChart(QObject *parent = nullptr);

    bool isContainer() const override;
    bool isInitialized() const override;
    QString includeFile() const override;
    QIcon icon() const override;
    QString domXml() const override;
    QString group() const override;
    QString name() const override;
    QString toolTip() const override;
    QString whatsThis() const override;
    QWidget *createWidget(QWidget *parent) override;
    void initialize(QDesignerFormEditorInterface *core) override;

private:
    bool initialized = false;
    QString hi = "hi";
};

#endif // MYBARCHART_H
