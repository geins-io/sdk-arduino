
#include "Shipping.Models.ParcelGroupOptions.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"




void test_Shipping.Models.ParcelGroupOptions_markAsDelivered_is_assigned_from_json()
{




    bourne::json input =
    {
        "markAsDelivered", true
    };

    Shipping.Models.ParcelGroupOptions obj(input.dump());

    TEST_ASSERT(true == obj.isMarkAsDelivered());




}


void test_Shipping.Models.ParcelGroupOptions_signalCapturesCreated_is_assigned_from_json()
{




    bourne::json input =
    {
        "signalCapturesCreated", true
    };

    Shipping.Models.ParcelGroupOptions obj(input.dump());

    TEST_ASSERT(true == obj.isSignalCapturesCreated());




}




void test_Shipping.Models.ParcelGroupOptions_markAsDelivered_is_converted_to_json()
{


    bourne::json input =
    {
        "markAsDelivered", true
    };

    Shipping.Models.ParcelGroupOptions obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["markAsDelivered"] == output["markAsDelivered"]);


}


void test_Shipping.Models.ParcelGroupOptions_signalCapturesCreated_is_converted_to_json()
{


    bourne::json input =
    {
        "signalCapturesCreated", true
    };

    Shipping.Models.ParcelGroupOptions obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["signalCapturesCreated"] == output["signalCapturesCreated"]);


}


