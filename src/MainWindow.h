//
// Created by sufuk on 14.03.2021.
//

#ifndef RESUMEPARSER_MAINWINDOW_H
#define RESUMEPARSER_MAINWINDOW_H

#include <QtWidgets>
#include "PDFParser.h"
class MainWindow : public QMainWindow {
Q_OBJECT
public:
    /** Constructor */
    explicit MainWindow(QWidget *parent = nullptr);


    void loadFile(const QString &fileName);
    QString filename;
private slots:

    void slot_savePDF();

private:


    void createMiddleWidget();
    void createActions();
    void createStatusBar();

};


#endif //RESUMEPARSER_MAINWINDOW_H
