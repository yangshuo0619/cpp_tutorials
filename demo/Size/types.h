//
// Created by cg on 9/16/19.
//

#ifndef MYNT_BASIC_ALGTHMS_TYPES_H
#define MYNT_BASIC_ALGTHMS_TYPES_H

namespace mynt {

    struct Size {
        unsigned int width;
        unsigned int height;

        Size() {width = height = 0;}

        Size(unsigned int w, unsigned int h) : width(w), height(h) {}

        Size(const Size &size) : width(size.width), height(size.height) {}

        bool operator==(const Size &rhs) const {
            return width == rhs.width && height == rhs.height;
        }

        bool operator!=(const Size &rhs) const {
            return width != rhs.width || height != rhs.height;
        }

        Size &operator=(const Size &rhs) {
            if(this == &rhs)
                return *this;
            width  = rhs.width;
            height = rhs.height;
            return *this;
        }

        Size operator+(const Size &rhs) const {
            Size size;
            size.width  = width  + rhs.width;
            size.height = height + rhs.height;
            return size;
        }

        Size operator-(const Size &rhs) const {
            Size size;
            size.width  = width  - rhs.width;
            size.height = height - rhs.height;
            return size;
        }

        Size operator*(int n) const {
            Size size;
            size.width  = width  * n;
            size.height = height * n;
            return size;
        }

        Size operator/(int n) const {
            Size size;
            size.width  = width  / n;
            size.height = height / n;
            return size;
        }

        friend std::ostream &operator<<(std::ostream &os, const Size &size){
            return os << "[" << size.width << "," << size.height << "]";
        }

        inline unsigned int area() const {
            return width * height;
        }
    };

    template <typename _T>
    struct Point2D { 
        _T x;
        _T y;
  
        Point2D() { x=y=0;}
        
        Point2D(_T _x, _T _y) : x(_x), y(_y) {}
        
        Point2D(const Point2D &p) : x(p.x), y(p.y) {}
 
        bool operator==(const Point2D &rhs) const {
            return  x == rhs.x && y == rhs.y;
        }
        
        bool operator!=(const Point2D &rhs) const {
            return x != rhs.x || y != rhs.y;
        }

        Point2D &operator=(const Point2D &rhs) {
            if(this == &rhs)
                return *this;
            x = rhs.x;
            y = rhs.y;
            return *this;
        }
 
        Point2D operator+(const Point2D &rhs) const {
            Point2D p;
            p.x = this->x + rhs.x;
            p.y = this->y + rhs.y;
            return p;
        }

        Point2D operator-(const Point2D &rhs) const {
            Point2D p;
            p.x = this->x - rhs.x;
            p.y = this->y - rhs.y;
            return p;
        }

        Point2D operator-() {
            Point2D p;
            p.x = -this->x;
            p.y = -this->y;
            return p;
        }
    
        Point2D operator*(int n) const {
            Point2D p;
            p.x = this->x * n;
            p.y = this->y * n;
            return p;
        }


        Point2D operator/(int n) const {
            Point2D p;
            p.x = this->x / n;
            p.y = this->y /n;
            return p;
        }

        friend std::ostream &operator<<(std::ostream &os, const Point2D &p){
            return os << "("<<p.x<<","<<p.y<<")";
        }

    };

    typedef Point2D<float> Point2f;
    typedef Point2D<int>   Point2i;

    mynt::Point2f operator*(int n, const mynt::Point2f &pt) {
        return pt * n;         
    }
}

#endif //MYNT_BASIC_ALGTHMS_TYPES_H
