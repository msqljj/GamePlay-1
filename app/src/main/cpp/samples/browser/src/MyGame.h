//
// Created by JUN HU on 2020/3/9.
//

#ifndef GAMEPLAY_MYGAME_H
#define GAMEPLAY_MYGAME_H

#include "gameplay.h"
#include "Sample.h"

using namespace gameplay;

class MyGame : public Game {
public:

    /**
     * Constructor.
     */
    MyGame();

private:
    Font* _font;
    Sample* _sample;

protected:

    /**
     * @see Game::initialize
     */
    void initialize();

    /**
     * @see Game::finalize
     */
    void finalize();

    /**
     * @see Game::update
     */
    void update(float elapsedTime);

    /**
     * @see Game::render
     */
    void render(float elapsedTime);

};

#endif //GAMEPLAY_MYGAME_H
