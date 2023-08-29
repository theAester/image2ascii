#ifndef _TEXT_H_
#define _TEXT_H_

#include <iostream>
#include "common.h"

void print_formatted(Matrix<float>& transformed, const char* fmt_str, const char* ln_fmt_str, char* chars, size_t chars_len, ostream& outfile);

#endif
