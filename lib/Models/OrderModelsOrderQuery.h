
/*
 * Order.Models.OrderQuery.h
 *
 * Data carrying class for order queries
 */

#ifndef TINY_CPP_CLIENT_Order.Models.OrderQuery_H_
#define TINY_CPP_CLIENT_Order.Models.OrderQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrying class for order queries
 *
 *  \ingroup Models
 *
 */

class Order.Models.OrderQuery{
public:

    /*! \brief Constructor.
	 */
    Order.Models.OrderQuery();
    Order.Models.OrderQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.OrderQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Given a date, only orders updated after the provided date will be returned.
	 */
	std::string getUpdated();

	/*! \brief Set Given a date, only orders updated after the provided date will be returned.
	 */
	void setUpdated(std::string  updated);
	/*! \brief Get Comma separated list of statuses to filter on.
	 */
	std::string getStatusList();

	/*! \brief Set Comma separated list of statuses to filter on.
	 */
	void setStatusList(std::string  statusList);
	/*! \brief Get Id of a market.
	 */
	int getMarketId();

	/*! \brief Set Id of a market.
	 */
	void setMarketId(int  marketId);
	/*! \brief Get Name of a payment method
	 */
	std::string getPaymentName();

	/*! \brief Set Name of a payment method
	 */
	void setPaymentName(std::string  paymentName);
	/*! \brief Get Id of a parcel group.
	 */
	int getParcelGroupId();

	/*! \brief Set Id of a parcel group.
	 */
	void setParcelGroupId(int  parcelGroupId);
	/*! \brief Get The ID of a customer
	 */
	int getCustomerId();

	/*! \brief Set The ID of a customer
	 */
	void setCustomerId(int  customerId);
	/*! \brief Get The email of a customer
	 */
	std::string getEmail();

	/*! \brief Set The email of a customer
	 */
	void setEmail(std::string  email);
	/*! \brief Get Comma separated list of child-collections to also include in the query result.
	 */
	std::string getInclude();

	/*! \brief Set Comma separated list of child-collections to also include in the query result.
	 */
	void setInclude(std::string  include);
	/*! \brief Get This status can be used by external systems to change the status of an order. Such as failed or done.
	 */
	int getExternalOrderStatus();

	/*! \brief Set This status can be used by external systems to change the status of an order. Such as failed or done.
	 */
	void setExternalOrderStatus(int  externalOrderStatus);
	/*! \brief Get If true, will combine all order rows that are part of a container into a single container row.
	 */
	bool isCombineProductContainerRows();

	/*! \brief Set If true, will combine all order rows that are part of a container into a single container row.
	 */
	void setCombineProductContainerRows(bool  combineProductContainerRows);
	/*! \brief Get The packing place to get orders from.
	 */
	int getPackingLocationId();

	/*! \brief Set The packing place to get orders from.
	 */
	void setPackingLocationId(int  packingLocationId);


    private:
    std::string updated{};
    std::string statusList{};
    int marketId{};
    std::string paymentName{};
    int parcelGroupId{};
    int customerId{};
    std::string email{};
    std::string include{};
    int externalOrderStatus{};
    bool combineProductContainerRows{};
    int packingLocationId{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.OrderQuery_H_ */
