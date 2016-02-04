#pragma once
#include <string>
#include "Struktury.h"
using namespace std;

void Dijkstra(string &NazwaStart, Wezel* &Drzewo, Graf Lista[], int Odleglosci[], int Poprzednicy[], int &LiczbaMiast);