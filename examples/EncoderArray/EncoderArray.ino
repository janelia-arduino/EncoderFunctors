#include "Arduino.h"
#include "Functor.h"
#include "Streaming.h"
#include "EncoderFunctors.h"


enum {ENCODER_COUNT=1};

EncoderFunctors encoders[ENCODER_COUNT];

void positiveHandler(const int32_t position)
{
  Serial << "+ " << position << "\n";
}

void negativeHandler(const int32_t position)
{
  Serial << "- " << position << "\n";
}

void setup()
{
  encoders[0].setup(3,4);

  Serial.begin(115200);
  Serial << "Basic EncoderFunctors Test:" << "\n";

  encoders[0].attachPositiveFunctor(makeFunctor((Functor1<int32_t> *)0,positiveHandler));
  encoders[0].attachNegativeFunctor(makeFunctor((Functor1<int32_t> *)0,negativeHandler));
}

void loop()
{
}
