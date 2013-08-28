/**
 * @file 
 * @author Denise Ratasich
 * @date 27.08.2013
 *
 * @brief Implementation of the output of an estimation algorithm.
 *
 * Basically there is nothing to implement. This class inherits from
 * \c EstimationMethodInterface which does all the manipulation of
 * this output interface.
 */

#include "estimation/Output.h"

namespace estimation 
{
  Output::Output(void)
  {
    // nothing to do
  }

  Output::Output(OutputValue outputValue)
    : EstimationMethodInterface<OutputValue>(outputValue)
  {
    // nothing to do (everything is done by the superclass)
  }

  Output::Output(std::vector<OutputValue> outputValues)
    : EstimationMethodInterface<OutputValue>(outputValues)
  {
    // nothing to do (everything is done by the superclass)
  }
}

