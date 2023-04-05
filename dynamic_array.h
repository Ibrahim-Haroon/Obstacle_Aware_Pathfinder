//
//  dynamic_array.h
//  Obstacle_Aware_Pathfinder
//
//  Created by Ibrahim Haroon on 4/5/23.
//

#ifndef dynamic_array_h
#define dynamic_array_h

#include <stdbool.h>

typedef void* LIST;

//public methods
LIST list_init(void);
bool list_isEmpty(LIST list);
void list_add(LIST list, int num);
void list_remove(LIST list, int num);
bool list_contains(LIST list, int num);
void list_num_at(LIST list, int index);
void list_print(LIST list);
void list_destroy(LIST* list);

#endif /* dynamic_array_h */
