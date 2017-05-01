
#include "EncoderFunctors.h"

// Yes, all the code is in the header file, to provide the user
// configure options with #define (before they include it), and
// to facilitate some crafty optimizations!

Encoder_internal_state_t * EncoderFunctors::interruptArgs[];

Functor1<int32_t> EncoderFunctors::positive_functor_;
Functor1<int32_t> EncoderFunctors::negative_functor_;
