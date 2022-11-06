#include <SFML/Graphics.hpp>
#include <bits/stdc++.h>
#include <SFML/Audio.hpp>
using namespace sf;
using namespace std;
const int window_width = 1847;
const int window_height = 984;
void moving_sprite1(Sprite &a, Sprite &b, float &x)
{
    if (a.getPosition().x < 0)
        x *= -1;
    else if (a.getPosition().x >= b.getPosition().x - 200)
        x *= -1;
    a.move(x, 0);
}
void moving_sprite2(Sprite &a, Sprite &b, float &x)
{
    if (a.getPosition().x >= window_width - 165)
        x *= -1;
    else if (a.getPosition().x < b.getPosition().x + 200)
        x *= -1;
    a.move(x, 0);
}
int main()
{ /*
     Texture wall ;
     wall.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/back.png");
     Sprite wallp;
     wallp.setTexture(wall);
     wallp.setPosition(0,0);
     wallp.setScale(1,1);
     const float ball_radius = 16.f;
     const int bpp = 32;
     int x_axis = window_width / 2, y_axis = window_height / 2 + 350;
     RenderWindow window(sf::VideoMode(window_width, window_height, bpp), "Bouncing ball");
     window.setVerticalSyncEnabled(true);

     srand(time(nullptr));
     x_axis = rand() % 1700 + 10;
     CircleShape ball(ball_radius - 4);
     ball.setOrigin(ball_radius, ball_radius);
     ball.setPosition(x_axis, y_axis);

     bool mouseClicked = false;
     bool mouseInsideRect = false;
     bool dragging = false;

     sf::Vector2f mouseRectOffset;

     // Variables
     int mouseX = 0;
     int mouseY = 0;

     Vector2f new_pos = ball.getPosition();
     bool domove = 0;
     // the shape********

     Keyboard keys;
     sf::Clock clock;
     sf::Time elapsed = clock.restart();
     const sf::Time update_ms = sf::seconds(1.f / 30.f);
     int directx, directy = -1;
     int y = 0;
     vector<vector<float>> arr(5, vector<float>(5));
     vector<float> vecx = {100, 450, 800, 1150, 1500};
     vector<float> vecy = {100, 300, 500, 600};
     int cnt = 0;
     for (int i = 0; i < 5; i++)
     {
         for (int j = 0; j < 5; j++)
         {
             if (!(cnt & 1))
             {
                 arr[i][j] = 1;
             }
             cnt++;
         }
     }
     Texture block;
     block.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/hand-painted-wood-texture.png");
     vector<Sprite> sprites;
     int x = 0;
     int num_row = 2;
     bool lol = 0;
     map<pair<float, float>, bool> is_free;
     Sprite sprite;
     int moving_idx = 0;
     int idx = -1;
     vector<float> speeds = {0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7, 0.7};
     vector<bool> moving(4);

     for (int i = 0; i < num_row; i++)
     {
         for (int j = 0; j < 5; j++)
         {
             if (arr[i][j] == 1)
             {
                Sprite sprite;
                sprite.setTexture(block);
                sprite.setScale(1.2,0.15);
                sprite.setPosition(vecx[j],vecy[i]);
                sprites.push_back(sprite);
             }
         }
     }
     vector<pair<float, float>> pos_sprite;
     bool drag=0;
     Music music;
     Color color;
     music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
     Text game_over;
     Font fono;
     fono.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/AlexBrush-Regular.ttf");
     game_over.setFont(fono);
     game_over.setString("Game Over  :) ");
      game_over.setCharacterSize(90);
      game_over.setPosition(window_width/2 -100,window_height/2 -50);
      bool end=0;
      Text text;
     text.setFont(fono);
     text.setString("score");
     text.setCharacterSize(50);
     text.setPosition(375,0);
     Text win;
      win.setFont(fono);
     win.setString("yaaaaaaaaaaa3 XD ");
      win.setCharacterSize(90);
      win.setPosition(window_width/2 -100,window_height/2 -50);
      bool play=0;
      int xd=0;

      Texture point;
      point.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/rect.png");
      Sprite pointer;
      pointer.setScale(0.5,0.5);
      pointer.setPosition(710,285);
      pointer.setTexture(point);
      Font one;
      one.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/Blackout.otf");
      Text welcome,playy,exitt;
      welcome.setFont(one);
      welcome.setString("WELCOME");
      welcome.setCharacterSize(70);
      welcome.setPosition(775,100);

      playy.setFont(one);
      playy.setString("PLAY");
      playy.setCharacterSize(50);
      playy.setPosition(900,400);

      exitt.setFont(one);
      exitt.setString("EXIT");
      exitt.setCharacterSize(50);
      exitt.setPosition(900,600);


      Text hard;
      hard.setFont(one);
      hard.setString("this game is so easy only if you love goemetry   XD");
      hard.setCharacterSize(50);
      hard.setPosition(900,600);
      bool nah=1;*/
    Music main_music;
    main_music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/music.wav");
    main_music.setVolume(150);
    main_music.play();
    while (1)
    {
        uniform_int_distribution<int> randomColorRange(0, 255);
        random_device rd;
        mt19937 randomNumbers(rd());
        Color color1 = (color1.White);
        Texture wall;
        wall.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/back.png");
        Sprite wallp;
        wallp.setTexture(wall);
        wallp.setPosition(0, 0);
        wallp.setScale(1, 1);
        const float ball_radius = 16.f;
        const int bpp = 32;
        int x_axis = window_width / 2, y_axis = window_height / 2 + 350;
        RenderWindow window(sf::VideoMode(window_width, window_height, bpp), "Bouncing ball");
        window.setVerticalSyncEnabled(true);

        srand(time(nullptr));
        x_axis = rand() % 1700 + 10;
        CircleShape ball(ball_radius - 4);
        ball.setOrigin(ball_radius, ball_radius);
        ball.setPosition(x_axis, y_axis);

        bool mouseClicked = false;
        bool mouseInsideRect = false;
        bool dragging = false;

        sf::Vector2f mouseRectOffset;

        // Variables
        int mouseX = 0;
        int mouseY = 0;

        Vector2f new_pos = ball.getPosition();
        bool domove = 0;
        // the shape********

        Keyboard keys;
        sf::Clock clock;
        sf::Time elapsed = clock.restart();
        const sf::Time update_ms = sf::seconds(1.f / 30.f);
        int directx, directy = -1;
        int y = 0;
        vector<vector<float>> arr(5, vector<float>(5));
        vector<float> vecx = {200, 550, 900, 1250, 1600};
        vector<float> vecy = {100, 300, 500, 600};
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (!(cnt & 1))
                {
                    arr[i][j] = 1;
                }
                cnt++;
            }
        }
        Texture block;
        block.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/hand-painted-wood-texture.png");
        vector<Sprite> sprites;
        int x = 0;
        int num_row = 2;
        bool lol = 0;
        map<pair<float, float>, bool> is_free;
        Sprite sprite;
        int moving_idx = 0;
        int idx = -1;
        vector<float> speeds = {3, 3, 3, 3, 3, 3, 3, 3};
        vector<bool> moving(4);

        for (int i = 0; i < num_row; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] == 1)
                {
                    Sprite sprite;
                    sprite.setTexture(block);
                    sprite.setScale(0.9, 0.15);
                    sprite.setPosition(vecx[j], vecy[i]);
                    sprites.push_back(sprite);
                }
            }
        }
        vector<pair<float, float>> pos_sprite;
        bool drag = 0;
        Music music;
        Color color;
        music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
        Text game_over;
        Font fono;
        fono.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/AlexBrush-Regular.ttf");
        game_over.setFont(fono);
        game_over.setString("Game Over  :) ");
        game_over.setCharacterSize(90);
        game_over.setPosition(window_width / 2 - 100, window_height / 2 - 50);
        bool end = 0;
        Text text;
        text.setFont(fono);
        text.setString("score");
        text.setCharacterSize(50);
        text.setPosition(375, 0);
        Text win;
        win.setFont(fono);
        win.setString("congratulations xd ");
        win.setCharacterSize(100);
        win.setPosition(window_width / 2 - 100, window_height / 2 - 50);
        bool play = 0;
        int xd = 0;

        Texture point;
        point.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/rect.png");
        Sprite pointer;
        pointer.setScale(0.5, 0.5);
        pointer.setPosition(710, 285);
        pointer.setTexture(point);
        Font one;
        one.loadFromFile("/home/ragnar/Desktop/vsc++/final projest/Blackout.otf");
        Text welcome, playy, exitt;
        welcome.setFont(one);
        welcome.setString("WELCOME");
        welcome.setCharacterSize(70);
        welcome.setPosition(775, 100);

        playy.setFont(one);
        playy.setString("PLAY");
        playy.setCharacterSize(50);
        playy.setPosition(900, 400);

        exitt.setFont(one);
        exitt.setString("EXIT");
        exitt.setCharacterSize(50);
        exitt.setPosition(900, 600);

        Text hard;
        hard.setFont(one);
        hard.setString("this game is so easy only if you love goemetry   XD");
        hard.setCharacterSize(50);
        hard.setPosition(900, 600);
        bool nah = 1;

        Text level;
        level.setFont(one);
        level.setString("LEVEL : ");
        level.setCharacterSize(50);
        level.setPosition(0, 0);
        int level_cnt = 1;
        Text level1;
        level1.setFont(one);
        level1.setString(to_string(level_cnt));
        level1.setCharacterSize(50);
        level1.setPosition(200, 0);
        while (!play)
        {
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
                if (event.type == Event::KeyPressed)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Up))
                    {
                        xd--;
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Down))
                        xd++;
                    else if (Keyboard::isKeyPressed(Keyboard::Enter))
                    {
                        if (xd % 2)
                            exit(0);
                        else
                            play = 1;
                    }
                    if (xd % 2)
                        pointer.setPosition(710, 485);
                    else
                        pointer.setPosition(710, 285);
                }
            }
            window.clear();
            window.draw(wallp);
            window.draw(welcome);
            window.draw(playy);
            window.draw(exitt);
            window.draw(pointer);
            window.display();
            window.clear();
        }
        while (y < 8)
        {

            // menu**********

            //********************************************************************
            if (end || y == 7)
            {
                for (int i = 0; i < 1e9; i++)
                {
                    int x = 0;
                    x++;
                }
                break;
            }
            // for (int i = 0; i < sprites.size(); i++)
            // {
            //     pos_sprite.push_back({sprites[i].getPosition().x, sprites[i].getPosition().y});
            // }
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();

                if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
                {
                    mouseClicked = true;

                    if (ball.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                    {
                        dragging = true;
                        mouseRectOffset.x = event.mouseButton.x - ball.getGlobalBounds().left - ball.getOrigin().x;
                        mouseRectOffset.y = event.mouseButton.y - ball.getGlobalBounds().top - ball.getOrigin().y;
                    }
                }
                if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
                {
                    mouseClicked = false;
                    dragging = false;
                }

                // Mouse Moved in window
                if (event.type == sf::Event::MouseMoved)
                {
                    mouseX = event.mouseMove.x;
                    mouseY = event.mouseMove.y;
                }
                if (event.type == Event::KeyPressed)
                {
                    if (Keyboard ::isKeyPressed(Keyboard ::Space))
                    {
                        // cout<<sprites.size()<<endl;
                    }
                }
            }
            elapsed += clock.restart();
            if (dragging == true)
            {
                directx = (x_axis - mouseX + mouseRectOffset.x);
                directy = (y_axis - mouseY + mouseRectOffset.y);
                if (mouseY - mouseRectOffset.y >= y_axis)
                    ball.setPosition(mouseX - mouseRectOffset.x, mouseY - mouseRectOffset.y);
                domove = 1;
            }
            else if (!dragging && domove)
            {
                if (!drag)
                {
                    if (ball.getPosition().y > window_height)
                    {
                        ball.setPosition(ball.getPosition().x, window_height - ball_radius);
                    }
                    drag = 1;
                }
                // cout<<directx<<" "<<directy<<endl;
                //  directy=directy*-1;
                // directx=directx*-1;
                // int a=directx/directy;
                const auto pos = ball.getPosition();
                const auto delta = 0.02;
                Vector2f new_pos(pos.x + directx * delta, pos.y + directy * delta);
                if (new_pos.x - ball_radius < 0)
                { // top of window
                    directx *= -1;
                    new_pos.x = 0 + ball_radius;
                    music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
                    music.play();
                }
                else if (new_pos.x + ball_radius >= window_width)
                { // bottom of window
                    directx *= -1;
                    new_pos.x = window_width - ball_radius;
                    music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
                    music.play();
                }
                else if (ball.getPosition().y > window_height + 100 && drag)
                {
                    //  directy *= -1;
                    //  new_pos.y -= ball_radius;
                    end = 1;
                }
                // cout << sprites[0].getPosition().x << " " << ball.getPosition().x << endl;
                for (int i = 0; i < sprites.size(); i++)
                {
                    if (ball.getGlobalBounds().intersects(sprites[i].getGlobalBounds()))
                    {
                        if (ball.getPosition().y > sprites[i].getPosition().y)
                        {
                            directy *= -1;
                            new_pos.y += ball_radius;
                            music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
                            music.play();
                        }
                        else if (ball.getPosition().y < sprites[i].getPosition().y)
                        {
                            directy *= -1;
                            new_pos.y -= ball_radius;
                            music.openFromFile("/home/ragnar/Desktop/vsc++/final projest/269718__michorvath__ping-pong-ball-hit.wav");
                            music.play();
                        }
                        // directx*=-1;
                        // break;
                    }
                    // if(ball.getPosition().x >= pos_sprite[i].first-200 && ball.getPosition().x <= pos_sprite[i].first+200  ){
                    //     directy*=-1;
                    // }
                }
                ball.setPosition(new_pos);
            }
            if (ball.getPosition().y < 0)
            {
                level_cnt++;
                level1.setString(to_string(level_cnt));
                level1.setCharacterSize(50);
                level1.setPosition(200, 0);
                    srand(time(0));
                x_axis = rand() % 1100  +50 ;
                ball.setPosition(x_axis, y_axis);
                domove = 0;
                y++;
                if (num_row < 4)
                    sprites.clear();
                num_row++;
                if (num_row >= 5)
                {
                    idx++;
                    moving[idx] = 1;
                }
                lol = 1;
            }
            if (num_row < 5 && lol)
            {
                // cout<<"LOL"<<endl;
                int x = 0;
                for (int i = 0; i < num_row; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (arr[i][j] == 1)
                        {
                            Sprite sprite;
                            sprite.setTexture(block);
                            sprite.setScale(0.9, 0.15);
                            sprite.setPosition(vecx[j], vecy[i]);
                            sprites.push_back(sprite);
                        }
                    }
                }
                lol = 0;
            }
            else
            {
                if (moving[0])
                {
                    // if(sprites[0].getPosition().x<0)
                    // speeds[0]*=-1;
                    // else if(sprites[0].getPosition().x>sprites[1].getPosition().x-165)
                    // speeds[0]*=-1;
                    // sprites[0].move(speeds[0],0);
                    moving_sprite1(sprites[0], sprites[1], speeds[0]);
                    moving_sprite2(sprites[2], sprites[1], speeds[1]);
                }
                if (moving[1])
                {
                    moving_sprite1(sprites[5], sprites[6], speeds[2]);
                    moving_sprite2(sprites[7], sprites[6], speeds[3]);
                }
                if (moving[2])
                {
                    moving_sprite1(sprites[3], sprites[4], speeds[4]);
                    moving_sprite2(sprites[4], sprites[3], speeds[5]);
                }
                if (moving[3])
                {
                    moving_sprite1(sprites[8], sprites[9], speeds[6]);
                    moving_sprite2(sprites[9], sprites[8], speeds[7]);
                }
            }
            window.clear();
            window.draw(wallp);
            for (int i = 0; i < sprites.size(); i++)
            {
                window.draw(sprites[i]);
            }
            // window.clear();
            // window.draw(wallp);
            // window.clear();
            window.draw(ball);
            window.draw(level);
            window.draw(level1);
            if (end)
            {
                window.clear();
                window.draw(wallp);
                window.draw(game_over);
            }
            if (y == 7)
            {
                window.clear();
                window.draw(wallp);
                window.draw(win);
            }
            // window.draw(convex);
            window.display();
        }
        play = 0;
        y = 0;
        end = 0;
        xd = 0;
    }

    return 0;
}