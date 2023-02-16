
/*
 * PriceList.Models.PriceListPriceResponse.h
 *
 * The response of a PriceListPrice request.
 */

#ifndef TINY_CPP_CLIENT_PriceList.Models.PriceListPriceResponse_H_
#define TINY_CPP_CLIENT_PriceList.Models.PriceListPriceResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PriceList.Models.Write.PriceListPrice.h"
#include <list>

namespace Tiny {


/*! \brief The response of a PriceListPrice request.
 *
 *  \ingroup Models
 *
 */

class PriceList.Models.PriceListPriceResponse{
public:

    /*! \brief Constructor.
	 */
    PriceList.Models.PriceListPriceResponse();
    PriceList.Models.PriceListPriceResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PriceList.Models.PriceListPriceResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Information about the outcome of the request.
	 */
	std::string getMessage();

	/*! \brief Set Information about the outcome of the request.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Supplied PriceList prices that failed validation.
	 */
	std::list<PriceList.Models.Write.PriceListPrice> getInvalid();

	/*! \brief Set Supplied PriceList prices that failed validation.
	 */
	void setInvalid(std::list <PriceList.Models.Write.PriceListPrice> invalid);
	/*! \brief Get Supplied PriceList prices that were technically valid, but couldn't be found.
	 */
	std::list<PriceList.Models.Write.PriceListPrice> getNotFound();

	/*! \brief Set Supplied PriceList prices that were technically valid, but couldn't be found.
	 */
	void setNotFound(std::list <PriceList.Models.Write.PriceListPrice> notFound);
	/*! \brief Get Number of price updates resulting from the request.
	 */
	int getUpdateCount();

	/*! \brief Set Number of price updates resulting from the request.
	 */
	void setUpdateCount(int  updateCount);


    private:
    std::string message{};
    std::list<PriceList.Models.Write.PriceListPrice> invalid;
    std::list<PriceList.Models.Write.PriceListPrice> notFound;
    int updateCount{};
};
}

#endif /* TINY_CPP_CLIENT_PriceList.Models.PriceListPriceResponse_H_ */
