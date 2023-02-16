
/*
 * Order.Models.Refund.h
 *
 * Data carrier for a refund
 */

#ifndef TINY_CPP_CLIENT_Order.Models.Refund_H_
#define TINY_CPP_CLIENT_Order.Models.Refund_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for a refund
 *
 *  \ingroup Models
 *
 */

class Order.Models.Refund{
public:

    /*! \brief Constructor.
	 */
    Order.Models.Refund();
    Order.Models.Refund(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.Refund();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique identifier for this refund
	 */
	int getId();

	/*! \brief Set Unique identifier for this refund
	 */
	void setId(int  id);
	/*! \brief Get Reference to the order row that has been refunded
	 */
	int getOrderRowId();

	/*! \brief Set Reference to the order row that has been refunded
	 */
	void setOrderRowId(int  orderRowId);
	/*! \brief Get Reference to the payment detail that has been refunded
	 */
	int getPaymentDetailId();

	/*! \brief Set Reference to the payment detail that has been refunded
	 */
	void setPaymentDetailId(int  paymentDetailId);
	/*! \brief Get Id number of the return. Can be used to group refunds.
	 */
	int getReturnId();

	/*! \brief Set Id number of the return. Can be used to group refunds.
	 */
	void setReturnId(int  returnId);
	/*! \brief Get Article number. If the refund is not bound to an order row this field contains an optional refund article number.
	 */
	std::string getArticleNumber();

	/*! \brief Set Article number. If the refund is not bound to an order row this field contains an optional refund article number.
	 */
	void setArticleNumber(std::string  articleNumber);
	/*! \brief Get Datetime when the refund was created
	 */
	std::string getCreatedAt();

	/*! \brief Set Datetime when the refund was created
	 */
	void setCreatedAt(std::string  createdAt);
	/*! \brief Get Total amount refunded
	 */
	double getTotal();

	/*! \brief Set Total amount refunded
	 */
	void setTotal(double  total);
	/*! \brief Get Reason code for the refund
	 */
	int getReasonCode();

	/*! \brief Set Reason code for the refund
	 */
	void setReasonCode(int  reasonCode);
	/*! \brief Get Reason for refund
	 */
	std::string getReason();

	/*! \brief Set Reason for refund
	 */
	void setReason(std::string  reason);
	/*! \brief Get Shows if the refund was deposited to the customers balance
	 */
	bool isToBalance();

	/*! \brief Set Shows if the refund was deposited to the customers balance
	 */
	void setToBalance(bool  toBalance);
	/*! \brief Get Vat percent in decimals for the refunded amount
	 */
	double getVat();

	/*! \brief Set Vat percent in decimals for the refunded amount
	 */
	void setVat(double  vat);
	/*! \brief Get Item ID (SKU).
	 */
	int getItemId();

	/*! \brief Set Item ID (SKU).
	 */
	void setItemId(int  itemId);
	/*! \brief Get Refund Type
	 */
	std::string getRefundType();

	/*! \brief Set Refund Type
	 */
	void setRefundType(std::string  refundType);


    private:
    int id{};
    int orderRowId{};
    int paymentDetailId{};
    int returnId{};
    std::string articleNumber{};
    std::string createdAt{};
    double total{};
    int reasonCode{};
    std::string reason{};
    bool toBalance{};
    double vat{};
    int itemId{};
    std::string refundType{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.Refund_H_ */
