#include "raylib.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  InitWindow(640, 480, "3D C++");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
