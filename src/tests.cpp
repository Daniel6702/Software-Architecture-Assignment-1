#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "array_int_queue.hpp"
#include "list_int_queue.hpp"

TEST_CASE("Array") { //PASSED
    Array_int_queue queue(4);
    REQUIRE(queue.empty() == true);
    REQUIRE(queue.full() == false);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    REQUIRE(queue.full() == true);
    REQUIRE(queue.empty() == false);
    REQUIRE(queue.dequeue() == 1);
    REQUIRE(queue.dequeue() == 2);
    REQUIRE(queue.dequeue() == 3);
    REQUIRE(queue.dequeue() == 4);
    REQUIRE(queue.empty() == true);
    REQUIRE(queue.full() == false);
}

TEST_CASE("List") { //PASSED
    List_int_queue queue;
    REQUIRE(queue.empty() == true);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    REQUIRE(queue.dequeue() == 1);
    REQUIRE(queue.dequeue() == 2);
    REQUIRE(queue.dequeue() == 3);
    REQUIRE(queue.dequeue() == 4);
    REQUIRE(queue.empty() == true);
    
    
}
