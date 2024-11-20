#include <string.h>
#include <stdio.h>
#include "config/video.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // Constants for unit conversion
    const float BYTE_TO_KB = 8* 1024.0;
    const float BYTE_TO_MB = 8*1024.0 * 1024.0;
    const float BYTE_TO_GB = 8*1024.0 * 1024.0 * 1024.0;
    // Calculate size of the colored section (RGB: 3 bytes per pixel)
    float colorSectionSize = (float)w * h *8* 3* fps * durationMovie;
    // Calculate size of the black-and-white section (1 byte per pixel)
    float bwSectionSize = (float)w * h * 1 * fps * durationCredits;
    // Total size in bytes
    float totalSize = colorSectionSize + bwSectionSize;
// Convert size based on the specified unit
    if (strcmp(unit, "bt") == 0) {
        return (float)totalSize; // Bytes
    } else if (strcmp(unit, "ko") == 0) {
        return (float)totalSize / BYTE_TO_KB; // Kilobytes
    } else if (strcmp(unit, "mo") == 0) {
        return (float)totalSize / BYTE_TO_MB; // Megabytes
    } else if (strcmp(unit, "go") == 0) {
        return (float)totalSize / BYTE_TO_GB; // Gigabytes
    } else {
        // Invalid unit, print an error message and return 0
        fprintf(stderr, "Error: Invalid unit '%s'. Please use 'bt', 'ko', 'mo', or 'go'.\n", unit);
        return 0;
    }
}