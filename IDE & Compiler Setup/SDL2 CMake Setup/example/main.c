#define SDL_MAIN_HANDLED
#include <SDL.h>

typedef struct {
    SDL_Window* window;
    SDL_Renderer* renderer;
}App;

void Init(App* app){
    app->window = SDL_CreateWindow("test", 500, 200, 800, 600, 0);
    app->renderer = NULL;
}

void Run(App* app){
    SDL_Event event;
    while(1){
        while(SDL_PollEvent(&event)){
            switch (event.type)
            {
            case SDL_QUIT:
                SDL_Quit();
                return;
            default:
                break;
            }
        }
    }
}

int main(int argc, char** argv){
    SDL_Init(SDL_INIT_EVERYTHING);
    App app;
    Init(&app);
    Run(&app);
    return 0;
}