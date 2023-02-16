
#include "Variant.Models.Write.VariantGroup.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Variant.Models.Write.VariantGroup_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Variant.Models.Write.VariantGroup obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Variant.Models.Write.VariantGroup_collapseInLists_is_assigned_from_json()
{




    bourne::json input =
    {
        "collapseInLists", true
    };

    Variant.Models.Write.VariantGroup obj(input.dump());

    TEST_ASSERT(true == obj.isCollapseInLists());




}





void test_Variant.Models.Write.VariantGroup_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Variant.Models.Write.VariantGroup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Variant.Models.Write.VariantGroup_collapseInLists_is_converted_to_json()
{


    bourne::json input =
    {
        "collapseInLists", true
    };

    Variant.Models.Write.VariantGroup obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["collapseInLists"] == output["collapseInLists"]);


}




