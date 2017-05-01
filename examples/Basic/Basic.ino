#include "Arduino.h"
#include "Functor.h"
#include "Streaming.h"
#include "EncoderFunctors.h"


EncoderFunctors encoder(3,4);

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
  Serial.begin(115200);
  Serial << "Basic EncoderFunctors Test:" << "\n";

  encoder.attachPositiveFunctor(makeFunctor((Functor1<int32_t> *)0,positiveHandler));
  encoder.attachNegativeFunctor(makeFunctor((Functor1<int32_t> *)0,negativeHandler));
}

void loop()
{
}
