
/*
 * Shipping.Models.ParcelGroupOptions.h
 *
 * Creation options for new parcel groups.
 */

#ifndef TINY_CPP_CLIENT_Shipping.Models.ParcelGroupOptions_H_
#define TINY_CPP_CLIENT_Shipping.Models.ParcelGroupOptions_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Creation options for new parcel groups.
 *
 *  \ingroup Models
 *
 */

class Shipping.Models.ParcelGroupOptions{
public:

    /*! \brief Constructor.
	 */
    Shipping.Models.ParcelGroupOptions();
    Shipping.Models.ParcelGroupOptions(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Shipping.Models.ParcelGroupOptions();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The order ids contained in this parcel group.
	 */
	std::list<int> getOrderIds();

	/*! \brief Set The order ids contained in this parcel group.
	 */
	void setOrderIds(std::list <int> orderIds);
	/*! \brief Get Set to true to also automatically mark orders as delivered upon creation of the parcel group.
	 */
	bool isMarkAsDelivered();

	/*! \brief Set Set to true to also automatically mark orders as delivered upon creation of the parcel group.
	 */
	void setMarkAsDelivered(bool  markAsDelivered);
	/*! \brief Get Set to true to also automatically signal capture events upon creation of the parcel group.
	 */
	bool isSignalCapturesCreated();

	/*! \brief Set Set to true to also automatically signal capture events upon creation of the parcel group.
	 */
	void setSignalCapturesCreated(bool  signalCapturesCreated);


    private:
    std::list<int> orderIds;
    bool markAsDelivered{};
    bool signalCapturesCreated{};
};
}

#endif /* TINY_CPP_CLIENT_Shipping.Models.ParcelGroupOptions_H_ */
