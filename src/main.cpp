#include "headers/Vertex.hpp"
#include "raylib.h"
#include <iostream>
#include <vector>

using namespace std;

std::vector<Vertex> vertices = {};
float cubeSize = 0.5;

int main(int argc, char *argv[]) {
  for (float z = -cubeSize; z <= cubeSize; z += 2 * cubeSize) {
    for (float y = -cubeSize; y <= cubeSize; y += 2 * cubeSize) {
      for (float x = -cubeSize; x <= cubeSize; x += 2 * cubeSize) {
        Vertex vertex;
        vertex.position = Vector3(x, y, z);
        vertex.uv = Vector2();
        vertex.normal = Vector3();
        vertices.push_back(vertex);
      }
    }
  }

  InitWindow(640, 480, "3D C++");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    for (Vertex &vertex : vertices) {
      vertex.position.z += GetFrameTime();
    }
    BeginDrawing();
    ClearBackground(Color(0, 0, 0, 255));
    for (Vertex vertex : vertices) {
      vertex.draw();
    }
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
