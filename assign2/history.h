https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// COMP1521 18s2 mymysh ... command history
// Implements an interface to an abstract data object

#include <stdio.h>

// Functions on the Command History object

int initCommandHistory();
void addToCommandHistory(char *cmdLine, int seqNo);
void showCommandHistory(FILE *histFile);
char *getCommandFromHistory(int cmdNo);
void saveCommandHistory();
void cleanCommandHistory();
