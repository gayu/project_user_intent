#include <stdio.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <fstream>
#include <iostream>
#include "user_intent_UT.hpp"

using ::testing::_;
using ::testing::DoAll;
using ::testing::Return;

class UserIntent : public testing::Test {
    public:
        void SetUp(){
        }
        void TearDown(){
        }
};


TEST_F(UserIntent, parse_user_input_Success){
    string sample_input = SAMPLE_STRING_VALID;
    uint8_t ret = parse_user_input(sample_input);

    ASSERT_EQ(ret,EOK);
}

TEST_F(UserIntent, parse_user_input_Failure){
    string sample_input ;
    sample_input.clear();
    uint8_t ret = parse_user_input(sample_input);

    ASSERT_EQ(ret,ERR);
}

TEST_F(UserIntent, parse_user_input_DB_Failure){
    string sample_input = SAMPLE_STRING_INVALID;
    uint8_t ret = parse_user_input(sample_input);

    ASSERT_EQ(ret,DB_ERROR);
}


TEST_F(UserIntent, find_user_intent_Success){
    vector<int> sample_vector;
    sample_vector.push_back(SAMPLE_VALUE1);
    sample_vector.push_back(SAMPLE_VALUE2);

    uint8_t ret = find_user_intent(sample_vector);

    ASSERT_EQ(ret,EOK);
}


TEST_F(UserIntent, find_user_intent_Failure){
    vector<int> sample_vector;

    uint8_t ret = find_user_intent(sample_vector);

    ASSERT_EQ(ret,ERR);
}

