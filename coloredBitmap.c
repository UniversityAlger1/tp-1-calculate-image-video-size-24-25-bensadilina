#include <string.h>
#include <stdio.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
  // Calculate size in bits (24 bits per pixel for RGB)
    long long sizeInBits = (long long)w * h * 24;
// Convert size based on the unit
    if (strcmp(unit, "bt") == 0) {
        // Return size in bits
        return (float)sizeInBits;
    } else if (strcmp(unit, "ko") == 0) {
        // Convert to kilobits
        return sizeInBits / 1024.0;
    } else if (strcmp(unit, "mo") == 0) {
        // Convert to megabits
        return sizeInBits / (1024.0 * 1024);
    } else if (strcmp(unit, "go") == 0) {
        // Convert to gigabits
        return sizeInBits / (1024.0 * 1024 * 1024);
    } else {
        // If the unit is invalid, print an error message and return 0
        printf("Invalid unit: %s\n", unit);
        return 0;
    }
}