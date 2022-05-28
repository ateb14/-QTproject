#ifndef GAME_H
#define GAME_H

#include <QKeyEvent>
#include <QPushButton>
#include <QGraphicsScene>
#include <QGraphicsWidget>
#include <QGraphicsTextItem>
#include <QMessageBox>
#include <QString>
#include <QTimer>
#include <QDebug>
#include <object.h>
#include <player.h>
#include <ball.h>
#include <obstacle.h>
#include <windows.h>
#include <board.h>
#include <list>
#include <iostream>

enum windowMode{
    HOME = 0,
    GAMING,
    MENU,
    SHOP,
};

class Game: public QGraphicsScene{
    Q_OBJECT
public:
    Game();
    friend class GameObject;
    friend class GamePlayer;
    friend class GameBall;
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
public slots:
    void updateGame();
    void endGame();
    void quit();
    void start();
    void pause(int ms=0);
    void continueGame();
private:
    /* Window Mode */
    windowMode winMode;
    /* Keyboard Control Flags*/
    bool isPressingW,isPressingA,isPressingS,isPressingD;
    bool isPressingUp,isPressingDown,isPressingLeft,isPressingRight;
    ActionSet parseKeyboard(int playerID);
    /* Texts */

    /* clock */
    QTimer *timer;
    long long globalTime;

    /* Information Board */
    /* Advanced Information Board */
    bool AIBoardIsShow;
    QGraphicsTextItem * AIBoard;
    void showAIBoard();
    void hideAIBoard();
    /* Game Board */
    GameBoard *board;
    GameBoard *getBoard();

    /* objects */
    /* player */
    GamePlayer *player1, *player2;
    /* other */
    std::list<GameObject *> gameObjects;
    GameBall *ballptr;

    /* Update Checkers */
    void collisionChecker();
    void deadChecker();
    void ballChecker();
    void boardChecker();

};

#endif // !GAME_H
