#include<stdio.h>
int main()
{
 printf("//All git commands are written here\n");
 printf("git config --global user.name LaterDisciple\n");
 printf("git config --global user.email LaterDisciple\n");
 printf("ls :- list of all files\n");
 printf("ls -lart :- also includes hidden files \n");
 printf("git init :- initialise git bash in a folder\n ");
 printf("touch filename.c:- creation of new file in working tree\n");
 printf("git status:- check current status of file whether it is in untrack, staged,unmodified or modiefied state\n  ");
 printf("git add:- file from untrack to staged \n");
 printf("git add all files at same time 'git add -A'\n");
 printf("git commit :- file from staged to unmodified state\n");
 printf(" git commit m1(initial commit):- 'git commit filename.c'->i->esc->:wq->enter\n ");
 printf("git commit m2 :- 'git commit -m ''commit message'''\n");
 printf("git checkout filename :- go to last commit state(use caustion)\n");
 return 0;
}