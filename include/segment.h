#ifndef _SEGMENT_H_
#define _SEGMENT_H_

class SegmentData{
	int image_width;
	int image_height;
	int target_width;
	int target_height;
	// TODO: define more private fields here
	
	// TODO: declare methods here
	public:
	SegmentData(int32_t image_width,
			    int32_t image_height,
				int out_width,
				int out_height);
};

#endif
