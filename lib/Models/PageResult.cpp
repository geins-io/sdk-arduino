

#include "PageResult.h"

using namespace Tiny;

PageResult::PageResult()
{
	batchId = std::string();
	page = int(0);
	rowCount = int(0);
	pageCount = int(0);
	pageSize = int(0);
	hasMoreRows = bool(false);
}

PageResult::PageResult(std::string jsonString)
{
	this->fromJson(jsonString);
}

PageResult::~PageResult()
{

}

void
PageResult::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *batchIdKey = "BatchId";

    if(object.has_key(batchIdKey))
    {
        bourne::json value = object[batchIdKey];



        jsonToValue(&batchId, value, "std::string");


    }

    const char *pageKey = "Page";

    if(object.has_key(pageKey))
    {
        bourne::json value = object[pageKey];



        jsonToValue(&page, value, "int");


    }

    const char *rowCountKey = "RowCount";

    if(object.has_key(rowCountKey))
    {
        bourne::json value = object[rowCountKey];



        jsonToValue(&rowCount, value, "int");


    }

    const char *pageCountKey = "PageCount";

    if(object.has_key(pageCountKey))
    {
        bourne::json value = object[pageCountKey];



        jsonToValue(&pageCount, value, "int");


    }

    const char *pageSizeKey = "PageSize";

    if(object.has_key(pageSizeKey))
    {
        bourne::json value = object[pageSizeKey];



        jsonToValue(&pageSize, value, "int");


    }

    const char *hasMoreRowsKey = "HasMoreRows";

    if(object.has_key(hasMoreRowsKey))
    {
        bourne::json value = object[hasMoreRowsKey];



        jsonToValue(&hasMoreRows, value, "bool");


    }


}

bourne::json
PageResult::toJson()
{
    bourne::json object = bourne::json::object();





    object["batchId"] = getBatchId();






    object["page"] = getPage();






    object["rowCount"] = getRowCount();






    object["pageCount"] = getPageCount();






    object["pageSize"] = getPageSize();






    object["hasMoreRows"] = isHasMoreRows();



    return object;

}

std::string
PageResult::getBatchId()
{
	return batchId;
}

void
PageResult::setBatchId(std::string  batchId)
{
	this->batchId = batchId;
}

int
PageResult::getPage()
{
	return page;
}

void
PageResult::setPage(int  page)
{
	this->page = page;
}

int
PageResult::getRowCount()
{
	return rowCount;
}

void
PageResult::setRowCount(int  rowCount)
{
	this->rowCount = rowCount;
}

int
PageResult::getPageCount()
{
	return pageCount;
}

void
PageResult::setPageCount(int  pageCount)
{
	this->pageCount = pageCount;
}

int
PageResult::getPageSize()
{
	return pageSize;
}

void
PageResult::setPageSize(int  pageSize)
{
	this->pageSize = pageSize;
}

bool
PageResult::isHasMoreRows()
{
	return hasMoreRows;
}

void
PageResult::setHasMoreRows(bool  hasMoreRows)
{
	this->hasMoreRows = hasMoreRows;
}



