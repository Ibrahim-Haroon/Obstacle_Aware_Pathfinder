//
//  graph.h
//  Obstacle_Aware_Pathfinder
//
//  Created by Ibrahim Haroon on 4/5/23.
//

#ifndef graph_h
#define graph_h

#include "dynamic_array.h"
#include <stdbool.h>

typedef void* GRAPH;

GRAPH graph_init(void);
bool graph_isEmpty(GRAPH graph);
void graph_addVertex(GRAPH graph, int item); //set all to 1 if unweighted graph
void graph_addConnection(GRAPH graph, int from, int to, int weight);
bool graph_containsVertex(GRAPH graph, int item);
bool graph_isConnected(GRAPH graph, int from, int to);
void graph_removeConnection(GRAPH graph, int from, int to);
void graph_removeVertex(GRAPH graph, int item);
LIST graph_getAdjacentVerticies(GRAPH graph, int from);
int graph_getWeight(GRAPH graph, int from, int to);
int graph_shortestPath(GRAPH graph, int from, int to);
void graph_dfs(GRAPH graph);
void graph_bfs(GRAPH graph);
LIST topological_sort(GRAPH graph);
void graph_destroy(GRAPH* graph);

#endif /* graph_h */

