//
// Created by sufuk on 14.03.2021.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {

    setWindowTitle(tr("Resume Parser"));

    createActions();
    createStatusBar();
    createMiddleWidget();

}

void MainWindow::createActions() {

    QMenuBar *menuBar = new QMenuBar(this);

    QMenu *fileMenu = new QMenu(tr("File"), this);

    QAction *savePDF_action = new QAction( tr("Save a PDF"), this);
    connect(savePDF_action, &QAction::triggered, this, &MainWindow::slot_savePDF);
    savePDF_action->setStatusTip(tr("Save A PDF"));
    fileMenu->addAction(savePDF_action);
    menuBar->addMenu(fileMenu);

    setMenuBar(menuBar);
}

void MainWindow::createStatusBar() {
    QStatusBar *statusBar = new QStatusBar(this);
    setStatusBar(statusBar);

}

void MainWindow::createMiddleWidget() {

    QHBoxLayout *mainLayout = new QHBoxLayout();
    QTextEdit *myTextEdit = new QTextEdit(this);
    mainLayout->addWidget(myTextEdit);
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

void MainWindow::slot_savePDF() {
    filename = QFileDialog::getOpenFileName(this);
    PDFParser *myParser = new PDFParser();
    myParser->loadFile(filename);
}
