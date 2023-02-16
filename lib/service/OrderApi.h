#ifndef TINY_CPP_CLIENT_OrderApi_H_
#define TINY_CPP_CLIENT_OrderApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "API.Order.OrderComment.h"
#include "API.Order.TransactionData.h"
#include "Envelope-Int.h"
#include "Object.h"
#include "Order.Capture.h"
#include "Order.Models.Order.h"
#include "Order.Models.OrderQuery.h"
#include "Order.Models.OrderStatus.h"
#include "Order.Models.OrderUpdate.h"
#include "Order.ProcessedCapture.h"
#include "Order.ProcessedRefund.h"
#include "Order.Refund.h"
#include "Order.ValidateOrderCreationRequest.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class OrderApi : public Service {
public:
    OrderApi() = default;

    virtual ~OrderApi() = default;

    /**
    * Adds a comment to the order.
    *
    * This add to (not replace) any previous comments.
    * \param id Order ID. *Required*
    * \param orderComment The comment *Required*
    */
    Response<
                Object
        >
    add_comment_to_order(
            
            int id
            , 
            
            API.Order.OrderComment orderComment
            
    );
    /**
    * Post a new order.
    *
    * 
    * \param order The order object. *Required*
    */
    Response<
                Envelope-Int
        >
    create_order(
            
            Order.Models.Order order
            
    );
    /**
    * Create a new order id.
    *
    * 
    */
    Response<
                Envelope-Int
        >
    create_order_id(
    );
    /**
    * Deletes or deactivates an order.
    *
    * 
    * \param id The ID of the order to delete. *Required*
    * \param operation The method of deletion desired. *Required*
    */
    Response<
                Object
        >
    delete_order(
            
            int id
            , 
            
            int operation
            
    );
    /**
    * Get Capture by Id.
    *
    * 
    * \param captureId Capture ID. *Required*
    */
    Response<
                Order.Capture
        >
    get_capture_by_id(
            
            std::string captureId
            
    );
    /**
    * Get an instance of a order.
    *
    * 
    * \param id The ID of the order to get. *Required*
    * \param include A comma separated string of what related collections to include with this result set. The  possible values are: rows, paymentdetails, shippingdetails and refunds. *Required*
    * \param combineProductContainerRows If true, will combine all order rows that are part of a container into a single container row.
    */
    Response<
                Order.Models.Order
        >
    get_order_by_id(
            
            int id
            , 
            
            std::string include
            , 
            
            bool combineProductContainerRows
            
    );
    /**
    * Get a list of available order statuses.
    *
    * 
    */
    Response<
                    std::list<Order.Models.OrderStatus>
        >
    get_order_statuses(
    );
    /**
    * Get Refund by Id.
    *
    * 
    * \param refundId Refund ID. *Required*
    */
    Response<
                Order.Refund
        >
    get_refund_by_id(
            
            std::string refundId
            
    );
    /**
    * Partial update of an order.
    *
    * 
    * \param id The orderId of the order to update *Required*
    * \param order The order object containing the properties that should be updated. *Required*
    */
    Response<
                Object
        >
    partial_update_of_order(
            
            int id
            , 
            
            Order.Models.OrderUpdate order
            
    );
    /**
    * Query the order repository.
    *
    * 
    * \param query The details of the query. *Required*
    */
    Response<
                    std::list<Order.Models.Order>
        >
    query_orders(
            
            Order.Models.OrderQuery query
            
    );
    /**
    * Set a capture as processed (= captured).
    *
    * 
    * \param processedCapture Contains CaptureId and optional metadata about capture. *Required*
    */
    Response<
                Object
        >
    set_capture_as_processed(
            
            Order.ProcessedCapture processedCapture
            
    );
    /**
    * Set Payment Detail as payed.
    *
    * 
    * \param paymentDetailId Payment Detail ID. *Required*
    */
    Response<
                Object
        >
    set_payment_as_payed(
            
            int paymentDetailId
            
    );
    /**
    * Set a refund as processed (= settled).
    *
    * 
    * \param processedRefund Contains RefundId and optional metadata about refund. *Required*
    */
    Response<
                Object
        >
    set_refund_as_processed(
            
            Order.ProcessedRefund processedRefund
            
    );
    /**
    * Update order status.
    *
    * 
    * \param id Order ID. *Required*
    * \param status Order status. These statuses can be set: cancelled, on-hold, inactive, out-of-stock,  backorder, completed, pending. *Required*
    * \param transactionId A transaction id can be set here if status is set to pending. *Required*
    * \param secondaryTransactionId A secondary transaction id, if any, can be set here if status is set to pending. *Required*
    */
    Response<
                Object
        >
    update_order_status(
            
            int id
            , 
            
            int status
            , 
            
            std::string transactionId
            , 
            
            std::string secondaryTransactionId
            
    );
    /**
    * Updates transaction data on an order.
    *
    * 
    * \param id Order ID. *Required*
    * \param transactionData The transaction data *Required*
    */
    Response<
                Object
        >
    update_transaction_data(
            
            int id
            , 
            
            API.Order.TransactionData transactionData
            
    );
    /**
    * Validates order data for order creation..
    *
    * 
    * \param request The order data to validate. *Required*
    */
    Response<
                Object
        >
    validate_order(
            
            Order.ValidateOrderCreationRequest request
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_OrderApi_H_ */