#ifndef CONFIG_H
#define CONFIG_H

/**
  * 这个文件里定义了所有游戏的的全局变量。
  * 包括若干部分：
  * 游戏参数（如玩家生命值、移动速度等）
  * 内存中的资源对象（图片、声音等），可引用
  */

// 以下是游戏参数：

// 游戏本体（计时器、窗口等）参数

const int T = 10;
const int WIDTH = 1280;
const int HEIGHT = 800;

// 玩家

const int PLAYER_HEALTH = 100;
const double PLAYER_SPEED = 3.0;
const double PLAYER_MASS = 2.0;
const double PLAYER_VELOCITY_DECAY = 0.97;
const double TIME_TO_REACH_MAX_SPEED = 20;
const double PLAYER_ACCELERATION = PLAYER_SPEED/TIME_TO_REACH_MAX_SPEED;
const int PLAYER_SHOOTING_CD = 1*100;

const double BULLET_SPEED = 7.0;
const double BULLET_MASS = 0.5;
const int BULLET_RADIUS = 10;
const int BULLET_DAMAGE = 10;
const int BULLET_TIME_TO_DESPAWN = 3*100;


// 足球

const double BALL_VELOCITY_DECAY = 0.985;

// 障碍物

const double INFINITE_MASS = 1919810.114514;


// 以下是资源：

// 图片

const char startPNG[] = ":/art/start.png";
const char welcomePNG[] = ":/art/welcome.jpg";
const char backgroundPNG[] = ":/art/soccerField.png";

const char player1Src[] = ":/art/liuhan.png";
const char player2Src[] = ":/art/kuqi.png";
const char ballSrc[] = ":/art/football.png";
const char postSrc[] = ":/art/post.png";
const char bulletSrc[] = ":/art/football.png";

// 音频

const char backgroundMusic1Src[] = "./music/bg1.mp3";
const char cheers1Src[] = "qrc:///music/cheers1.mp3";
const char cheers2Src[] = "qrc:///music/cheers2.mp3";
/* エレキ・デ・チョコボ 植松伸夫 */


#endif // CONFIG_H