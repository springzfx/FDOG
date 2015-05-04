#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "imatrix.h"
#include "ETF.h"
#include "fdog.h"
#include "myvec.h"



int main(int argc, char *argv[]){

    //通过opencv载入图片
    IplImage *image = cvLoadImage(argv[1], 1);
    cvShowImage("ori",image);
    cvWaitKey(0);
    IplImage *gray_image = cvCreateImage(cvGetSize(image),image->depth,1);
    cvCvtColor(image, gray_image, CV_RGB2GRAY); //转换为灰度图
    cvShowImage("gray",gray_image);
    cvWaitKey(0);

    //img初始化
    int w=gray_image->width,h=gray_image->height;
    imatrix img(h,w);
    for (int i=0;i<h;i++)
        for (int j=0;j<w;j++){
            img.p[i][j]=cvGet2D(gray_image,i,j).val[0];
        }





//     We assume that you have loaded your input image into an imatrix named "img"

    int image_x = img.getRow();
    int image_y = img.getCol();

    //构建flow
    ETF e;
    e.init(image_x, image_y);
    e.set(img); // get flows from input image
//    e.set2(img); // get flows from flow map(二次流)
    e.Smooth(4, 2);

    //基于flow，做DOG
    double tao = 0.99;
    double thres = 0.7;
    GetFDoG(img, e, 1.0, 3.0, tao);
    GrayThresholding(img, thres);




    //显示结果
    for (int i=0;i<h;i++)
        for (int j=0;j<w;j++){
            int color=img.p[i][j];
            cvSet2D(gray_image,i,j,cvScalar(color,color,color,0));
        }
    cvShowImage("result",gray_image);
    cvWaitKey(0);
    return 0;
}

