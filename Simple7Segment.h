#ifndef Simple7Segment_h
#define Simple7Segment_h

#include <Arduino.h>

class Simple7Segment
{
  public:
    Simple7Segment(int* segmentPins);
    void displayNumber(int num);
  private:
    int* _segmentPins;
    int _numbers[10][7] = {
      {1, 1, 1, 1, 1, 1, 0},  // 0
      {0, 1, 1, 0, 0, 0, 0},  // 1
      {1, 1, 0, 1, 1, 0, 1},  // 2
      {1, 1, 1, 1, 0, 0, 1},  // 3
      {0, 1, 1, 0, 0, 1, 1},  // 4
      {1, 0, 1, 1, 0, 1, 1},  // 5
      {1, 0, 1, 1, 1, 1, 1},  // 6
      {1, 1, 1, 0, 0, 0, 0},  // 7
      {1, 1, 1, 1, 1, 1, 1},  // 8
      {1, 1, 1, 1, 0, 1, 1}   // 9
    };
};

#endif
