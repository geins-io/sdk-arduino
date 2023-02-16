
/*
 * PageResult.h
 *
 * Contains pagination information for paged operations, i.e. PageSize and PageCount.
 */

#ifndef TINY_CPP_CLIENT_PageResult_H_
#define TINY_CPP_CLIENT_PageResult_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Contains pagination information for paged operations, i.e. PageSize and PageCount.
 *
 *  \ingroup Models
 *
 */

class PageResult{
public:

    /*! \brief Constructor.
	 */
    PageResult();
    PageResult(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PageResult();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the batch operation. If this property has a value for the first fetched page it has to be passed as a parameter for all subsequent requests-
	 */
	std::string getBatchId();

	/*! \brief Set The id of the batch operation. If this property has a value for the first fetched page it has to be passed as a parameter for all subsequent requests-
	 */
	void setBatchId(std::string  batchId);
	/*! \brief Get The current page
	 */
	int getPage();

	/*! \brief Set The current page
	 */
	void setPage(int  page);
	/*! \brief Get Total number of rows
	 */
	int getRowCount();

	/*! \brief Set Total number of rows
	 */
	void setRowCount(int  rowCount);
	/*! \brief Get Total number of pages
	 */
	int getPageCount();

	/*! \brief Set Total number of pages
	 */
	void setPageCount(int  pageCount);
	/*! \brief Get Page size
	 */
	int getPageSize();

	/*! \brief Set Page size
	 */
	void setPageSize(int  pageSize);
	/*! \brief Get True if there is more content to fetch.
	 */
	bool isHasMoreRows();

	/*! \brief Set True if there is more content to fetch.
	 */
	void setHasMoreRows(bool  hasMoreRows);


    private:
    std::string batchId{};
    int page{};
    int rowCount{};
    int pageCount{};
    int pageSize{};
    bool hasMoreRows{};
};
}

#endif /* TINY_CPP_CLIENT_PageResult_H_ */
