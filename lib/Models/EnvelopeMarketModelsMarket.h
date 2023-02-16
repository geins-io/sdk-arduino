
/*
 * Envelope-Market.Models.Market.h
 *
 * An envelope for the result of and action taken on a resource.
 */

#ifndef TINY_CPP_CLIENT_Envelope-Market.Models.Market_H_
#define TINY_CPP_CLIENT_Envelope-Market.Models.Market_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Market.Models.Market.h"
#include "PageResult.h"
#include <list>

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a resource.
 *
 *  \ingroup Models
 *
 */

class Envelope-Market.Models.Market{
public:

    /*! \brief Constructor.
	 */
    Envelope-Market.Models.Market();
    Envelope-Market.Models.Market(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Envelope-Market.Models.Market();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A status message for the action taken.
	 */
	std::string getMessage();

	/*! \brief Set A status message for the action taken.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Any validation messages for the data on the current action.
	 */
	std::list<std::string> getDetails();

	/*! \brief Set Any validation messages for the data on the current action.
	 */
	void setDetails(std::list <std::string> details);
	/*! \brief Get 
	 */
	Market.Models.Market getResource();

	/*! \brief Set 
	 */
	void setResource(Market.Models.Market  resource);
	/*! \brief Get 
	 */
	PageResult getPageResult();

	/*! \brief Set 
	 */
	void setPageResult(PageResult  pageResult);


    private:
    std::string message{};
    std::list<std::string> details;
    Market.Models.Market resource;
    PageResult pageResult;
};
}

#endif /* TINY_CPP_CLIENT_Envelope-Market.Models.Market_H_ */
