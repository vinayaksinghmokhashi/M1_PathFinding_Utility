#include "PathFinding.h"
#include "unity.h"
void setup(){

}
void tearDown(){

}
void takeInput(void){
    TEST_ASSERT_EQUAL_INT(2,takeInput(2));
    TEST_ASSERT_EQUAL_INT(3,takeInput(3));
}
void mincost(void){
    TEST_ASSERT_EQUAL_INT(1,takeInput(1));
    TEST_ASSERT_EQUAL_INT(3,takeInput(3));
     }
void least(void){
    TEST_ASSERT_EQUAL_INT(1,takeInput(1));
    TEST_ASSERT_EQUAL_INT(3,takeInput(3));
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(takeInput);
    return UNITY_END();
}