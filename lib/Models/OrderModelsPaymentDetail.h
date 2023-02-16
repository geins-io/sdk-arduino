
/*
 * Order.Models.PaymentDetail.h
 *
 * Data carrier for a payment detail
 */

#ifndef TINY_CPP_CLIENT_Order.Models.PaymentDetail_H_
#define TINY_CPP_CLIENT_Order.Models.PaymentDetail_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for a payment detail
 *
 *  \ingroup Models
 *
 */

class Order.Models.PaymentDetail{
public:

    /*! \brief Constructor.
	 */
    Order.Models.PaymentDetail();
    Order.Models.PaymentDetail(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.PaymentDetail();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique identifier for this payment detail. Exception: For some payment options this field can be 0. These orders only have one payment detail.
	 */
	int getId();

	/*! \brief Set Unique identifier for this payment detail. Exception: For some payment options this field can be 0. These orders only have one payment detail.
	 */
	void setId(int  id);
	/*! \brief Get Payment method id
	 */
	int getPaymentId();

	/*! \brief Set Payment method id
	 */
	void setPaymentId(int  paymentId);
	/*! \brief Get The name of the payment method
	 */
	std::string getName();

	/*! \brief Set The name of the payment method
	 */
	void setName(std::string  name);
	/*! \brief Get The display name of the payment method
	 */
	std::string getDisplayName();

	/*! \brief Set The display name of the payment method
	 */
	void setDisplayName(std::string  displayName);
	/*! \brief Get The transaction id (external reference).
	 */
	std::string getTransactionId();

	/*! \brief Set The transaction id (external reference).
	 */
	void setTransactionId(std::string  transactionId);
	/*! \brief Get The secondary transaction id, if any (external reference).
	 */
	std::string getSecondaryTransactionId();

	/*! \brief Set The secondary transaction id, if any (external reference).
	 */
	void setSecondaryTransactionId(std::string  secondaryTransactionId);
	/*! \brief Get The reservation number. This field is not available for all payment methods.
	 */
	std::string getReservationNumber();

	/*! \brief Set The reservation number. This field is not available for all payment methods.
	 */
	void setReservationNumber(std::string  reservationNumber);
	/*! \brief Get Reservation date
	 */
	std::string getReservationDate();

	/*! \brief Set Reservation date
	 */
	void setReservationDate(std::string  reservationDate);
	/*! \brief Get Payment date
	 */
	std::string getPaymentDate();

	/*! \brief Set Payment date
	 */
	void setPaymentDate(std::string  paymentDate);
	/*! \brief Get Total
	 */
	double getTotal();

	/*! \brief Set Total
	 */
	void setTotal(double  total);
	/*! \brief Get Shows if the order is paid using this payment method
	 */
	bool isPayed();

	/*! \brief Set Shows if the order is paid using this payment method
	 */
	void setPayed(bool  payed);
	/*! \brief Get The payment fee
	 */
	double getPaymentFee();

	/*! \brief Set The payment fee
	 */
	void setPaymentFee(double  paymentFee);
	/*! \brief Get The shipping fee
	 */
	double getShippingFee();

	/*! \brief Set The shipping fee
	 */
	void setShippingFee(double  shippingFee);
	/*! \brief Get The name of the payment option, if any.  This doesn't have to be the same as the payment name. Eg \"Direct bank payment\", \"Card\", \"Invoice\" etc.
	 */
	std::string getPaymentOption();

	/*! \brief Set The name of the payment option, if any.  This doesn't have to be the same as the payment name. Eg \"Direct bank payment\", \"Card\", \"Invoice\" etc.
	 */
	void setPaymentOption(std::string  paymentOption);


    private:
    int id{};
    int paymentId{};
    std::string name{};
    std::string displayName{};
    std::string transactionId{};
    std::string secondaryTransactionId{};
    std::string reservationNumber{};
    std::string reservationDate{};
    std::string paymentDate{};
    double total{};
    bool payed{};
    double paymentFee{};
    double shippingFee{};
    std::string paymentOption{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.PaymentDetail_H_ */
