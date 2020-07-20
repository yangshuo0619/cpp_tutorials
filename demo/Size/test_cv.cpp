//
// Created by cg on 9/16/19.
//

#include <gtest/gtest.h>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "cv/types.h"
#include "cv/yimg.h"

TEST(cv, Size)
{
    mynt::Size sz = mynt::Size();
    std::cout << "sz: " << sz << std::endl;

    mynt::Size sza = mynt::Size(100,200);
    mynt::Size szb = mynt::Size(200,300);
    mynt::Size szc = sza + szb;
    std::cout << "szc: " << szc << ", area: " << szc.area() << std::endl;
}

TEST(cv, Point2D)
{
    mynt::Point2i p;
    std::cout<< "p: " << p <<std::endl;
   
    const int n=2; 
    mynt::Point2f a(100,100);
    mynt::Point2f b(200,200);
    mynt::Point2f c = a * n;
    c = 3 * a;
    c = -c;
    std::cout<<a<<"*"<<n<<" = "<<c<<std::endl;
 
    mynt::Point2f d = a + b;
    std::cout<<a<<"+"<<b<<" = "<<d<<std::endl;
}

TEST(YImg, copy)
{
    cv::Mat mat_src = cv::imread("../data/lena.bmp", 0);

    ASSERT_FALSE(mat_src.empty());

    mynt::YImg<unsigned char> yimg_src(mat_src.cols, mat_src.rows);
    memcpy(yimg_src.data(), mat_src.data, yimg_src.size().area());

    mynt::YImg<unsigned char> yimg_dst(yimg_src.size());
    yimg_src.copy(yimg_dst);

    cv::Mat mat_dst;
    mat_dst.create(mat_src.rows, mat_src.cols, CV_8UC1);
    mempcpy(mat_dst.data, yimg_dst.data(), yimg_dst.size().area());

    cv::imshow("YImg copy test", mat_dst);
    cv::waitKey(1000);mempcpy()
}
