// CS 4318, spring 2018
// Agent Challenge 2: Iterated chicken
//
// Here are the #includes and definitions available to each agent.

#ifndef ICH_H
#define ICH_H

#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

// The strategies available for the agents to play.
enum strategy {playC, playD};

// Returns the focal player's outcome given the two strategies.
int outcome(strategy focal, strategy opponent);

#endif // #ifndef ICH_H
