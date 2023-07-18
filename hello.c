/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion@student.42mulhouse.fr </var/spool/m  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:56:21 by llion@student     #+#    #+#             */
/*   Updated: 2023/07/18 07:56:27 by llion@student    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <SDL/SDL.h>
#include <stdio.h>

// Dimensions de la fenêtre
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Couleurs RGB
const Uint32 RED = 0xFF0000FF;
const Uint32 GREEN = 0x00FF00FF;
const Uint32 BLUE = 0x0000FFFF;

int main(int argc, char* args[]) {
    // Initialisation de SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL n'a pas pu s'initialiser ! Erreur : %s\n", SDL_GetError());
        return -1;
    }

    // Création de la fenêtre
    SDL_Surface* screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    if (screen == NULL) {
        printf("La fenêtre n'a pas pu être créée ! Erreur : %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    // Couleur de fond initiale
    Uint32 backgroundColor = RED;

    // Boucle principale
    int quit = 0;
    SDL_Event e;
    while (!quit) {
        // Gestion des événements
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
            else if (e.type == SDL_KEYDOWN) {
                // Changement de couleur de fond en fonction de la touche pressée
                switch (e.key.keysym.sym) {
                    case SDLK_r:
                        backgroundColor = RED;
                        break;
                    case SDLK_g:
                        backgroundColor = GREEN;
                        break;
                    case SDLK_b:
                        backgroundColor = BLUE;
                        break;
                }
            }
        }

        // Remplissage de l'écran avec la couleur de fond
        SDL_FillRect(screen, NULL, backgroundColor);

        // Mise à jour de l'affichage
        SDL_Flip(screen);
    }

    // Fermeture de SDL
    SDL_Quit();

    return 0;
}
