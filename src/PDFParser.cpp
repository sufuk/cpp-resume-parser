//
// Created by sufuk on 14.03.2021.
//

#include "PDFParser.h"
#include "podofo/podofo.h"

using namespace PoDoFo;
using namespace std;
#include <iostream>
PDFParser::PDFParser() {

}
/** BT, ET, Td, TD, Ts, T, Tm, Tf, ", ', Tj and TJ **/


void PDFParser::loadFile(const QString& arg_filename) {

    PdfVecObjects *x = new PdfVecObjects();
    PdfParser parser(x, arg_filename.toStdString().c_str());
    parser.ParseFile("hello.pdf");

    for (TIVecObjects obj = x->begin(); obj != x->end(); obj++){
        PdfObject * a = x->RemoveObject(obj);
        // THIS IS MY PROBLEM VVVVVVVVVV
        cout << a->Reference().ToString() << endl;
    }

}

