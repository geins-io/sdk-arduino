
/*
 * Order.CheckoutOrder.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.CheckoutOrder_H_
#define TINY_CPP_CLIENT_Order.CheckoutOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Order.CheckoutOrderRow.h"
#include "Order.FreightClass.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.CheckoutOrder{
public:

    /*! \brief Constructor.
	 */
    Order.CheckoutOrder();
    Order.CheckoutOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.CheckoutOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(std::string  orderId);
	/*! \brief Get 
	 */
	std::string getExternalOrderId();

	/*! \brief Set 
	 */
	void setExternalOrderId(std::string  externalOrderId);
	/*! \brief Get 
	 */
	std::string getCartId();

	/*! \brief Set 
	 */
	void setCartId(std::string  cartId);
	/*! \brief Get 
	 */
	std::string getSessionId();

	/*! \brief Set 
	 */
	void setSessionId(std::string  sessionId);
	/*! \brief Get 
	 */
	int getSiteId();

	/*! \brief Set 
	 */
	void setSiteId(int  siteId);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string  ipAddress);
	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);
	/*! \brief Get 
	 */
	std::string getInternalMessage();

	/*! \brief Set 
	 */
	void setInternalMessage(std::string  internalMessage);
	/*! \brief Get 
	 */
	std::string getLocale();

	/*! \brief Set 
	 */
	void setLocale(std::string  locale);
	/*! \brief Get 
	 */
	std::list<Order.CheckoutOrderRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <Order.CheckoutOrderRow> rows);
	/*! \brief Get 
	 */
	int getCampaignId();

	/*! \brief Set 
	 */
	void setCampaignId(int  campaignId);
	/*! \brief Get 
	 */
	std::string getCampaignCode();

	/*! \brief Set 
	 */
	void setCampaignCode(std::string  campaignCode);
	/*! \brief Get 
	 */
	std::string getCampaignName();

	/*! \brief Set 
	 */
	void setCampaignName(std::string  campaignName);
	/*! \brief Get 
	 */
	std::list<std::string> getCampaignIds();

	/*! \brief Set 
	 */
	void setCampaignIds(std::list <std::string> campaignIds);
	/*! \brief Get 
	 */
	std::list<std::string> getCampaignNames();

	/*! \brief Set 
	 */
	void setCampaignNames(std::list <std::string> campaignNames);
	/*! \brief Get 
	 */
	int getCustomerId();

	/*! \brief Set 
	 */
	void setCustomerId(int  customerId);
	/*! \brief Get 
	 */
	int getCustomerTypeId();

	/*! \brief Set 
	 */
	void setCustomerTypeId(int  customerTypeId);
	/*! \brief Get 
	 */
	int getGender();

	/*! \brief Set 
	 */
	void setGender(int  gender);
	/*! \brief Get 
	 */
	std::string getDateOfBirth();

	/*! \brief Set 
	 */
	void setDateOfBirth(std::string  dateOfBirth);
	/*! \brief Get 
	 */
	std::string getPersonalId();

	/*! \brief Set 
	 */
	void setPersonalId(std::string  personalId);
	/*! \brief Get 
	 */
	std::string getUserAgent();

	/*! \brief Set 
	 */
	void setUserAgent(std::string  userAgent);
	/*! \brief Get 
	 */
	Map<std::string, std::string> getMetaData();

	/*! \brief Set 
	 */
	void setMetaData(Map <std::string, std::string> metaData);
	/*! \brief Get 
	 */
	int getPaymentId();

	/*! \brief Set 
	 */
	void setPaymentId(int  paymentId);
	/*! \brief Get 
	 */
	std::string getTransactionId();

	/*! \brief Set 
	 */
	void setTransactionId(std::string  transactionId);
	/*! \brief Get 
	 */
	std::string getSecondaryTransactionId();

	/*! \brief Set 
	 */
	void setSecondaryTransactionId(std::string  secondaryTransactionId);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	std::string getCompany();

	/*! \brief Set 
	 */
	void setCompany(std::string  company);
	/*! \brief Get 
	 */
	std::string getOrganizationNumber();

	/*! \brief Set 
	 */
	void setOrganizationNumber(std::string  organizationNumber);
	/*! \brief Get 
	 */
	std::string getFirstName();

	/*! \brief Set 
	 */
	void setFirstName(std::string  firstName);
	/*! \brief Get 
	 */
	std::string getLastName();

	/*! \brief Set 
	 */
	void setLastName(std::string  lastName);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getAddress1();

	/*! \brief Set 
	 */
	void setAddress1(std::string  address1);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string  zip);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string  city);
	/*! \brief Get 
	 */
	std::string getRegion();

	/*! \brief Set 
	 */
	void setRegion(std::string  region);
	/*! \brief Get 
	 */
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string  phone);
	/*! \brief Get 
	 */
	std::string getMobilePhone();

	/*! \brief Set 
	 */
	void setMobilePhone(std::string  mobilePhone);
	/*! \brief Get 
	 */
	std::string getCareOf();

	/*! \brief Set 
	 */
	void setCareOf(std::string  careOf);
	/*! \brief Get 
	 */
	int getShippingId();

	/*! \brief Set 
	 */
	void setShippingId(int  shippingId);
	/*! \brief Get 
	 */
	std::string getShippingCountry();

	/*! \brief Set 
	 */
	void setShippingCountry(std::string  shippingCountry);
	/*! \brief Get 
	 */
	std::string getShippingCompany();

	/*! \brief Set 
	 */
	void setShippingCompany(std::string  shippingCompany);
	/*! \brief Get 
	 */
	std::string getShippingOrganizationNumber();

	/*! \brief Set 
	 */
	void setShippingOrganizationNumber(std::string  shippingOrganizationNumber);
	/*! \brief Get 
	 */
	std::string getShippingFirstName();

	/*! \brief Set 
	 */
	void setShippingFirstName(std::string  shippingFirstName);
	/*! \brief Get 
	 */
	std::string getShippingLastName();

	/*! \brief Set 
	 */
	void setShippingLastName(std::string  shippingLastName);
	/*! \brief Get 
	 */
	std::string getShippingEmail();

	/*! \brief Set 
	 */
	void setShippingEmail(std::string  shippingEmail);
	/*! \brief Get 
	 */
	std::string getShippingAddress1();

	/*! \brief Set 
	 */
	void setShippingAddress1(std::string  shippingAddress1);
	/*! \brief Get 
	 */
	std::string getShippingAddress2();

	/*! \brief Set 
	 */
	void setShippingAddress2(std::string  shippingAddress2);
	/*! \brief Get 
	 */
	std::string getShippingZip();

	/*! \brief Set 
	 */
	void setShippingZip(std::string  shippingZip);
	/*! \brief Get 
	 */
	std::string getShippingCity();

	/*! \brief Set 
	 */
	void setShippingCity(std::string  shippingCity);
	/*! \brief Get 
	 */
	std::string getShippingRegion();

	/*! \brief Set 
	 */
	void setShippingRegion(std::string  shippingRegion);
	/*! \brief Get 
	 */
	std::string getShippingPhone();

	/*! \brief Set 
	 */
	void setShippingPhone(std::string  shippingPhone);
	/*! \brief Get 
	 */
	std::string getShippingMobilePhone();

	/*! \brief Set 
	 */
	void setShippingMobilePhone(std::string  shippingMobilePhone);
	/*! \brief Get 
	 */
	std::string getShippingCareOf();

	/*! \brief Set 
	 */
	void setShippingCareOf(std::string  shippingCareOf);
	/*! \brief Get 
	 */
	std::string getPickupPoint();

	/*! \brief Set 
	 */
	void setPickupPoint(std::string  pickupPoint);
	/*! \brief Get 
	 */
	std::string getDesiredDeliveryDate();

	/*! \brief Set 
	 */
	void setDesiredDeliveryDate(std::string  desiredDeliveryDate);
	/*! \brief Get 
	 */
	Order.FreightClass getFreightClass();

	/*! \brief Set 
	 */
	void setFreightClass(Order.FreightClass  freightClass);
	/*! \brief Get 
	 */
	double getSum();

	/*! \brief Set 
	 */
	void setSum(double  sum);
	/*! \brief Get 
	 */
	double getExpectedSum();

	/*! \brief Set 
	 */
	void setExpectedSum(double  expectedSum);
	/*! \brief Get 
	 */
	double getOrderValueIncVat();

	/*! \brief Set 
	 */
	void setOrderValueIncVat(double  orderValueIncVat);
	/*! \brief Get 
	 */
	double getOrderValueExVat();

	/*! \brief Set 
	 */
	void setOrderValueExVat(double  orderValueExVat);
	/*! \brief Get 
	 */
	double getItemValueIncVat();

	/*! \brief Set 
	 */
	void setItemValueIncVat(double  itemValueIncVat);
	/*! \brief Get 
	 */
	double getItemValueExVat();

	/*! \brief Set 
	 */
	void setItemValueExVat(double  itemValueExVat);
	/*! \brief Get 
	 */
	double getDiscountIncVat();

	/*! \brief Set 
	 */
	void setDiscountIncVat(double  discountIncVat);
	/*! \brief Get 
	 */
	double getDiscountExVat();

	/*! \brief Set 
	 */
	void setDiscountExVat(double  discountExVat);
	/*! \brief Get 
	 */
	int getPercentDiscount();

	/*! \brief Set 
	 */
	void setPercentDiscount(int  percentDiscount);
	/*! \brief Get 
	 */
	double getBalance();

	/*! \brief Set 
	 */
	void setBalance(double  balance);
	/*! \brief Get 
	 */
	double getShippingFeeIncVat();

	/*! \brief Set 
	 */
	void setShippingFeeIncVat(double  shippingFeeIncVat);
	/*! \brief Get 
	 */
	double getShippingFeeExVat();

	/*! \brief Set 
	 */
	void setShippingFeeExVat(double  shippingFeeExVat);
	/*! \brief Get 
	 */
	double getPaymentFeeIncVat();

	/*! \brief Set 
	 */
	void setPaymentFeeIncVat(double  paymentFeeIncVat);
	/*! \brief Get 
	 */
	double getPaymentFeeExVat();

	/*! \brief Set 
	 */
	void setPaymentFeeExVat(double  paymentFeeExVat);


    private:
    std::string orderId{};
    std::string externalOrderId{};
    std::string cartId{};
    std::string sessionId{};
    int siteId{};
    std::string currency{};
    std::string status{};
    std::string ipAddress{};
    std::string message{};
    std::string internalMessage{};
    std::string locale{};
    std::list<Order.CheckoutOrderRow> rows;
    int campaignId{};
    std::string campaignCode{};
    std::string campaignName{};
    std::list<std::string> campaignIds;
    std::list<std::string> campaignNames;
    int customerId{};
    int customerTypeId{};
    int gender{};
    std::string dateOfBirth{};
    std::string personalId{};
    std::string userAgent{};
    Map<std::string, std::string> metaData;
    int paymentId{};
    std::string transactionId{};
    std::string secondaryTransactionId{};
    std::string country{};
    std::string company{};
    std::string organizationNumber{};
    std::string firstName{};
    std::string lastName{};
    std::string email{};
    std::string address1{};
    std::string address2{};
    std::string zip{};
    std::string city{};
    std::string region{};
    std::string phone{};
    std::string mobilePhone{};
    std::string careOf{};
    int shippingId{};
    std::string shippingCountry{};
    std::string shippingCompany{};
    std::string shippingOrganizationNumber{};
    std::string shippingFirstName{};
    std::string shippingLastName{};
    std::string shippingEmail{};
    std::string shippingAddress1{};
    std::string shippingAddress2{};
    std::string shippingZip{};
    std::string shippingCity{};
    std::string shippingRegion{};
    std::string shippingPhone{};
    std::string shippingMobilePhone{};
    std::string shippingCareOf{};
    std::string pickupPoint{};
    std::string desiredDeliveryDate{};
    Order.FreightClass freightClass;
    double sum{};
    double expectedSum{};
    double orderValueIncVat{};
    double orderValueExVat{};
    double itemValueIncVat{};
    double itemValueExVat{};
    double discountIncVat{};
    double discountExVat{};
    int percentDiscount{};
    double balance{};
    double shippingFeeIncVat{};
    double shippingFeeExVat{};
    double paymentFeeIncVat{};
    double paymentFeeExVat{};
};
}

#endif /* TINY_CPP_CLIENT_Order.CheckoutOrder_H_ */
