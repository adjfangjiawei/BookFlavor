#pragma once
#include <phonenumbers/phonemetadata.pb.h>
#include <phonenumbers/phonenumber.pb.h>
#include <phonenumbers/phonenumberutil.h>

inline auto getCarrier(const i18n::phonenumbers::PhoneNumber& phoneNumber) -> std::string { return "Carrier"; }