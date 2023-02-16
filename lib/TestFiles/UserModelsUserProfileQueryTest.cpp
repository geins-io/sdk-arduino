
#include "User.Models.UserProfileQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_User.Models.UserProfileQuery_userId_is_assigned_from_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    User.Models.UserProfileQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUserId());








}


void test_User.Models.UserProfileQuery_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    User.Models.UserProfileQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}



void test_User.Models.UserProfileQuery_userId_is_converted_to_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    User.Models.UserProfileQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userId"] == output["userId"]);




}


void test_User.Models.UserProfileQuery_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    User.Models.UserProfileQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


