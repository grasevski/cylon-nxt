#ifndef ALPHAREX_H_
#define ALPHAREX_H_

#define SENSOR_LEFT S1
#define SENSOR_RIGHT S2
#define SENSOR_COLOR S3
#define SENSOR_US S4

#define SENSOR_LEFT_SENSOR SENSOR_1
#define SENSOR_RIGHT_SENSOR SENSOR_2
#define SENSOR_COLOR_SENSOR SENSOR_3
#define SENSOR_US_SENSOR SENSOR_4

#define NUM_COLORS 5

enum Direction {Reverse,
    Forward,
    LeftReverse,
    LeftForward,
    RightReverse,
    RightForward};

enum Color {Full, Red, Green, Blue, None};

void init();

void stopMoving();

void stand();

void dance(const int left);

void walk(const Direction direction);

void setLight();

void setColor(const Color color);

#endif
