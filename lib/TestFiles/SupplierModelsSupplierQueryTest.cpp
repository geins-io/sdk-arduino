
#include "Supplier.Models.SupplierQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Supplier.Models.SupplierQuery_nameContains_is_assigned_from_json()
{


    bourne::json input =
    {
        "nameContains", "hello"
    };

    Supplier.Models.SupplierQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getNameContains().c_str());






}




void test_Supplier.Models.SupplierQuery_nameContains_is_converted_to_json()
{

    bourne::json input =
    {
        "nameContains", "hello"
    };

    Supplier.Models.SupplierQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["nameContains"] == output["nameContains"]);



}



