
/*
 * Order.Refund.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.Refund_H_
#define TINY_CPP_CLIENT_Order.Refund_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.RefundRow.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.Refund{
public:

    /*! \brief Constructor.
	 */
    Order.Refund();
    Order.Refund(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Refund();


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
	int getRefundInstanceId();

	/*! \brief Set 
	 */
	void setRefundInstanceId(int  refundInstanceId);
	/*! \brief Get 
	 */
	int getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(int  orderId);
	/*! \brief Get 
	 */
	std::string getExternalOrderId();

	/*! \brief Set 
	 */
	void setExternalOrderId(std::string  externalOrderId);
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
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get 
	 */
	std::string getProcessedOn();

	/*! \brief Set 
	 */
	void setProcessedOn(std::string  processedOn);
	/*! \brief Get 
	 */
	double getRefundedItemTotal();

	/*! \brief Set 
	 */
	void setRefundedItemTotal(double  refundedItemTotal);
	/*! \brief Get 
	 */
	double getRefundedShippingFee();

	/*! \brief Set 
	 */
	void setRefundedShippingFee(double  refundedShippingFee);
	/*! \brief Get 
	 */
	double getRefundedPaymentFee();

	/*! \brief Set 
	 */
	void setRefundedPaymentFee(double  refundedPaymentFee);
	/*! \brief Get 
	 */
	double getRefundedDiscount();

	/*! \brief Set 
	 */
	void setRefundedDiscount(double  refundedDiscount);
	/*! \brief Get 
	 */
	double getRefundedBalance();

	/*! \brief Set 
	 */
	void setRefundedBalance(double  refundedBalance);
	/*! \brief Get 
	 */
	double getVatRate();

	/*! \brief Set 
	 */
	void setVatRate(double  vatRate);
	/*! \brief Get 
	 */
	std::string getPaymentName();

	/*! \brief Set 
	 */
	void setPaymentName(std::string  paymentName);
	/*! \brief Get 
	 */
	std::string getLocale();

	/*! \brief Set 
	 */
	void setLocale(std::string  locale);
	/*! \brief Get 
	 */
	std::list<Order.RefundRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <Order.RefundRow> rows);
	/*! \brief Get 
	 */
	std::string getOrderTransactionId();

	/*! \brief Set 
	 */
	void setOrderTransactionId(std::string  orderTransactionId);
	/*! \brief Get 
	 */
	std::string getSecondaryOrderTransactionId();

	/*! \brief Set 
	 */
	void setSecondaryOrderTransactionId(std::string  secondaryOrderTransactionId);


    private:
    std::string refundId{};
    int refundInstanceId{};
    int orderId{};
    std::string externalOrderId{};
    std::string externalId{};
    std::string reference{};
    std::string description{};
    std::string processedOn{};
    double refundedItemTotal{};
    double refundedShippingFee{};
    double refundedPaymentFee{};
    double refundedDiscount{};
    double refundedBalance{};
    double vatRate{};
    std::string paymentName{};
    std::string locale{};
    std::list<Order.RefundRow> rows;
    std::string orderTransactionId{};
    std::string secondaryOrderTransactionId{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Refund_H_ */
