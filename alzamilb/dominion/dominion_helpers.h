#ifndef _DOMINION_HELPERS_H
#define _DOMINION_HELPERS_H

#include "dominion.h"

int drawCard(int player, struct gameState *state);
int updateCoins(int player, struct gameState *state, int bonus);
int discardCard(int handPos, int currentPlayer, struct gameState *state, 
		int trashFlag);
int gainCard(int supplyPos, struct gameState *state, int toFlag, int player);
int getCost(int cardNumber);
int cardEffect(int card, int choice1, int choice2, int choice3, 
	       struct gameState *state, int handPos, int *bonus);

int adventureCard(struct gameState *state, int currentPlayer, int cardDrawn, int temphand[MAX_HAND], int drawntreasure, int z);
int feastCard(struct gameState *state, int temphand[MAX_HAND], int currentPlayer, int choice1);
int remodelCard(int currentPlayer, struct gameState *state, int choice1, int choice2, int handPos);
int mineCard(struct gameState *state, int choice1, int choice2, int currentPlayer, int handPos);
int ambassadorCard(int choice1, int choice2, int handPos, struct gameState *state, int currentPlayer);
#endif
