#include "OrderApi.h"

using namespace Tiny;



        Response<
            Object
        >
        OrderApi::
        add_comment_to_order(
            
            int id
            , 
            
            API.Order.OrderComment orderComment
            
        )
        {
            std::string url = basepath + "/API/Order/{id}/Comment"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | orderComment



            payload = orderComment.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Int
        >
        OrderApi::
        create_order(
            
            Order.Models.Order order
            
        )
        {
            std::string url = basepath + "/API/Order"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | order



            payload = order.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Int obj(output_string);


            Response<Envelope-Int> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Int
        >
        OrderApi::
        create_order_id(
        )
        {
            std::string url = basepath + "/API/Order/Id"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Int obj(output_string);


            Response<Envelope-Int> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        delete_order(
            
            int id
            , 
            
            int operation
            
        )
        {
            std::string url = basepath + "/API/Order/{id}"; //id 


            // Headers  | 

            // Query    | operation 
            addQueryParam("operation",operation);

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Order.Capture
        >
        OrderApi::
        get_capture_by_id(
            
            std::string captureId
            
        )
        {
            std::string url = basepath + "/API/Order/Capture/{captureId}"; //captureId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_captureId("{");
                s_captureId.append("captureId");
                s_captureId.append("}");

                int pos = url.find(s_captureId);

                url.erase(pos, s_captureId.length());
                url.insert(pos, stringify(captureId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Order.Capture obj(output_string);


            Response<Order.Capture> response(obj, httpCode);
            return response;
        }

        Response<
            Order.Models.Order
        >
        OrderApi::
        get_order_by_id(
            
            int id
            , 
            
            std::string include
            , 
            
            bool combineProductContainerRows
            
        )
        {
            std::string url = basepath + "/API/Order/{id}/{include}"; //id include 


            // Headers  | 

            // Query    | combineProductContainerRows 
            addQueryParam("combineProductContainerRows",combineProductContainerRows);

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));
                std::string s_include("{");
                s_include.append("include");
                s_include.append("}");

                int pos = url.find(s_include);

                url.erase(pos, s_include.length());
                url.insert(pos, stringify(include));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Order.Models.Order obj(output_string);


            Response<Order.Models.Order> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Order.Models.OrderStatus>
        >
        OrderApi::
        get_order_statuses(
        )
        {
            std::string url = basepath + "/API/Order/Statuses"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Order.Models.OrderStatus> obj = std::list<Order.Models.OrderStatus>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Order.Models.OrderStatus tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Order.Models.OrderStatus>> response(obj, httpCode);
            return response;
        }

        Response<
            Order.Refund
        >
        OrderApi::
        get_refund_by_id(
            
            std::string refundId
            
        )
        {
            std::string url = basepath + "/API/Order/Refund/{refundId}"; //refundId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_refundId("{");
                s_refundId.append("refundId");
                s_refundId.append("}");

                int pos = url.find(s_refundId);

                url.erase(pos, s_refundId.length());
                url.insert(pos, stringify(refundId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Order.Refund obj(output_string);


            Response<Order.Refund> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        partial_update_of_order(
            
            int id
            , 
            
            Order.Models.OrderUpdate order
            
        )
        {
            std::string url = basepath + "/API/Order/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | PATCH
            // Body     | order



            payload = order.toJson().dump();

            int httpCode = sendRequest(url, "PATCH", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Order.Models.Order>
        >
        OrderApi::
        query_orders(
            
            Order.Models.OrderQuery query
            
        )
        {
            std::string url = basepath + "/API/Order/Query"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | query



            payload = query.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Order.Models.Order> obj = std::list<Order.Models.Order>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Order.Models.Order tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Order.Models.Order>> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        set_capture_as_processed(
            
            Order.ProcessedCapture processedCapture
            
        )
        {
            std::string url = basepath + "/API/Order/Capture/SetAsProcessed"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | processedCapture



            payload = processedCapture.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        set_payment_as_payed(
            
            int paymentDetailId
            
        )
        {
            std::string url = basepath + "/API/Order/PaymentDetail/{paymentDetailId}/SetAsPayed"; //paymentDetailId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_paymentDetailId("{");
                s_paymentDetailId.append("paymentDetailId");
                s_paymentDetailId.append("}");

                int pos = url.find(s_paymentDetailId);

                url.erase(pos, s_paymentDetailId.length());
                url.insert(pos, stringify(paymentDetailId));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        set_refund_as_processed(
            
            Order.ProcessedRefund processedRefund
            
        )
        {
            std::string url = basepath + "/API/Order/Refund/SetAsProcessed"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | processedRefund



            payload = processedRefund.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        update_order_status(
            
            int id
            , 
            
            int status
            , 
            
            std::string transactionId
            , 
            
            std::string secondaryTransactionId
            
        )
        {
            std::string url = basepath + "/API/Order/{id}/Status/{status}/{transactionId}/{secondaryTransactionId}"; //id status transactionId secondaryTransactionId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));
                std::string s_status("{");
                s_status.append("status");
                s_status.append("}");

                int pos = url.find(s_status);

                url.erase(pos, s_status.length());
                url.insert(pos, stringify(status));
                std::string s_transactionId("{");
                s_transactionId.append("transactionId");
                s_transactionId.append("}");

                int pos = url.find(s_transactionId);

                url.erase(pos, s_transactionId.length());
                url.insert(pos, stringify(transactionId));
                std::string s_secondaryTransactionId("{");
                s_secondaryTransactionId.append("secondaryTransactionId");
                s_secondaryTransactionId.append("}");

                int pos = url.find(s_secondaryTransactionId);

                url.erase(pos, s_secondaryTransactionId.length());
                url.insert(pos, stringify(secondaryTransactionId));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        update_transaction_data(
            
            int id
            , 
            
            API.Order.TransactionData transactionData
            
        )
        {
            std::string url = basepath + "/API/Order/{id}/TransactionData"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | transactionData



            payload = transactionData.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        OrderApi::
        validate_order(
            
            Order.ValidateOrderCreationRequest request
            
        )
        {
            std::string url = basepath + "/API/Order/ValidateCreation"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | request



            payload = request.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }



