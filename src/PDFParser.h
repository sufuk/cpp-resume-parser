//
// Created by sufuk on 14.03.2021.
//

#ifndef RESUMEPARSER_PDFPARSER_H
#define RESUMEPARSER_PDFPARSER_H

#include "podofo/podofo.h"
#include <QtWidgets>
class PDFParser {



public:
    explicit PDFParser();

    void loadFile(const QString& arg_filename);



};


#endif //RESUMEPARSER_PDFPARSER_H
