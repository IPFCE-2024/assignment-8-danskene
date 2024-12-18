#include "queue.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    queue q; 

//første test case
initialize(&q);
assert(empty(&q));

// andre test case 

int x = 5;
enqueue(&q, x);
int y =dequeue(&q);
assert(x == y);
assert(empty(&q));

// tredje test case 

int x1 = 5, x2 = 10;
enqueue(&q, x1);
enqueue(&q, x2);

int y1 = dequeue(&q);
int y2 = dequeue(&q);

assert(y1 == x1);
assert(y2 == x2);
assert(empty(&q));
printf("all test passed my man\n");

//test case 4
int x3 = 5, x4 = 10;
enqueueStack(&q, x3);
enqueueStack(&q, x4);

int y3 = dequeueStack(&q);
int y4 = dequeueStack(&q);

assert(y3 == x3);
assert(y4 == x4);
assert(empty(&q));
printf("all test passed my man\n");

return 0;
}