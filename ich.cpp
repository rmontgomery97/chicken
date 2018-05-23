// CS 4318, spring 2018
// Agent Challenge 2: Iterated chicken
//
// Here are the functions available to each agent.

#include "ich.h"

int outcome(strategy focal, strategy opponent)
{
   // Return the focal player's outcome given the two strategies.
   return opponent == playC ? focal == playC ? 2 : 3 : focal == playC ? 1 : 0;
}
