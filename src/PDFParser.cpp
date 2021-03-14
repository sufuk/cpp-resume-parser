//
// Created by sufuk on 14.03.2021.
//

#include "PDFParser.h"
PDFParser::PDFParser() {

}
/** BT, ET, Td, TD, Ts, T, Tm, Tf, ", ', Tj and TJ **/


void PDFParser::loadFile(const QString& arg_filename) {


    PoDoFo::PdfMemDocument pdf("CVdecember.pdf");
    for (int pageNumber = 0; pageNumber < pdf.GetPageCount(); ++pageNumber) {
        PoDoFo::PdfPage *page = pdf.GetPage(pageNumber);
        PoDoFo::PdfContentsTokenizer tok(page);
        const char* token = nullptr;
        PoDoFo::PdfVariant var;
        PoDoFo::EPdfContentsType type;
        while (tok.ReadNext(type, token, var)) {
            switch (type) {
                case PoDoFo::ePdfContentsType_Keyword:
                    // process token: it contains the current command
                    //   pop from var stack as necessary
                    break;
                case PoDoFo::ePdfContentsType_Variant:
                    // process var: push it onto a stack
                    break;
                default:
                    // should not happen!
                    break;
            }
        }
    }



}

