#ifndef _SEGMENT_H_
#define _SEGMENT_H_

<<<<<<< HEAD
#include <tuple>

=======
>>>>>>> 5ba5e809349dd3f92dab1eb118eae3fb927f429e
class SegmentData{
	int image_width;
	int image_height;
	int target_width;
	int target_height;
<<<<<<< HEAD
	// TODO: define more private fields/methods here
=======
	// TODO: define more private fields here
>>>>>>> 5ba5e809349dd3f92dab1eb118eae3fb927f429e
	
	// TODO: declare methods here
	public:
	SegmentData(int32_t image_width,
			    int32_t image_height,
				int out_width,
				int out_height);
<<<<<<< HEAD

	std::tuple<int,int> getBlockDims(int i, int j);
=======
>>>>>>> 5ba5e809349dd3f92dab1eb118eae3fb927f429e
};

#endif
