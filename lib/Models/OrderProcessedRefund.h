
/*
 * Order.ProcessedRefund.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.ProcessedRefund_H_
#define TINY_CPP_CLIENT_Order.ProcessedRefund_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.ProcessedRefund{
public:

    /*! \brief Constructor.
	 */
    Order.ProcessedRefund();
    Order.ProcessedRefund(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.ProcessedRefund();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getRefundId();

	/*! \brief Set 
	 */
	void setRefundId(std::string  refundId);
	/*! \brief Get 
	 */
	std::string getExternalId();

	/*! \brief Set 
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get 
	 */
	std::string getReference();

	/*! \brief Set 
	 */
	void setReference(std::string  reference);
	/*! \brief Get 
	 */
	std::string getProcessedOn();

	/*! \brief Set 
	 */
	void setProcessedOn(std::string  processedOn);


    private:
    std::string refundId{};
    std::string externalId{};
    std::string reference{};
    std::string processedOn{};
};
}

#endif /* TINY_CPP_CLIENT_Order.ProcessedRefund_H_ */
