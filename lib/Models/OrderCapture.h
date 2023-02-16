
/*
 * Order.Capture.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.Capture_H_
#define TINY_CPP_CLIENT_Order.Capture_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.CaptureRow.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.Capture{
public:

    /*! \brief Constructor.
	 */
    Order.Capture();
    Order.Capture(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Capture();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCaptureId();

	/*! \brief Set 
	 */
	void setCaptureId(std::string  captureId);
	/*! \brief Get 
	 */
	std::string getOrderPaymentId();

	/*! \brief Set 
	 */
	void setOrderPaymentId(std::string  orderPaymentId);
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
	double getCapturedItemTotal();

	/*! \brief Set 
	 */
	void setCapturedItemTotal(double  capturedItemTotal);
	/*! \brief Get 
	 */
	double getCapturedShippingFee();

	/*! \brief Set 
	 */
	void setCapturedShippingFee(double  capturedShippingFee);
	/*! \brief Get 
	 */
	double getCapturedPaymentFee();

	/*! \brief Set 
	 */
	void setCapturedPaymentFee(double  capturedPaymentFee);
	/*! \brief Get 
	 */
	double getCapturedDiscount();

	/*! \brief Set 
	 */
	void setCapturedDiscount(double  capturedDiscount);
	/*! \brief Get 
	 */
	double getCapturedBalance();

	/*! \brief Set 
	 */
	void setCapturedBalance(double  capturedBalance);
	/*! \brief Get 
	 */
	double getVatRate();

	/*! \brief Set 
	 */
	void setVatRate(double  vatRate);
	/*! \brief Get 
	 */
	std::string getTrackingNumber();

	/*! \brief Set 
	 */
	void setTrackingNumber(std::string  trackingNumber);
	/*! \brief Get 
	 */
	std::string getShippingName();

	/*! \brief Set 
	 */
	void setShippingName(std::string  shippingName);
	/*! \brief Get 
	 */
	std::string getTrackingUri();

	/*! \brief Set 
	 */
	void setTrackingUri(std::string  trackingUri);
	/*! \brief Get 
	 */
	std::string getShippingMethod();

	/*! \brief Set 
	 */
	void setShippingMethod(std::string  shippingMethod);
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
	std::list<Order.CaptureRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <Order.CaptureRow> rows);
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
    std::string captureId{};
    std::string orderPaymentId{};
    int orderId{};
    std::string externalOrderId{};
    std::string externalId{};
    std::string reference{};
    std::string description{};
    std::string processedOn{};
    double capturedItemTotal{};
    double capturedShippingFee{};
    double capturedPaymentFee{};
    double capturedDiscount{};
    double capturedBalance{};
    double vatRate{};
    std::string trackingNumber{};
    std::string shippingName{};
    std::string trackingUri{};
    std::string shippingMethod{};
    std::string paymentName{};
    std::string locale{};
    std::list<Order.CaptureRow> rows;
    std::string orderTransactionId{};
    std::string secondaryOrderTransactionId{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Capture_H_ */
