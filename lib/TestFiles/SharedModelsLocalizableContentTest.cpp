
#include "Shared.Models.LocalizableContent.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Shared.Models.LocalizableContent_languageCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "languageCode", "hello"
    };

    Shared.Models.LocalizableContent obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguageCode().c_str());






}


void test_Shared.Models.LocalizableContent_content_is_assigned_from_json()
{


    bourne::json input =
    {
        "content", "hello"
    };

    Shared.Models.LocalizableContent obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContent().c_str());






}



void test_Shared.Models.LocalizableContent_languageCode_is_converted_to_json()
{

    bourne::json input =
    {
        "languageCode", "hello"
    };

    Shared.Models.LocalizableContent obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["languageCode"] == output["languageCode"]);



}


void test_Shared.Models.LocalizableContent_content_is_converted_to_json()
{

    bourne::json input =
    {
        "content", "hello"
    };

    Shared.Models.LocalizableContent obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["content"] == output["content"]);



}


