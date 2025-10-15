#include <iostream>

#include "lifo.h"
#include "lifoLinked.h"
#include "fifo.h"
#include "fifoCirc.h"
#include "fifoLinked.h"

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

    /* Test for circular fifo */
    fifoLinked queue_linked = fifoLinked();
    queue_linked.push(10);
    queue_linked.push(20);
    std::cout << queue_linked.pop() << std::endl;
    std::cout << queue_linked.pop() << std::endl;
    std::cout << queue_linked.pop() << std::endl;

    return 0;
}
