#ifndef CS221UTIL_HSLAPIXEL_H
#define CS221UTIL_HSLAPIXEL_H

using namespace std;

namespace cs221util {
class HSLAPixel{

    public:
        double h; //hue
        double s; //saturation
        double l; //luminance
        double a; //alpha

        HSLAPixel();

        HSLAPixel(double hue, double saturation, double luminance);

        HSLAPixel(double hue, double saturation, double luminance, double alpha);
};
}

#endif