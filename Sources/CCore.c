#include "CCore.h"

// TODO: https://medium.com/@cecilia.humlelu/set-up-c-library-dependencies-in-swift-projects-part-2-2-d7a57599d86c
// https://github.com/shamatar/secp256k1_ios

struct Color disabledColor(struct Color color) {

    float factor = 0.75;
    struct Color dimmed = {
        color.r * factor,
        color.g * factor,
        color.b * factor,
        color.a
    };
    return dimmed;
}
