#pragma once
#include "raylib.h"

class Vertex {
public:
  Vertex();
  Vertex(Vertex &&) = default;
  Vertex(const Vertex &) = default;
  Vertex &operator=(Vertex &&) = default;
  Vertex &operator=(const Vertex &) = default;
  ~Vertex();
  Vector3 position;
  Vector2 uv;
  Vector3 normal;
  void draw();

private:
};
