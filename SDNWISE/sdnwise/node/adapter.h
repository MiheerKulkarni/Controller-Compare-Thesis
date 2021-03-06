//
// Created by Hieu Nguyen on 3/11/2018.
//
/*Adaptation layer for Sink*/
#ifndef ADAPTER_H
#define ADAPTER_H

#include "contiki.h"
#include "packet-creator.h"
/*Send packet to the controller*/
void to_controller(packet_t*);
PROCESS_NAME(adapter_proc);
typedef struct node {
    int val;
    struct node * next;
} node_t;

#endif //ADAPTER_H
