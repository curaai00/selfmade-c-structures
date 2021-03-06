#include <gtest/gtest.h>
#include "../src/heap.h"

class HeapTest : public ::testing::Test
{
protected:
    Heap heap;
};

TEST_F(HeapTest, insert) {
    heap.insert(10);
    EXPECT_EQ(heap.arr[1], 10);
    heap.insert(5);
    EXPECT_EQ(heap.arr[2], 5);
    heap.insert(20);
    EXPECT_EQ(heap.arr[1], 20);
    EXPECT_EQ(heap.arr[3], 10);
}

TEST_F(HeapTest, remove) {
    for(int i=1; i<10; i++)
        heap.insert(i);
   heap.remove();
   EXPECT_EQ(heap.arr[1], 8);
   heap.remove();
   EXPECT_EQ(heap.arr[1], 7);
}

