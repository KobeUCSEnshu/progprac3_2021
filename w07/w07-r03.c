/*
 * w07-r03
 *
 * $ gcc w07-r03.c -o w07-r03
 * $ ./w07-r03
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_HP 5

typedef struct
{
    char name[32];
    int hp;
    int win;
    int lose;
    int draw;
    float score;
    bool is_human;
} Player;

Player Player_create( char* name, int hp, bool is_human )
{
    Player p;
    strcpy( p.name, name );
    p.hp = hp;
    p.win = 0;
    p.lose = 0;
    p.draw = 0;
    p.score = 0.0;
    p.is_human = is_human;
    return p;
}

void Player_win( Player* p )
{
    p->win++;
    p->score = p->score + 1.0;
}

void Player_lose( Player* p )
{
    p->lose++;
    p->hp--;
}

void Player_draw( Player* p )
{
    p->draw++;
    p->score = p->score + 0.5;
}

void Player_print( Player* p )
{
    printf("%s: hp = %d, (win,lose,draw) = (%d,%d,%d), score = %.1f\n",
        p->name, p->hp, p->win, p->lose, p->draw, p->score);
}

typedef struct
{
    int hand;
} Janken;

Janken Janken_input()
{
    Janken j = {0};
    scanf("%d", &j.hand);
    return j;
}

Janken Janken_random()
{
    Janken j;
    j.hand = rand() % 3 + 1;
    return j;
}

int Janken_judge( Janken* j1, Janken* j2 )
{
    /* Draw */
    if ( j1->hand == j2->hand ) { return 0; }

    /* j1 Win */
    if ( j1->hand == 1 && j2->hand == 3 ) { return 1; } /* Rock,Scissors */
    if ( j1->hand == 2 && j2->hand == 1 ) { return 1; } /* Paper,Rock */
    if ( j1->hand == 3 && j2->hand == 2 ) { return 1; } /* Scissors,Paper */

    /* j1 Lose (j2 Win) */
    return -1;
}

void Janken_print( Janken* j )
{
    switch ( j->hand )
    {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
        default: printf("Unknown\n"); break;
    }
}

bool is_print_string( Player *p1, Player *p2 )
{
    if ( p1->is_human || p2->is_human ) return true;
    else return false;
}

int Janken_competition( Player *p1, Player *p2 )
{   
    int result = 0;
    
    int max_trials = 20;
    int counter = 0;
   
    srand( time(NULL) );
    
    while ( counter++ < max_trials )
    {
        Janken p1_choice;
        Janken p2_choice;
        
        if ( is_print_string( p1, p2 ) ) printf("Enter your choise (Rock=1, Paper=2, Scissors=3): ");

        if ( p1->is_human ) p1_choice = Janken_input();
        else p1_choice = Janken_random();
        if ( p2->is_human ) p2_choice = Janken_input();
        else p2_choice = Janken_random();
        
        if ( is_print_string( p1, p2 ) )
        {
            printf("\t%s choice: ", p1->name);
            Janken_print( &p1_choice );
            printf("\t%s choice: ", p2->name);
            Janken_print( &p2_choice );
        }

        result = Janken_judge( &p1_choice, &p2_choice );
        if ( result > 0 )
        {
            if ( is_print_string( p1, p2 ) ) printf("\t%s wins\n", p1->name);
            Player_win( p1 );
            Player_lose( p2 );
        }
        else if ( result < 0 )
        {
            if ( is_print_string( p1, p2 ) ) printf("\t%s wins\n", p2->name);
            Player_win( p2 );
            Player_lose( p1 );
        }
        else
        {
            if ( is_print_string( p1, p2 ) ) printf("\tDraw\n");
            Player_draw( p1 );
            Player_draw( p2 );
        }

        if ( is_print_string( p1, p2 ) )
        {
            printf("\t"); Player_print( p1 );
            printf("\t"); Player_print( p2 );
        }

        if ( p2->hp == 0 )
        {
            printf("%s wins!\n", p1->name);
            return 1;
        }

        if ( p1->hp == 0 )
        {
            printf("%s wins!\n", p2->name);
            return -1;
        }
        
    }
    
    printf("\n");
    printf("Draw...\n");
    /* The winner is randomly selected when draw. */
    return ( rand() % 2 ) * 2 - 1;
}

void show_result( Player array[], int size, int sort_type )
{
    bool judge;
    char sort_by[6];
    for ( int i = 0; i < size; i++ )
    {
        for ( int j = i + 1; j < size; j++ )
        {
            switch ( sort_type )
            {
                case 1:
                    /* case 1: Sort by win */
                    /* If win is equal, sort by score in ascending order. */
                    judge = ( array[i].win < array[j].win ) 
                            || (( array[i].win == array[j].win ) && ( array[i].score < array[j].score ));
                    strcpy( sort_by, "win" );
                    break;
                case 2:
                    /* case 2: Sort by score */
                    /* If score is equal, sort by win in ascending order. */
                    judge = ( array[i].score < array[j].score )
                            || (( array[i].score == array[j].score ) && ( array[i].win < array[j].win ));
                    strcpy( sort_by, "score" );
                    break;
            }
            if ( judge )
            {
                Player tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    printf("\n===== Result (Sorted by %s) =====\n", sort_by);
    for ( int i = 0; i < size; i++ ) Player_print( &array[i] );
}

void print_tournament( Player array[], int size )
{
    char sf1_name[10];
    char sf2_name[10];
    sf1_name[0] = '\0';
    sf2_name[0] = '\0';
    if ( size >= 5 ) strcpy( sf1_name, array[4].name );
    if ( size == 6 ) strcpy( sf2_name, array[5].name );

    printf("========== Tournament ==========\n\n");
    printf("%10s -------\n", sf1_name);
    printf("                  |---\n");
    printf("%10s ---    |   |\n", array[0].name);
    printf("              |---    |\n");
    printf("%10s ---        |\n", array[1].name);
    printf("                      |---\n");
    printf("%10s ---        |\n", array[2].name);
    printf("              |---    |\n");
    printf("%10s ---    |   |\n", array[3].name);
    printf("                  |---\n");
    printf("%10s -------\n", sf2_name);
}

void shuffle( Player array[], int size )
{
    for ( int i = 0; i < size; i++ )
    {
        int j = rand() % size;
        Player p = array[i];
        array[i] = array[j];
        array[j] = p;
    }
}

int main()
{
    srand( time(NULL) );
    int result;
    int player_num = 4 + rand() % 3;

    /* Generate players */
    Player* player_list;
    player_list = malloc( player_num * sizeof(Player) );
    player_list[0] = Player_create( "Player", MAX_HP, true );
    for ( int i = 1; i < player_num ; i++ )
    {
        char com_name[10] = "Computer";
        com_name[8] = '0' + i;
        player_list[i] = Player_create( com_name, MAX_HP, false );
    }

    shuffle( player_list, player_num );
    print_tournament( player_list, player_num );

    Player* winner_1;
    Player* winner_2;

    /* 1st stage */
    printf("\n========= 1st stage (1) =========\n");
    printf("%14s vs %-14s\n", player_list[0].name, player_list[1].name);
    printf("=================================\n");
    result = Janken_competition( &player_list[0], &player_list[1] );
    if ( result > 0 ) winner_1 = &player_list[0];
    else winner_1 = &player_list[1];
    winner_1->hp = MAX_HP;

    printf("\n========= 1st stage (2) =========\n");
    printf("%14s vs %-14s\n", player_list[2].name, player_list[3].name);
    printf("=================================\n");
    result = Janken_competition( &player_list[2], &player_list[3] );
    if ( result > 0 ) winner_2 = &player_list[2];
    else winner_2 = &player_list[3];
    winner_2->hp = MAX_HP;

    /* Semifinal stage (when 5 or 6 players) */
    if ( player_num >= 5 )
    {
        printf("\n====== Semifinal stage (1) ======\n");
        printf("%14s vs %-14s\n", player_list[4].name, winner_1->name);
        printf("=================================\n");
        result = Janken_competition( &player_list[4], winner_1 );
        if ( result > 0 ) winner_1 = &player_list[4];
        winner_1->hp = MAX_HP;
    }
    if ( player_num == 6 )
    {
        printf("\n====== Semifinal stage (2) ======\n");
        printf("%14s vs %-14s\n", winner_2->name, player_list[5].name);
        printf("=================================\n");
        result = Janken_competition( winner_2, &player_list[5] );
        if ( result < 0 ) winner_2 = &player_list[5];
        winner_2->hp = MAX_HP;
    }

    /* Final stage */
    printf("\n========== Final stage ==========\n");
    printf("%14s vs %-14s\n", winner_1->name, winner_2->name);
    printf("=================================\n");
    Janken_competition( winner_1, winner_2 );

    /* Result */
    show_result( player_list, player_num, 1 );  // Sort by win
    show_result( player_list, player_num, 2 );  // Sort by score

    free(player_list);
    
    return 0;
}
