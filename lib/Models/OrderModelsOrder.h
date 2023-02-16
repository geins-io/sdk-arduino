
/*
 * Order.Models.Order.h
 *
 * Data carrier for an order.
 */

#ifndef TINY_CPP_CLIENT_Order.Models.Order_H_
#define TINY_CPP_CLIENT_Order.Models.Order_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.Models.Address.h"
#include "Order.Models.OrderRow.h"
#include "Order.Models.PaymentDetail.h"
#include "Order.Models.Refund.h"
#include "Order.Models.ShippingDetail.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief Data carrier for an order.
 *
 *  \ingroup Models
 *
 */

class Order.Models.Order{
public:

    /*! \brief Constructor.
	 */
    Order.Models.Order();
    Order.Models.Order(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.Order();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for this order.
	 */
	int getId();

	/*! \brief Set The unique identifier for this order.
	 */
	void setId(int  id);
	/*! \brief Get The unique external identifier for this order.
	 */
	std::string getExternalId();

	/*! \brief Set The unique external identifier for this order.
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get The social security number, or organisational number of the customer.
	 */
	std::string getPersonalId();

	/*! \brief Set The social security number, or organisational number of the customer.
	 */
	void setPersonalId(std::string  personalId);
	/*! \brief Get The unique identifier of the customer placing this order.
	 */
	int getCustomerId();

	/*! \brief Set The unique identifier of the customer placing this order.
	 */
	void setCustomerId(int  customerId);
	/*! \brief Get Customer type. Usually 1 for private customers and 2 for companies. This field is customer specific
	 */
	int getCustomerTypeId();

	/*! \brief Set Customer type. Usually 1 for private customers and 2 for companies. This field is customer specific
	 */
	void setCustomerTypeId(int  customerTypeId);
	/*! \brief Get Datetime when the order was created.
	 */
	std::string getCreatedAt();

	/*! \brief Set Datetime when the order was created.
	 */
	void setCreatedAt(std::string  createdAt);
	/*! \brief Get Datetime when the order was last updated.
	 */
	std::string getUpdatedAt();

	/*! \brief Set Datetime when the order was last updated.
	 */
	void setUpdatedAt(std::string  updatedAt);
	/*! \brief Get The DateTime when the order was completed (delivered, payed).
	 */
	std::string getCompletedAt();

	/*! \brief Set The DateTime when the order was completed (delivered, payed).
	 */
	void setCompletedAt(std::string  completedAt);
	/*! \brief Get The order status. Possbile values: cancelled, on-hold, inactive, refunded, partial,  pending-payment, out-of-stock, backorder, completed, pending.
	 */
	std::string getStatus();

	/*! \brief Set The order status. Possbile values: cancelled, on-hold, inactive, refunded, partial,  pending-payment, out-of-stock, backorder, completed, pending.
	 */
	void setStatus(std::string  status);
	/*! \brief Get ISO Currency code.
	 */
	std::string getCurrency();

	/*! \brief Set ISO Currency code.
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get The Currency Rate to SEK.
	 */
	double getCurrencyRate();

	/*! \brief Set The Currency Rate to SEK.
	 */
	void setCurrencyRate(double  currencyRate);
	/*! \brief Get The unique identifier for the market this order originates from.
	 */
	int getMarketId();

	/*! \brief Set The unique identifier for the market this order originates from.
	 */
	void setMarketId(int  marketId);
	/*! \brief Get The market name. Usually this is the equal to the site name.
	 */
	std::string getMarketName();

	/*! \brief Set The market name. Usually this is the equal to the site name.
	 */
	void setMarketName(std::string  marketName);
	/*! \brief Get Two-letter Language code.
	 */
	std::string getLanguage();

	/*! \brief Set Two-letter Language code.
	 */
	void setLanguage(std::string  language);
	/*! \brief Get Order total.
	 */
	double getOrderTotal();

	/*! \brief Set Order total.
	 */
	void setOrderTotal(double  orderTotal);
	/*! \brief Get Expected total sum to be paid after discount and balance.   <para>The value is usually taken directly from the payment provider and represents the actual reserved amount.</para><para>If this differs from OrderTotal, actions should be taken to ensure they match. This usually happens due to rounding.</para>
	 */
	double getExpectedSum();

	/*! \brief Set Expected total sum to be paid after discount and balance.   <para>The value is usually taken directly from the payment provider and represents the actual reserved amount.</para><para>If this differs from OrderTotal, actions should be taken to ensure they match. This usually happens due to rounding.</para>
	 */
	void setExpectedSum(double  expectedSum);
	/*! \brief Get Order VAT total.
	 */
	double getVATTotal();

	/*! \brief Set Order VAT total.
	 */
	void setVATTotal(double  vATTotal);
	/*! \brief Get Order value inc vat after discount but before balance
	 */
	double getOrderValueIncVat();

	/*! \brief Set Order value inc vat after discount but before balance
	 */
	void setOrderValueIncVat(double  orderValueIncVat);
	/*! \brief Get Order value ex vat after discount but before balance
	 */
	double getOrderValueExVat();

	/*! \brief Set Order value ex vat after discount but before balance
	 */
	void setOrderValueExVat(double  orderValueExVat);
	/*! \brief Get Item value inc vat excluding fees and discount
	 */
	double getItemValueIncVat();

	/*! \brief Set Item value inc vat excluding fees and discount
	 */
	void setItemValueIncVat(double  itemValueIncVat);
	/*! \brief Get Item value ex vat excluding fees and discount
	 */
	double getItemValueExVat();

	/*! \brief Set Item value ex vat excluding fees and discount
	 */
	void setItemValueExVat(double  itemValueExVat);
	/*! \brief Get Total discount inc vat.
	 */
	double getDiscount();

	/*! \brief Set Total discount inc vat.
	 */
	void setDiscount(double  discount);
	/*! \brief Get Total discount ex vat.
	 */
	double getDiscountExVat();

	/*! \brief Set Total discount ex vat.
	 */
	void setDiscountExVat(double  discountExVat);
	/*! \brief Get The amount which was withdrawn from the customers balance inc vat.
	 */
	double getFromBalance();

	/*! \brief Set The amount which was withdrawn from the customers balance inc vat.
	 */
	void setFromBalance(double  fromBalance);
	/*! \brief Get Shipping fee inc vat.
	 */
	double getShippingFee();

	/*! \brief Set Shipping fee inc vat.
	 */
	void setShippingFee(double  shippingFee);
	/*! \brief Get Shipping fee ex vat.
	 */
	double getShippingFeeExVat();

	/*! \brief Set Shipping fee ex vat.
	 */
	void setShippingFeeExVat(double  shippingFeeExVat);
	/*! \brief Get Payment fee inc vat.
	 */
	double getPaymentFee();

	/*! \brief Set Payment fee inc vat.
	 */
	void setPaymentFee(double  paymentFee);
	/*! \brief Get Payment fee ex vat.
	 */
	double getPaymentFeeExVat();

	/*! \brief Set Payment fee ex vat.
	 */
	void setPaymentFeeExVat(double  paymentFeeExVat);
	/*! \brief Get Order message. Can contain instructions from customer or added details about the order.
	 */
	std::string getMessage();

	/*! \brief Set Order message. Can contain instructions from customer or added details about the order.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Internal order messages. Can contain internal details about the order.
	 */
	std::list<std::string> getOrderMessages();

	/*! \brief Set Internal order messages. Can contain internal details about the order.
	 */
	void setOrderMessages(std::list <std::string> orderMessages);
	/*! \brief Get List of payment details <seealso cref=\"T:Order.Models.PaymentDetail\" />.
	 */
	std::list<Order.Models.PaymentDetail> getPaymentDetails();

	/*! \brief Set List of payment details <seealso cref=\"T:Order.Models.PaymentDetail\" />.
	 */
	void setPaymentDetails(std::list <Order.Models.PaymentDetail> paymentDetails);
	/*! \brief Get List of shipping details <seealso cref=\"T:Order.Models.ShippingDetail\" />.
	 */
	std::list<Order.Models.ShippingDetail> getShippingDetails();

	/*! \brief Set List of shipping details <seealso cref=\"T:Order.Models.ShippingDetail\" />.
	 */
	void setShippingDetails(std::list <Order.Models.ShippingDetail> shippingDetails);
	/*! \brief Get 
	 */
	Order.Models.Address getShippingAddress();

	/*! \brief Set 
	 */
	void setShippingAddress(Order.Models.Address  shippingAddress);
	/*! \brief Get 
	 */
	Order.Models.Address getBillingAddress();

	/*! \brief Set 
	 */
	void setBillingAddress(Order.Models.Address  billingAddress);
	/*! \brief Get List of order rows
	 */
	std::list<Order.Models.OrderRow> getRows();

	/*! \brief Set List of order rows
	 */
	void setRows(std::list <Order.Models.OrderRow> rows);
	/*! \brief Get List of order refunds <seealso cref=\"T:Order.Models.Refund\" />.
	 */
	std::list<Order.Models.Refund> getRefunds();

	/*! \brief Set List of order refunds <seealso cref=\"T:Order.Models.Refund\" />.
	 */
	void setRefunds(std::list <Order.Models.Refund> refunds);
	/*! \brief Get Customer IP-number.
	 */
	std::string getIp();

	/*! \brief Set Customer IP-number.
	 */
	void setIp(std::string  ip);
	/*! \brief Get Customer User Agent.
	 */
	std::string getUserAgent();

	/*! \brief Set Customer User Agent.
	 */
	void setUserAgent(std::string  userAgent);
	/*! \brief Get Chosen service location.
	 */
	std::string getServiceLocation();

	/*! \brief Set Chosen service location.
	 */
	void setServiceLocation(std::string  serviceLocation);
	/*! \brief Get Campaign code applied to the order.
	 */
	std::string getCampaignCode();

	/*! \brief Set Campaign code applied to the order.
	 */
	void setCampaignCode(std::string  campaignCode);
	/*! \brief Get The internal id of the applied campaign code.
	 */
	int getCampaignCodeId();

	/*! \brief Set The internal id of the applied campaign code.
	 */
	void setCampaignCodeId(int  campaignCodeId);
	/*! \brief Get General percent discount applied to the order.
	 */
	int getPercent();

	/*! \brief Set General percent discount applied to the order.
	 */
	void setPercent(int  percent);
	/*! \brief Get The desired delivery date of the order.
	 */
	std::string getDesiredDeliveryDate();

	/*! \brief Set The desired delivery date of the order.
	 */
	void setDesiredDeliveryDate(std::string  desiredDeliveryDate);
	/*! \brief Get The gender of the customer. True = male, False = female, null = unknown.
	 */
	bool isGender();

	/*! \brief Set The gender of the customer. True = male, False = female, null = unknown.
	 */
	void setGender(bool  gender);
	/*! \brief Get The unique identifier for the cart from which this order originates.
	 */
	int getCartId();

	/*! \brief Set The unique identifier for the cart from which this order originates.
	 */
	void setCartId(int  cartId);
	/*! \brief Get The session id for the from which this order originates.
	 */
	std::string getSessionId();

	/*! \brief Set The session id for the from which this order originates.
	 */
	void setSessionId(std::string  sessionId);
	/*! \brief Get 
	 */
	int getExternalOrderStatus();

	/*! \brief Set 
	 */
	void setExternalOrderStatus(int  externalOrderStatus);
	/*! \brief Get The ids for the campaigns applied to this order (not rows)
	 */
	std::list<std::string> getCampaignIds();

	/*! \brief Set The ids for the campaigns applied to this order (not rows)
	 */
	void setCampaignIds(std::list <std::string> campaignIds);
	/*! \brief Get The names for the campaigns applied to this order (not rows)
	 */
	std::list<std::string> getCampaignNames();

	/*! \brief Set The names for the campaigns applied to this order (not rows)
	 */
	void setCampaignNames(std::list <std::string> campaignNames);
	/*! \brief Get The order meta data to store additional information about the order. Eg. customer specific shipping data to include for nShift checkout (former UDC) shipments
	 */
	Map<std::string, std::string> getMetaData();

	/*! \brief Set The order meta data to store additional information about the order. Eg. customer specific shipping data to include for nShift checkout (former UDC) shipments
	 */
	void setMetaData(Map <std::string, std::string> metaData);
	/*! \brief Get The public id of this order.
	 */
	std::string getPublicId();

	/*! \brief Set The public id of this order.
	 */
	void setPublicId(std::string  publicId);


    private:
    int id{};
    std::string externalId{};
    std::string personalId{};
    int customerId{};
    int customerTypeId{};
    std::string createdAt{};
    std::string updatedAt{};
    std::string completedAt{};
    std::string status{};
    std::string currency{};
    double currencyRate{};
    int marketId{};
    std::string marketName{};
    std::string language{};
    double orderTotal{};
    double expectedSum{};
    double vATTotal{};
    double orderValueIncVat{};
    double orderValueExVat{};
    double itemValueIncVat{};
    double itemValueExVat{};
    double discount{};
    double discountExVat{};
    double fromBalance{};
    double shippingFee{};
    double shippingFeeExVat{};
    double paymentFee{};
    double paymentFeeExVat{};
    std::string message{};
    std::list<std::string> orderMessages;
    std::list<Order.Models.PaymentDetail> paymentDetails;
    std::list<Order.Models.ShippingDetail> shippingDetails;
    Order.Models.Address shippingAddress;
    Order.Models.Address billingAddress;
    std::list<Order.Models.OrderRow> rows;
    std::list<Order.Models.Refund> refunds;
    std::string ip{};
    std::string userAgent{};
    std::string serviceLocation{};
    std::string campaignCode{};
    int campaignCodeId{};
    int percent{};
    std::string desiredDeliveryDate{};
    bool gender{};
    int cartId{};
    std::string sessionId{};
    int externalOrderStatus{};
    std::list<std::string> campaignIds;
    std::list<std::string> campaignNames;
    Map<std::string, std::string> metaData;
    std::string publicId{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.Order_H_ */
