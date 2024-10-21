#include "caesarCipher.h"
#include <iostream>
#include <cctype>

char caesarCipher(char ch, int shift, bool encrypt) {
    if (std::isalpha(ch)) {
        char base = std::islower(ch) ? 'a' : 'A';
        int offset = encrypt ? shift : -shift;
        return static_cast<char>((ch - base + offset + 26) % 26 + base);
    }
    return ch; // неалфавитные символы не мен€ютс€
}
