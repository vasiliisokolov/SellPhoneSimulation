cmake_minimum_required (VERSION 3.8)

add_executable (SellPhoneSimulation "SellPhoneSimulation.cpp" "${MY_INCLUDE_DIR}/SellPhoneSimulation.h" "Contact.cpp" "Phone.cpp" "${MY_INCLUDE_DIR}/Contact.h" "${MY_INCLUDE_DIR}/Phone.h")
target_include_directories(SellPhoneSimulation PUBLIC ${MY_INCLUDE_DIR})