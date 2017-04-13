//Bully election algorithm
#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>


struct process{
    int no; //unique number of process
    int priority;   //priority of the process
    int active ;
    struct process *next;
}
typedef struct process proc;


struct priority{
    int pri;
    struct priority *next;
    proc *pp;
};


