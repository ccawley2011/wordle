/** @file game.h
 *
 *  A clone of Wordle for the Nokie N-Gage.
 *
 *  Copyright (c) 2022, Michael Fitzmayer. All rights reserved.
 *  SPDX-License-Identifier: MIT
 *
 **/

#ifndef GAME_H
#define GAME_H

#include <SDL.h>

typedef enum
{
    LETTER_SELECT = 0,
    CORRECT_LETTER,
    WRONG_LETTER,
    WRONG_POSITION,

} state_t;

typedef enum
{
    LANG_ENGLISH = 0,
    LANG_RUSSIAN

} lang_t;

typedef struct tile
{
    char         letter;
    unsigned int letter_index;
    state_t      state;

} tile_t;

typedef struct wordlist
{
    lang_t                language;
    unsigned int          letter_count;
    unsigned int          word_count;
    char                  first_letter;
    char                  last_letter;
    SDL_bool              is_cyrillic;
    const Uint32*         hash;
    const unsigned char (*list)[6];
    const unsigned int*   offset;

} wordlist_t;

typedef struct game
{
    SDL_Renderer* renderer;
    SDL_Texture*  render_target;
    SDL_Texture*  tile_texture;
    SDL_Window*   window;
    Uint32        time_since_last_frame;
    Uint32        time_a;
    Uint32        time_b;
    SDL_bool      is_running;
    SDL_bool      title_screen;
    tile_t        tile[30];
    int           current_index;
    char          previous_letter;
    int           valid_answer_index;
    char          current_guess[6];
    Uint8         attempt;
    unsigned int  seed;
    wordlist_t    wordlist;

} game_t;

int      game_init(const char* resource_file, const char* title, game_t** core);
SDL_bool game_is_running(game_t* core);
int      game_update(game_t* core);
void     game_quit(game_t* core);

#endif /* GAME_H */
