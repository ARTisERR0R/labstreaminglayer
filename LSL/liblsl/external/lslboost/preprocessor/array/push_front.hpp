# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.lslboost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.lslboost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_ARRAY_PUSH_FRONT_HPP
# define BOOST_PREPROCESSOR_ARRAY_PUSH_FRONT_HPP
#
# include <lslboost/preprocessor/arithmetic/inc.hpp>
# include <lslboost/preprocessor/array/data.hpp>
# include <lslboost/preprocessor/array/size.hpp>
# include <lslboost/preprocessor/config/config.hpp>
# include <lslboost/preprocessor/punctuation/comma_if.hpp>
# include <lslboost/preprocessor/tuple/rem.hpp>
#
# /* BOOST_PP_ARRAY_PUSH_FRONT */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_ARRAY_PUSH_FRONT(array, elem) BOOST_PP_ARRAY_PUSH_FRONT_I(BOOST_PP_ARRAY_SIZE(array), BOOST_PP_ARRAY_DATA(array), elem)
# else
#    define BOOST_PP_ARRAY_PUSH_FRONT(array, elem) BOOST_PP_ARRAY_PUSH_FRONT_D(array, elem)
#    define BOOST_PP_ARRAY_PUSH_FRONT_D(array, elem) BOOST_PP_ARRAY_PUSH_FRONT_I(BOOST_PP_ARRAY_SIZE(array), BOOST_PP_ARRAY_DATA(array), elem)
# endif
#
# define BOOST_PP_ARRAY_PUSH_FRONT_I(size, data, elem) (BOOST_PP_INC(size), (elem BOOST_PP_COMMA_IF(size) BOOST_PP_TUPLE_REM(size) data))
#
# endif