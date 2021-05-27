#pragma once

#include "Engine/GameEngine.h"

class GameScene : public Scene {
 public:
  // Creates our Scene.
  GameScene();

  int getScore();

  void increaseScore();
};

typedef std::shared_ptr<GameScene> GameScenePtr;
