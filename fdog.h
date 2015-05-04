#ifndef _FDOG_H_
#define _FDOG_H_
#include "imatrix.h"
#include "ETF.h"
//extern
 void GaussSmoothSep(imatrix& image, double sigma);
 void ConstructMergedImage(imatrix& image, imatrix& gray, imatrix& merged);
 void ConstructMergedImageMult(imatrix& image, imatrix& gray, imatrix& merged);
 void GetFDoG(imatrix& image, ETF& e, double sigma, double sigma3, double tau);
 void Binarize(imatrix& image, double thres);
 void GrayThresholding(imatrix& image, double thres);

#endif
