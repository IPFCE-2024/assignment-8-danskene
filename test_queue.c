#include "queue.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    queue q; 

//første test case
initialize(q);
assert(empty(&q));

// andre test case 

int x = 5;
enqueue(x,&q);
int y =dequeue(&q);
assert(x == y);
assert(empty(&q));

// tredje test case 

int x1 = 5, x2 = 10;
(x1, &q);
enqueue(x2, &q);

int y1 = dequeue(&q);
int y2 = dequeue(&q);

assert(y1 == x1);
assert(y2 == x2);
assert(empty(&q));
printf("all test passed my man\n");

return 0;
}