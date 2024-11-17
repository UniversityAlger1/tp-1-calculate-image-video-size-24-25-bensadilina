[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/7KCB2MIS)
# Master 1 SII: Multimedia

## TP 1: Image/Video Size Calculation

The goal of these exercices is to apply the concepts learned during the [course](https://canvas.instructure.com/courses/10470827/files/273054605?module_item_id=118488408) for calculating the size of grayscale, colored images, and videos.

**Reminder**  
Each pixel of a grayscale image (Bitmap) is encoded in 8 bits.  
For the conversion:  

* 1 byte = 8 bits  
* 1 KB = 1024 bytes  
* 1 MB = 1024 KB  
* 1 GB = 1024 MB  

### Exercise 1: Grayscale Image Size ([grayScaleImage.c](grayScaleImage.c))

You are asked to write a C program that calculates the size of a grayscale Bitmap image (in bytes).  

##### Input Parameters (2)  
The function receives two input parameters in integer format:
- w: width of the image
- h: height of the image

##### Output Parameter  
The function should return the size of the grayscale image.

### Exercise 2: Colored Image Size ([coloredBitmap.c](coloredBitmap.c))

You are asked to write a C program that calculates the size of a colored Bitmap image.

##### Input Parameters (3)  
The function receives three input parameters:
- w: width of the image
- h: height of the image
- unit: the size of the image should be converted to this unit

##### Output Parameter  
The function should return the size of the colored image in the unit passed as a parameter.

### Exercise 3: Video Size ([video.c](video.c))

You are asked to write a C function that calculates the size of a video, which includes both a color section and a generic (black and white) section.

##### Input Parameters (6)  
The function receives six input parameters:  
- w: width of the image
- h: height of the image
- durationMovie: duration (in seconds) of the color section of the video
- durationCredits: duration (in seconds) of the black-and-white section of the video
- fps: Frames Per Second of the video
- unit: the size of the video should be converted to this unit

##### Output Parameter (1)  
The function should return the size of the video in the unit passed as a parameter.