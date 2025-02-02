#include "game.h"

            

void game (bool* in_menus, Player* player, board* board) {
    setlocale(LC_ALL, "");
    // Time variables
    double refresh_rate = 0.06;
    struct timeval last, now; 
    gettimeofday(&last, NULL);

    ///boucle principale ----------------------------------------------------
    int run = true ;
    while (run) {
        int n  = getch();
        gettimeofday(&now, NULL);
        double time_taken = (now.tv_sec - last.tv_sec) + (now.tv_usec - last.tv_usec) * 1e-6;
        if (time_taken > refresh_rate) {
            last = now;
            move_player(player, n, board);
            //printf("hello world\n");
            print_board(board);
        }

        usleep(10000); 
    }
}