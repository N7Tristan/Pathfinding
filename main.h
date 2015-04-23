#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <queue>
#include <string>
#include <fstream>
#include <time.h>
#include <unistd.h>


#include "a_star.h"
#include "heuristic.h"
#include "serialib.h"


#define DEVICE_PORT "/dev/ttyUSB0"                  // FTDI


const int xTaille = 100;                            // Nombre de noeuds (x)
const int yTaille = 100;                            // Nombre de noeuds (y)


int map[xTaille][yTaille];                          // Map pour afficher le chemin


int mapNodesClosed[xTaille][yTaille];               // Map des noeuds déjà visités
int mapNodesOpen[xTaille][yTaille];                 // Map des noeuds à visiter
int mapDirections[xTaille][yTaille];                // Map des directions prises


int dx[8] = {0, 1, 1,  1,  0, -1, -1, -1};          // Directions possibles selon x / couple (x,y)
int dy[8] = {1, 1, 0, -1, -1, -1,  0,  1};          // Directions possibles selon y / couple (x,y)


#endif // MAIN_H_INCLUDED
