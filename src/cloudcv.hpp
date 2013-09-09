#pragma once

#include <opencv2/opencv.hpp>

namespace cloudcv
{

    struct AnalyzeResult
    {
        cv::Size size;

        size_t aspectNum;
        size_t aspectDenom;

        cv::Mat  histogram;

        float contrast;
        float brightness;

        float colorDeviation;
        float colorEntropy;

        float processingTimeMs;
    };

    void analyzeImage(cv::Mat src, AnalyzeResult& result);

}