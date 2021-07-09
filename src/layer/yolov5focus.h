#ifndef LAYER_YOLO_V5_FOCUS
#define LAYER_YOLO_V5_FOCUS

#include "layer.h"

namespace ncnn{
    class YoloV5Focus : public ncnn::Layer
    {
    public:
        YoloV5Focus();

        virtual int forward(const ncnn::Mat& bottom_blob, ncnn::Mat& top_blob, const ncnn::Option& opt) const;
    };
}// namespace ncnn
#endif//LAYER_YOLO_V5_FOCUS