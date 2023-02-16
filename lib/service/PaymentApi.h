#ifndef TINY_CPP_CLIENT_PaymentApi_H_
#define TINY_CPP_CLIENT_PaymentApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Payment.Models.PaymentOption.h"
#include "Payment.Models.PaymentOptionQuery.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class PaymentApi : public Service {
public:
    PaymentApi() = default;

    virtual ~PaymentApi() = default;

    /**
    * Query payment options.
    *
    * 
    * \param query The payment query *Required*
    */
    Response<
                    std::list<Payment.Models.PaymentOption>
        >
    query_payment_options(
            
            Payment.Models.PaymentOptionQuery query
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_PaymentApi_H_ */