#include "headers/Vertex.hpp"
#include "raylib.h"

void Vertex::draw() {
  float xPrime = GetScreenWidth() / 2 + (this->position.x / this->position.z);
  float yPrime = GetScreenHeight() / 2 - (this->position.y / this->position.z);

  DrawCircle(xPrime, yPrime, 1, Color(255, 255, 255, 255));
}

Vertex::Vertex() {}
Vertex::~Vertex() {}
