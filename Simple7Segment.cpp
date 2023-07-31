#include "Simple7Segment.h"

Simple7Segment::Simple7Segment(int* segmentPins)
{
  _segmentPins = segmentPins;
  for (int i = 0; i < 7; i++) {
    pinMode(_segmentPins[i], OUTPUT);
  }
}

void Simple7Segment::displayNumber(int num)
{
  for (int i = 0; i < 7; i++) {
    digitalWrite(_segmentPins[i], _numbers[num][i]);
  }
}

void Simple7Segment::displayLetter(char ltr)
{
  ltr = toupper(ltr);

  if (ltr >= 'A' && ltr <= 'Z') {
      int index = ltr - 'A';
      for (int i = 0; i < 7; i++) {
        digitalWrite(_segmentPins[i], _letters[index][i]);
      }
    }
}