#include "PriorityQueue.h"
#include <iostream>

#ifdef GREATER
#include "greater.h"
#elif defined LESSER
#include "lesser.h"
#else
#define MY_SORT
#endif

int main(int argc, char *argv[]) {

    std::vector <double> data = {1.0, 2.0, 3.0, 4.0, 5.0, 0.0, -1.0, -2.0, -3.0, -4.0, -5.0};

    PriorityQueue my_queue;

    for (unsigned i=0; i<data.size(); i++) {
        my_queue.push(data.at(i));
    }

    for (unsigned i=0; i<data.size(); i++) {
        std::cout << my_queue.pop() << std::endl;
    }

}

#ifdef MY_SORT

bool is_ahead(PriorityQueue queue, size_t idx1, size_t idx2) {

    //TODO : (1) The greater ABS value one is ahead.
    //       (2) If ABS value is same, the greater one is ahead.
}

#endif
