#ifndef _IMAGE_H_
#define _IMAGE_H_

#include "bmp.h"
#include "segment.h"
#include "common.h"

void convert_to_bw(BMP* bmp);

float default_transform(float in);

Matrix<float> get_average_colors(BMP* bmp, SegmentData& seg_data, float (*default_transform)(float));
#endif
