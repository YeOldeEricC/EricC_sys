/*
---------------------------------

HEADER FILE STRUCTURE --

#ifndef TEST_H_
#define TEST_H_

// debugging fns

// fns
void fn();

#endif // TEST_H_

---------------------------------

C FILE STRUCTURE --

#include "../h/test.h"
#include <stdio.h>

// debugging fns

// fns
void fn() {...}

---------------------------------
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <complex.h>
#include <time.h>

// includes from lib folder
#include "../lib/ext/maybe_sdl/include/SDL.h"



int SCREEN_INIT_W = 960;
int SCREEN_INIT_H = 720;
char TITLE[] = "This is a test";

int not_main() {
	// retutns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	SDL_Window* win = SDL_CreateWindow(TITLE, // creates a window
									SDL_WINDOWPOS_CENTERED,
									SDL_WINDOWPOS_CENTERED,
									SCREEN_INIT_W, SCREEN_INIT_H,
									0);
	//								SDL_WINDOW_RESIZABLE);
	// for seeing frame times
	time_t now = time(0);
	// rgb int inits
	int r, g, b;

	SDL_Renderer* rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
	for (int w = 0; w < SCREEN_INIT_W; w++) {
		for (int h = 0; h < SCREEN_INIT_H; h++) {
			r = rand()%255;
			g = rand()%255;
			b = rand()%255;
			SDL_SetRenderDrawColor(rend, r, g, b, 255);
			SDL_RenderDrawPoint(rend, w, h);
		}
	}
	SDL_RenderPresent(rend);


	int SCREEN_W, SCREEN_H;

	int quit = 0;
	SDL_Event event;
	int lc = 0;
	while (quit == 0) {

		SDL_GetRendererOutputSize(rend, &SCREEN_W, &SCREEN_H);


		printf("frame = %d  frame time = %ld\n", lc, time(0)-now);
		lc++;

		// polling events
		if (SDL_PollEvent(&event)) {
			// if the x on the window is pressed, close window
			if (event.type == SDL_QUIT) {
				quit = 1;
			}
		}
	}

	// destroy window
	SDL_DestroyWindow(win);
	// close SDL
	SDL_Quit();

	return 0;
}

int main() {
	return 0;
}