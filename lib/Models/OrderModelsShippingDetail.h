
/*
 * Order.Models.ShippingDetail.h
 *
 * Data carrier for a shipping detail
 */

#ifndef TINY_CPP_CLIENT_Order.Models.ShippingDetail_H_
#define TINY_CPP_CLIENT_Order.Models.ShippingDetail_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Data carrier for a shipping detail
 *
 *  \ingroup Models
 *
 */

class Order.Models.ShippingDetail{
public:

    /*! \brief Constructor.
	 */
    Order.Models.ShippingDetail();
    Order.Models.ShippingDetail(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.Models.ShippingDetail();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique identifier for this shipping detail
	 */
	int getId();

	/*! \brief Set Unique identifier for this shipping detail
	 */
	void setId(int  id);
	/*! \brief Get Id of the sipping method
	 */
	int getShippingId();

	/*! \brief Set Id of the sipping method
	 */
	void setShippingId(int  shippingId);
	/*! \brief Get Name of the shipping method
	 */
	std::string getName();

	/*! \brief Set Name of the shipping method
	 */
	void setName(std::string  name);
	/*! \brief Get Parcel number (tracking number)
	 */
	std::string getParcelNumber();

	/*! \brief Set Parcel number (tracking number)
	 */
	void setParcelNumber(std::string  parcelNumber);
	/*! \brief Get Shipping date
	 */
	std::string getShippingDate();

	/*! \brief Set Shipping date
	 */
	void setShippingDate(std::string  shippingDate);
	/*! \brief Get Tracking URL
	 */
	std::string getTrackingUrl();

	/*! \brief Set Tracking URL
	 */
	void setTrackingUrl(std::string  trackingUrl);
	/*! \brief Get Delivery option id of the external shipping provider
	 */
	std::string getExternalDeliveryOptionId();

	/*! \brief Set Delivery option id of the external shipping provider
	 */
	void setExternalDeliveryOptionId(std::string  externalDeliveryOptionId);
	/*! \brief Get Service id of the external shipping provider
	 */
	std::string getExternalServiceId();

	/*! \brief Set Service id of the external shipping provider
	 */
	void setExternalServiceId(std::string  externalServiceId);
	/*! \brief Get Carrier id of the external shipping provider
	 */
	std::string getExternalCarrierId();

	/*! \brief Set Carrier id of the external shipping provider
	 */
	void setExternalCarrierId(std::string  externalCarrierId);
	/*! \brief Get Pickup point
	 */
	std::string getPickupPoint();

	/*! \brief Set Pickup point
	 */
	void setPickupPoint(std::string  pickupPoint);


    private:
    int id{};
    int shippingId{};
    std::string name{};
    std::string parcelNumber{};
    std::string shippingDate{};
    std::string trackingUrl{};
    std::string externalDeliveryOptionId{};
    std::string externalServiceId{};
    std::string externalCarrierId{};
    std::string pickupPoint{};
};
}

#endif /* TINY_CPP_CLIENT_Order.Models.ShippingDetail_H_ */
