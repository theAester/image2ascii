#include <iostream>
#include <string>
#include <stdint.h>

#include "segment.h"
#include "common.h"
#include "xgetopt.h"

using namespace std;
using namespace app;

int generate_output(BMP* bmp, int width, int height, const char* fmt_str, const char* ln_fmt_str, char* chars, size_t chars_len, ostream& outfile){
	convert_to_bw(bmp);
	SegmentData seg_data(bmp->bmp_info_header->width,   // image width
						 bmp->bmp_info_header->height,  // image height
						 width, 						// output width
						 hegiht);						// output height
	
	Matix<float>& transformed = get_average_colors(bmp, seg_data, default_transform);

	print_formatted(transformed, fmt_str, ln_fmt_str, chars, chars_len, outfile);
}

int main(int argc, const char* argv[]){
	int type;
	const char* fmt_str;
	const char* ln_fmt_str;
	float contrast;
	int width;
	int height;
	const char* infile;
	ostream outfile;
	char* chars;
	size_t chars_len;

	BMP* bmp = configure_params(&type, &fmt_str, &ln_fmt_str, &contrast, &width, &height, &infile, &outfile, &chars, &chars_len);

	if (bmp == NULL){
		cerr<<"Error while parsing args. aborting."<<endl;
		return 1;
	}


	if (generate_output(bmp, width, height, fmt_str, ln_fmt_str, chars, chars_len, outfile)){
		cerr<<"An error occured while generating the art. Aborting"<<endl;
		return 1;
	}
	return 0;
}
