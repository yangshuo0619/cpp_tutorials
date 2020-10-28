
bool copy(Image &img_dst, const Size &size, const Point2D<int> &pt)
{
    if(img_dst.size() == Size(0,0))
        return false;
    if(size.width > img_dst.size().width || size.height > img_dst.size().height)
        return false;
    for(unsigned int h=pt.y; h<pt.y+size.height;++h){
        for(unsigned int w=pt.x;w<pt.x+size.width;++w){
            img_dst(h-pt.y,w-pt.x) = data_[h*size_.width + w];
        }
    }

    return true;
}


