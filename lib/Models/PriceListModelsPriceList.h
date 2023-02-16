
/*
 * PriceList.Models.PriceList.h
 *
 * A price list definition.
 */

#ifndef TINY_CPP_CLIENT_PriceList.Models.PriceList_H_
#define TINY_CPP_CLIENT_PriceList.Models.PriceList_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A price list definition.
 *
 *  \ingroup Models
 *
 */

class PriceList.Models.PriceList{
public:

    /*! \brief Constructor.
	 */
    PriceList.Models.PriceList();
    PriceList.Models.PriceList(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PriceList.Models.PriceList();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Price list id.
	 */
	int getId();

	/*! \brief Set Price list id.
	 */
	void setId(int  id);
	/*! \brief Get Price list name.
	 */
	std::string getName();

	/*! \brief Set Price list name.
	 */
	void setName(std::string  name);
	/*! \brief Get Market id.
	 */
	int getMarketId();

	/*! \brief Set Market id.
	 */
	void setMarketId(int  marketId);
	/*! \brief Get Market prefix.  <example>Eg: SE</example>
	 */
	std::string getMarketPrefix();

	/*! \brief Set Market prefix.  <example>Eg: SE</example>
	 */
	void setMarketPrefix(std::string  marketPrefix);
	/*! \brief Get Currency abbreviation.  <example>Eg: SEK</example>
	 */
	std::string getCurrency();

	/*! \brief Set Currency abbreviation.  <example>Eg: SEK</example>
	 */
	void setCurrency(std::string  currency);


    private:
    int id{};
    std::string name{};
    int marketId{};
    std::string marketPrefix{};
    std::string currency{};
};
}

#endif /* TINY_CPP_CLIENT_PriceList.Models.PriceList_H_ */
