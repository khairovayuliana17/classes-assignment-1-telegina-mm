#include "magicbook.h"

// yor code here (functions)
MagicBook::BookClass evaluateBookSize(const MagicBook& book) {
    if (book.pages >= 1000) {
        return MagicBook::BookClass::LARGE;
    } else if (book.pages >= 500) {
        return MagicBook::BookClass::MEDIUM;
    } else {
        return MagicBook::BookClass::SMALL;
    }
}

bool isFromArcaneYear(const MagicBook& b) { return (b.year % 100 == 0) && (b.year >= 100); }
