#include <stdio.h>
#include <iostream>
#include <osu.Framework/Platform/Windowing/DesktopWindow.h>
#include <osu.Framework/Configuration/ConfigManager.h>
#include <osu.Framework/Graphics/SpriteBatch.h>
#include <osu.Framework/Graphics/Texture.h>
#include <osu.Framework/Graphics/Drawable.h>
#include <osu.Game.Rulesets.Mania/ManiaBeatmap.h>
#include <osu.Game.Rulesets.Mania/UI/ManiaHitObject.h>


#include <SDL.h>

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool quit = false;
    while (!quit) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        // your code here

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
