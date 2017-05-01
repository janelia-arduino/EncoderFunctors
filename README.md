# EncoderFunctors

This is a slight modification of PJRC's Encoder library that adds
functor callbacks to the encoder signal interrupts. This hurts
performance, but allows conversion of signals into step and direction
pulses, etc.

Encoder counts pulses from quadrature encoded signals, which are
commonly available from rotary knobs, motor or shaft sensors and other
position sensors.

http://www.pjrc.com/teensy/td_libs_Encoder.html

http://www.youtube.com/watch?v=2puhIong-cs

![Encoder Knobs Demo](http://www.pjrc.com/teensy/td_libs_Encoder_1.jpg)
