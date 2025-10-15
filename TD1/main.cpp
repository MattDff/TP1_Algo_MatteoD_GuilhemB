#include <iostream>

#include "lifo.h"
#include "lifoLinked.h"
#include "fifo.h"
#include "fifoCirc.h"
#include "fifoLinked.h"
#include "tasMax.h"
#include "tasMin.h"

int main() {
    /* Test for lifo
    lifo my_stack = lifo();
    my_stack.push(10);
    my_stack.push(20);
    std::cout << my_stack.pop() << std::endl;
    std::cout << my_stack.pop() << std::endl;
    std::cout << my_stack.pop() << std::endl;
    */

    /* Test for linked lifo
    lifoLinked my_linked_stack = lifoLinked();
    my_linked_stack.push(10);
    my_linked_stack.push(20);
    std::cout << my_linked_stack.pop() << std::endl;
    std::cout << my_linked_stack.pop() << std::endl;
    std::cout << my_linked_stack.pop() << std::endl;
    */

    /* Test for fifo
    fifo queue = fifo();
    queue.push(10);
    queue.push(20);
    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;
    */

    /* Test for circular fifo
    fifoCirc queue_circ = fifoCirc();
    queue_circ.push(10);
    queue_circ.push(20);
    std::cout << queue_circ.pop() << std::endl;
    std::cout << queue_circ.pop() << std::endl;
    std::cout << queue_circ.pop() << std::endl;
    */

    /* Test for circular fifo
    fifoLinked queue_linked = fifoLinked();
    queue_linked.push(10);
    queue_linked.push(20);
    std::cout << queue_linked.pop() << std::endl;
    std::cout << queue_linked.pop() << std::endl;
    std::cout << queue_linked.pop() << std::endl;
    */

    /* Test for Tas max
    tasMax tas_max;
    tas_max.push(19);
    tas_max.push(1);
    tas_max.push(36);
    tas_max.push(25);
    tas_max.push(17);
    tas_max.push(3);
    tas_max.push(100);
    tas_max.push(7);
    tas_max.push(2);
    for (int indice = 0; indice < 10; indice++) {
        std::cout << tas_max.pop() << std::endl;
    }
    */

    /* Test for Tas min */
    tasMin tas_min;
    tas_min.push(19);
    tas_min.push(1);
    tas_min.push(36);
    tas_min.push(25);
    tas_min.push(17);
    tas_min.push(3);
    tas_min.push(100);
    tas_min.push(7);
    tas_min.push(2);
    for (int indice = 0; indice < 10; indice++) {
        std::cout << tas_min.pop() << std::endl;
    }

    return 0;
}
