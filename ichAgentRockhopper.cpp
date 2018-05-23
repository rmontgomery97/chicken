// YOUR NAME: Reese Montgomery
//
// CS 4318, spring 2018
// Agent Challenge 2: Iterated chicken

#include "ich.h"

// Rename and complete this agent function.
strategy ichAgentMessi(const vector<strategy> focal, const vector<strategy> opponent)
{
   if (focal.size() < 25) // Play D for the first 25 rounds
   {
      return playD;
   }
   
   if (opponent.back() == playD && opponent.at(opponent.size() - 2) == playD) // if my opponent has played D twice in a row,
   {                                                                          // try to cooperate with them
      return playC;
   }
   
   return playD; // otherwise, play D
}

/*
 - For this iteration I made about 15 other agents with varying strategies.
 out of all of them this is the one that consistently performed well against the others.
 I also tested this agent but with it looking back at the last 3 or 4 rounds instead of the last 2
 but it didn't seem to perform as well as this one. I also looked at the results from the first iteration
 and tried to duplicate some of the best performing agents and try to beat them.

*/
