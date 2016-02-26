// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_RESOURCE_NOT_FOUND_EXCEPTION_H_
#define __DCW_RESOURCE_NOT_FOUND_EXCEPTION_H_

#include <iostream>
#include <exception>

//! ResourceNotFoundException
/*!
 * This is an exception raised when a resource is not found in the system
 */
class ResourceNotFoundException: public std::exception {
    /*!
     * @see std::exception::what
     */
    virtual const char* what() const throw() {
        return "Failed to load resource!";
    }
} ResourceNotFoundException;

#endif  // __DCW_RESOURCE_NOT_FOUND_EXCEPTION_H_
