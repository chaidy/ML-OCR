#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/ml/ml.hpp>
#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>
#include <time.h>

typedef unsigned char       BYTE;
using namespace cv;
using namespace std;

class Knnopencv
{
public:
	int readFlippedInteger(FILE *fp);
	void test();
	Knnopencv();
	~Knnopencv();
};
