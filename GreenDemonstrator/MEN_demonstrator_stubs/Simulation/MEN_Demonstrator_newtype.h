#ifndef MEN_DEMONSTRATOR_TYPES_CONVERSION
#define MEN_DEMONSTRATOR_TYPES_CONVERSION

#include "NewSmuTypes.h"

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_real_string(const char *str, char **endptr);
extern int string_to_kcg_real(const char *str, void *pValue, char **endptr);
extern int is_kcg_real_allow_double_conversion();
extern int kcg_real_to_double(const void *pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_real_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_allow_double_conversion();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_allow_double_conversion();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_kcg_int_string(const char *str, char **endptr);
extern int string_to_kcg_int(const char *str, void *pValue, char **endptr);
extern int is_kcg_int_allow_double_conversion();
extern int kcg_int_to_double(const void *pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_kcg_int_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** struct__18877 
 ****************************************************************/
extern int struct__18877_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18877_string(const char *str, char **endptr);
extern int string_to_struct__18877(const char *str, void *pValue, char **endptr);
extern int is_struct__18877_allow_double_conversion();
extern int struct__18877_to_double(const void *pValue, double *nValue);
extern int get_struct__18877_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18877(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18877_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18877_Utils;

/****************************************************************
 ** struct__18898 
 ****************************************************************/
extern int struct__18898_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18898_string(const char *str, char **endptr);
extern int string_to_struct__18898(const char *str, void *pValue, char **endptr);
extern int is_struct__18898_allow_double_conversion();
extern int struct__18898_to_double(const void *pValue, double *nValue);
extern int get_struct__18898_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18898(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18898_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18898_Utils;

/****************************************************************
 ** struct__18918 
 ****************************************************************/
extern int struct__18918_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18918_string(const char *str, char **endptr);
extern int string_to_struct__18918(const char *str, void *pValue, char **endptr);
extern int is_struct__18918_allow_double_conversion();
extern int struct__18918_to_double(const void *pValue, double *nValue);
extern int get_struct__18918_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18918(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18918_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18918_Utils;

/****************************************************************
 ** struct__18925 
 ****************************************************************/
extern int struct__18925_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18925_string(const char *str, char **endptr);
extern int string_to_struct__18925(const char *str, void *pValue, char **endptr);
extern int is_struct__18925_allow_double_conversion();
extern int struct__18925_to_double(const void *pValue, double *nValue);
extern int get_struct__18925_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18925(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18925_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18925_Utils;

/****************************************************************
 ** struct__18932 
 ****************************************************************/
extern int struct__18932_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18932_string(const char *str, char **endptr);
extern int string_to_struct__18932(const char *str, void *pValue, char **endptr);
extern int is_struct__18932_allow_double_conversion();
extern int struct__18932_to_double(const void *pValue, double *nValue);
extern int get_struct__18932_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18932(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18932_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18932_Utils;

/****************************************************************
 ** array__18937 
 ****************************************************************/
extern int array__18937_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18937_string(const char *str, char **endptr);
extern int string_to_array__18937(const char *str, void *pValue, char **endptr);
extern int is_array__18937_allow_double_conversion();
extern int array__18937_to_double(const void *pValue, double *nValue);
extern int get_array__18937_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18937(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18937_default_value(void *pValue);
extern SimTypeUtils _Type_array__18937_Utils;

/****************************************************************
 ** struct__18940 
 ****************************************************************/
extern int struct__18940_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18940_string(const char *str, char **endptr);
extern int string_to_struct__18940(const char *str, void *pValue, char **endptr);
extern int is_struct__18940_allow_double_conversion();
extern int struct__18940_to_double(const void *pValue, double *nValue);
extern int get_struct__18940_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18940(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18940_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18940_Utils;

/****************************************************************
 ** struct__18967 
 ****************************************************************/
extern int struct__18967_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18967_string(const char *str, char **endptr);
extern int string_to_struct__18967(const char *str, void *pValue, char **endptr);
extern int is_struct__18967_allow_double_conversion();
extern int struct__18967_to_double(const void *pValue, double *nValue);
extern int get_struct__18967_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18967(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18967_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18967_Utils;

/****************************************************************
 ** array__18973 
 ****************************************************************/
extern int array__18973_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18973_string(const char *str, char **endptr);
extern int string_to_array__18973(const char *str, void *pValue, char **endptr);
extern int is_array__18973_allow_double_conversion();
extern int array__18973_to_double(const void *pValue, double *nValue);
extern int get_array__18973_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18973(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18973_default_value(void *pValue);
extern SimTypeUtils _Type_array__18973_Utils;

/****************************************************************
 ** struct__18976 
 ****************************************************************/
extern int struct__18976_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18976_string(const char *str, char **endptr);
extern int string_to_struct__18976(const char *str, void *pValue, char **endptr);
extern int is_struct__18976_allow_double_conversion();
extern int struct__18976_to_double(const void *pValue, double *nValue);
extern int get_struct__18976_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18976(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18976_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18976_Utils;

/****************************************************************
 ** array__18985 
 ****************************************************************/
extern int array__18985_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__18985_string(const char *str, char **endptr);
extern int string_to_array__18985(const char *str, void *pValue, char **endptr);
extern int is_array__18985_allow_double_conversion();
extern int array__18985_to_double(const void *pValue, double *nValue);
extern int get_array__18985_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__18985(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__18985_default_value(void *pValue);
extern SimTypeUtils _Type_array__18985_Utils;

/****************************************************************
 ** struct__18988 
 ****************************************************************/
extern int struct__18988_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18988_string(const char *str, char **endptr);
extern int string_to_struct__18988(const char *str, void *pValue, char **endptr);
extern int is_struct__18988_allow_double_conversion();
extern int struct__18988_to_double(const void *pValue, double *nValue);
extern int get_struct__18988_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18988(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18988_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18988_Utils;

/****************************************************************
 ** array_int_500 
 ****************************************************************/
extern int array_int_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_string(const char *str, char **endptr);
extern int string_to_array_int_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_allow_double_conversion();
extern int array_int_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_Utils;

/****************************************************************
 ** struct__18998 
 ****************************************************************/
extern int struct__18998_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__18998_string(const char *str, char **endptr);
extern int string_to_struct__18998(const char *str, void *pValue, char **endptr);
extern int is_struct__18998_allow_double_conversion();
extern int struct__18998_to_double(const void *pValue, double *nValue);
extern int get_struct__18998_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__18998(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__18998_default_value(void *pValue);
extern SimTypeUtils _Type_struct__18998_Utils;

/****************************************************************
 ** array__19006 
 ****************************************************************/
extern int array__19006_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19006_string(const char *str, char **endptr);
extern int string_to_array__19006(const char *str, void *pValue, char **endptr);
extern int is_array__19006_allow_double_conversion();
extern int array__19006_to_double(const void *pValue, double *nValue);
extern int get_array__19006_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19006(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19006_default_value(void *pValue);
extern SimTypeUtils _Type_array__19006_Utils;

/****************************************************************
 ** struct__19009 
 ****************************************************************/
extern int struct__19009_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19009_string(const char *str, char **endptr);
extern int string_to_struct__19009(const char *str, void *pValue, char **endptr);
extern int is_struct__19009_allow_double_conversion();
extern int struct__19009_to_double(const void *pValue, double *nValue);
extern int get_struct__19009_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19009(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19009_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19009_Utils;

/****************************************************************
 ** struct__19014 
 ****************************************************************/
extern int struct__19014_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19014_string(const char *str, char **endptr);
extern int string_to_struct__19014(const char *str, void *pValue, char **endptr);
extern int is_struct__19014_allow_double_conversion();
extern int struct__19014_to_double(const void *pValue, double *nValue);
extern int get_struct__19014_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19014(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19014_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19014_Utils;

/****************************************************************
 ** struct__19027 
 ****************************************************************/
extern int struct__19027_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19027_string(const char *str, char **endptr);
extern int string_to_struct__19027(const char *str, void *pValue, char **endptr);
extern int is_struct__19027_allow_double_conversion();
extern int struct__19027_to_double(const void *pValue, double *nValue);
extern int get_struct__19027_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19027(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19027_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19027_Utils;

/****************************************************************
 ** struct__19032 
 ****************************************************************/
extern int struct__19032_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19032_string(const char *str, char **endptr);
extern int string_to_struct__19032(const char *str, void *pValue, char **endptr);
extern int is_struct__19032_allow_double_conversion();
extern int struct__19032_to_double(const void *pValue, double *nValue);
extern int get_struct__19032_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19032(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19032_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19032_Utils;

/****************************************************************
 ** array__19043 
 ****************************************************************/
extern int array__19043_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19043_string(const char *str, char **endptr);
extern int string_to_array__19043(const char *str, void *pValue, char **endptr);
extern int is_array__19043_allow_double_conversion();
extern int array__19043_to_double(const void *pValue, double *nValue);
extern int get_array__19043_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19043(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19043_default_value(void *pValue);
extern SimTypeUtils _Type_array__19043_Utils;

/****************************************************************
 ** struct__19046 
 ****************************************************************/
extern int struct__19046_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19046_string(const char *str, char **endptr);
extern int string_to_struct__19046(const char *str, void *pValue, char **endptr);
extern int is_struct__19046_allow_double_conversion();
extern int struct__19046_to_double(const void *pValue, double *nValue);
extern int get_struct__19046_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19046(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19046_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19046_Utils;

/****************************************************************
 ** struct__19055 
 ****************************************************************/
extern int struct__19055_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19055_string(const char *str, char **endptr);
extern int string_to_struct__19055(const char *str, void *pValue, char **endptr);
extern int is_struct__19055_allow_double_conversion();
extern int struct__19055_to_double(const void *pValue, double *nValue);
extern int get_struct__19055_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19055(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19055_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19055_Utils;

/****************************************************************
 ** array__19062 
 ****************************************************************/
extern int array__19062_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19062_string(const char *str, char **endptr);
extern int string_to_array__19062(const char *str, void *pValue, char **endptr);
extern int is_array__19062_allow_double_conversion();
extern int array__19062_to_double(const void *pValue, double *nValue);
extern int get_array__19062_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19062(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19062_default_value(void *pValue);
extern SimTypeUtils _Type_array__19062_Utils;

/****************************************************************
 ** struct__19065 
 ****************************************************************/
extern int struct__19065_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19065_string(const char *str, char **endptr);
extern int string_to_struct__19065(const char *str, void *pValue, char **endptr);
extern int is_struct__19065_allow_double_conversion();
extern int struct__19065_to_double(const void *pValue, double *nValue);
extern int get_struct__19065_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19065(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19065_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19065_Utils;

/****************************************************************
 ** struct__19074 
 ****************************************************************/
extern int struct__19074_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19074_string(const char *str, char **endptr);
extern int string_to_struct__19074(const char *str, void *pValue, char **endptr);
extern int is_struct__19074_allow_double_conversion();
extern int struct__19074_to_double(const void *pValue, double *nValue);
extern int get_struct__19074_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19074(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19074_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19074_Utils;

/****************************************************************
 ** array__19081 
 ****************************************************************/
extern int array__19081_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19081_string(const char *str, char **endptr);
extern int string_to_array__19081(const char *str, void *pValue, char **endptr);
extern int is_array__19081_allow_double_conversion();
extern int array__19081_to_double(const void *pValue, double *nValue);
extern int get_array__19081_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19081(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19081_default_value(void *pValue);
extern SimTypeUtils _Type_array__19081_Utils;

/****************************************************************
 ** struct__19084 
 ****************************************************************/
extern int struct__19084_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19084_string(const char *str, char **endptr);
extern int string_to_struct__19084(const char *str, void *pValue, char **endptr);
extern int is_struct__19084_allow_double_conversion();
extern int struct__19084_to_double(const void *pValue, double *nValue);
extern int get_struct__19084_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19084(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19084_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19084_Utils;

/****************************************************************
 ** struct__19092 
 ****************************************************************/
extern int struct__19092_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19092_string(const char *str, char **endptr);
extern int string_to_struct__19092(const char *str, void *pValue, char **endptr);
extern int is_struct__19092_allow_double_conversion();
extern int struct__19092_to_double(const void *pValue, double *nValue);
extern int get_struct__19092_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19092(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19092_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19092_Utils;

/****************************************************************
 ** array__19100 
 ****************************************************************/
extern int array__19100_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19100_string(const char *str, char **endptr);
extern int string_to_array__19100(const char *str, void *pValue, char **endptr);
extern int is_array__19100_allow_double_conversion();
extern int array__19100_to_double(const void *pValue, double *nValue);
extern int get_array__19100_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19100(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19100_default_value(void *pValue);
extern SimTypeUtils _Type_array__19100_Utils;

/****************************************************************
 ** struct__19103 
 ****************************************************************/
extern int struct__19103_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19103_string(const char *str, char **endptr);
extern int string_to_struct__19103(const char *str, void *pValue, char **endptr);
extern int is_struct__19103_allow_double_conversion();
extern int struct__19103_to_double(const void *pValue, double *nValue);
extern int get_struct__19103_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19103(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19103_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19103_Utils;

/****************************************************************
 ** struct__19128 
 ****************************************************************/
extern int struct__19128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19128_string(const char *str, char **endptr);
extern int string_to_struct__19128(const char *str, void *pValue, char **endptr);
extern int is_struct__19128_allow_double_conversion();
extern int struct__19128_to_double(const void *pValue, double *nValue);
extern int get_struct__19128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19128_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19128_Utils;

/****************************************************************
 ** array_int_50 
 ****************************************************************/
extern int array_int_50_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_50_string(const char *str, char **endptr);
extern int string_to_array_int_50(const char *str, void *pValue, char **endptr);
extern int is_array_int_50_allow_double_conversion();
extern int array_int_50_to_double(const void *pValue, double *nValue);
extern int get_array_int_50_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_50(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_50_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_50_Utils;

/****************************************************************
 ** struct__19146 
 ****************************************************************/
extern int struct__19146_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19146_string(const char *str, char **endptr);
extern int string_to_struct__19146(const char *str, void *pValue, char **endptr);
extern int is_struct__19146_allow_double_conversion();
extern int struct__19146_to_double(const void *pValue, double *nValue);
extern int get_struct__19146_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19146(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19146_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19146_Utils;

/****************************************************************
 ** struct__19157 
 ****************************************************************/
extern int struct__19157_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19157_string(const char *str, char **endptr);
extern int string_to_struct__19157(const char *str, void *pValue, char **endptr);
extern int is_struct__19157_allow_double_conversion();
extern int struct__19157_to_double(const void *pValue, double *nValue);
extern int get_struct__19157_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19157(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19157_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19157_Utils;

/****************************************************************
 ** struct__19162 
 ****************************************************************/
extern int struct__19162_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19162_string(const char *str, char **endptr);
extern int string_to_struct__19162(const char *str, void *pValue, char **endptr);
extern int is_struct__19162_allow_double_conversion();
extern int struct__19162_to_double(const void *pValue, double *nValue);
extern int get_struct__19162_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19162(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19162_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19162_Utils;

/****************************************************************
 ** struct__19171 
 ****************************************************************/
extern int struct__19171_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19171_string(const char *str, char **endptr);
extern int string_to_struct__19171(const char *str, void *pValue, char **endptr);
extern int is_struct__19171_allow_double_conversion();
extern int struct__19171_to_double(const void *pValue, double *nValue);
extern int get_struct__19171_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19171(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19171_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19171_Utils;

/****************************************************************
 ** array_int_1 
 ****************************************************************/
extern int array_int_1_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_1_string(const char *str, char **endptr);
extern int string_to_array_int_1(const char *str, void *pValue, char **endptr);
extern int is_array_int_1_allow_double_conversion();
extern int array_int_1_to_double(const void *pValue, double *nValue);
extern int get_array_int_1_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_1(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_1_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_1_Utils;

/****************************************************************
 ** struct__19183 
 ****************************************************************/
extern int struct__19183_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19183_string(const char *str, char **endptr);
extern int string_to_struct__19183(const char *str, void *pValue, char **endptr);
extern int is_struct__19183_allow_double_conversion();
extern int struct__19183_to_double(const void *pValue, double *nValue);
extern int get_struct__19183_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19183(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19183_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19183_Utils;

/****************************************************************
 ** array_int_25 
 ****************************************************************/
extern int array_int_25_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_25_string(const char *str, char **endptr);
extern int string_to_array_int_25(const char *str, void *pValue, char **endptr);
extern int is_array_int_25_allow_double_conversion();
extern int array_int_25_to_double(const void *pValue, double *nValue);
extern int get_array_int_25_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_25(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_25_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_25_Utils;

/****************************************************************
 ** array_int_3 
 ****************************************************************/
extern int array_int_3_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_string(const char *str, char **endptr);
extern int string_to_array_int_3(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_allow_double_conversion();
extern int array_int_3_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_Utils;

/****************************************************************
 ** array_int_17 
 ****************************************************************/
extern int array_int_17_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_17_string(const char *str, char **endptr);
extern int string_to_array_int_17(const char *str, void *pValue, char **endptr);
extern int is_array_int_17_allow_double_conversion();
extern int array_int_17_to_double(const void *pValue, double *nValue);
extern int get_array_int_17_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_17(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_17_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_17_Utils;

/****************************************************************
 ** struct__19200 
 ****************************************************************/
extern int struct__19200_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19200_string(const char *str, char **endptr);
extern int string_to_struct__19200(const char *str, void *pValue, char **endptr);
extern int is_struct__19200_allow_double_conversion();
extern int struct__19200_to_double(const void *pValue, double *nValue);
extern int get_struct__19200_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19200(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19200_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19200_Utils;

/****************************************************************
 ** struct__19206 
 ****************************************************************/
extern int struct__19206_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19206_string(const char *str, char **endptr);
extern int string_to_struct__19206(const char *str, void *pValue, char **endptr);
extern int is_struct__19206_allow_double_conversion();
extern int struct__19206_to_double(const void *pValue, double *nValue);
extern int get_struct__19206_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19206(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19206_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19206_Utils;

/****************************************************************
 ** struct__19211 
 ****************************************************************/
extern int struct__19211_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19211_string(const char *str, char **endptr);
extern int string_to_struct__19211(const char *str, void *pValue, char **endptr);
extern int is_struct__19211_allow_double_conversion();
extern int struct__19211_to_double(const void *pValue, double *nValue);
extern int get_struct__19211_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19211(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19211_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19211_Utils;

/****************************************************************
 ** struct__19219 
 ****************************************************************/
extern int struct__19219_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19219_string(const char *str, char **endptr);
extern int string_to_struct__19219(const char *str, void *pValue, char **endptr);
extern int is_struct__19219_allow_double_conversion();
extern int struct__19219_to_double(const void *pValue, double *nValue);
extern int get_struct__19219_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19219(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19219_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19219_Utils;

/****************************************************************
 ** struct__19228 
 ****************************************************************/
extern int struct__19228_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19228_string(const char *str, char **endptr);
extern int string_to_struct__19228(const char *str, void *pValue, char **endptr);
extern int is_struct__19228_allow_double_conversion();
extern int struct__19228_to_double(const void *pValue, double *nValue);
extern int get_struct__19228_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19228(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19228_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19228_Utils;

/****************************************************************
 ** struct__19236 
 ****************************************************************/
extern int struct__19236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19236_string(const char *str, char **endptr);
extern int string_to_struct__19236(const char *str, void *pValue, char **endptr);
extern int is_struct__19236_allow_double_conversion();
extern int struct__19236_to_double(const void *pValue, double *nValue);
extern int get_struct__19236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19236(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19236_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19236_Utils;

/****************************************************************
 ** struct__19241 
 ****************************************************************/
extern int struct__19241_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19241_string(const char *str, char **endptr);
extern int string_to_struct__19241(const char *str, void *pValue, char **endptr);
extern int is_struct__19241_allow_double_conversion();
extern int struct__19241_to_double(const void *pValue, double *nValue);
extern int get_struct__19241_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19241(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19241_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19241_Utils;

/****************************************************************
 ** struct__19248 
 ****************************************************************/
extern int struct__19248_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19248_string(const char *str, char **endptr);
extern int string_to_struct__19248(const char *str, void *pValue, char **endptr);
extern int is_struct__19248_allow_double_conversion();
extern int struct__19248_to_double(const void *pValue, double *nValue);
extern int get_struct__19248_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19248(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19248_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19248_Utils;

/****************************************************************
 ** struct__19257 
 ****************************************************************/
extern int struct__19257_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19257_string(const char *str, char **endptr);
extern int string_to_struct__19257(const char *str, void *pValue, char **endptr);
extern int is_struct__19257_allow_double_conversion();
extern int struct__19257_to_double(const void *pValue, double *nValue);
extern int get_struct__19257_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19257(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19257_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19257_Utils;

/****************************************************************
 ** array__19264 
 ****************************************************************/
extern int array__19264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19264_string(const char *str, char **endptr);
extern int string_to_array__19264(const char *str, void *pValue, char **endptr);
extern int is_array__19264_allow_double_conversion();
extern int array__19264_to_double(const void *pValue, double *nValue);
extern int get_array__19264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19264(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19264_default_value(void *pValue);
extern SimTypeUtils _Type_array__19264_Utils;

/****************************************************************
 ** struct__19267 
 ****************************************************************/
extern int struct__19267_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19267_string(const char *str, char **endptr);
extern int string_to_struct__19267(const char *str, void *pValue, char **endptr);
extern int is_struct__19267_allow_double_conversion();
extern int struct__19267_to_double(const void *pValue, double *nValue);
extern int get_struct__19267_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19267(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19267_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19267_Utils;

/****************************************************************
 ** array_int_4 
 ****************************************************************/
extern int array_int_4_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_string(const char *str, char **endptr);
extern int string_to_array_int_4(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_allow_double_conversion();
extern int array_int_4_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_Utils;

/****************************************************************
 ** array_int_4_32 
 ****************************************************************/
extern int array_int_4_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_32_string(const char *str, char **endptr);
extern int string_to_array_int_4_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_32_allow_double_conversion();
extern int array_int_4_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_32_Utils;

/****************************************************************
 ** array_int_128 
 ****************************************************************/
extern int array_int_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_128_string(const char *str, char **endptr);
extern int string_to_array_int_128(const char *str, void *pValue, char **endptr);
extern int is_array_int_128_allow_double_conversion();
extern int array_int_128_to_double(const void *pValue, double *nValue);
extern int get_array_int_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_128_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_128_Utils;

/****************************************************************
 ** struct__19303 
 ****************************************************************/
extern int struct__19303_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19303_string(const char *str, char **endptr);
extern int string_to_struct__19303(const char *str, void *pValue, char **endptr);
extern int is_struct__19303_allow_double_conversion();
extern int struct__19303_to_double(const void *pValue, double *nValue);
extern int get_struct__19303_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19303(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19303_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19303_Utils;

/****************************************************************
 ** struct__19316 
 ****************************************************************/
extern int struct__19316_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19316_string(const char *str, char **endptr);
extern int string_to_struct__19316(const char *str, void *pValue, char **endptr);
extern int is_struct__19316_allow_double_conversion();
extern int struct__19316_to_double(const void *pValue, double *nValue);
extern int get_struct__19316_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19316(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19316_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19316_Utils;

/****************************************************************
 ** array__19322 
 ****************************************************************/
extern int array__19322_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19322_string(const char *str, char **endptr);
extern int string_to_array__19322(const char *str, void *pValue, char **endptr);
extern int is_array__19322_allow_double_conversion();
extern int array__19322_to_double(const void *pValue, double *nValue);
extern int get_array__19322_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19322(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19322_default_value(void *pValue);
extern SimTypeUtils _Type_array__19322_Utils;

/****************************************************************
 ** struct__19325 
 ****************************************************************/
extern int struct__19325_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19325_string(const char *str, char **endptr);
extern int string_to_struct__19325(const char *str, void *pValue, char **endptr);
extern int is_struct__19325_allow_double_conversion();
extern int struct__19325_to_double(const void *pValue, double *nValue);
extern int get_struct__19325_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19325(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19325_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19325_Utils;

/****************************************************************
 ** array_int_3_33 
 ****************************************************************/
extern int array_int_3_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_string(const char *str, char **endptr);
extern int string_to_array_int_3_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_allow_double_conversion();
extern int array_int_3_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_Utils;

/****************************************************************
 ** array_int_99 
 ****************************************************************/
extern int array_int_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_99_string(const char *str, char **endptr);
extern int string_to_array_int_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_99_allow_double_conversion();
extern int array_int_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_99_Utils;

/****************************************************************
 ** array__19345 
 ****************************************************************/
extern int array__19345_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19345_string(const char *str, char **endptr);
extern int string_to_array__19345(const char *str, void *pValue, char **endptr);
extern int is_array__19345_allow_double_conversion();
extern int array__19345_to_double(const void *pValue, double *nValue);
extern int get_array__19345_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19345(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19345_default_value(void *pValue);
extern SimTypeUtils _Type_array__19345_Utils;

/****************************************************************
 ** struct__19348 
 ****************************************************************/
extern int struct__19348_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19348_string(const char *str, char **endptr);
extern int string_to_struct__19348(const char *str, void *pValue, char **endptr);
extern int is_struct__19348_allow_double_conversion();
extern int struct__19348_to_double(const void *pValue, double *nValue);
extern int get_struct__19348_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19348(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19348_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19348_Utils;

/****************************************************************
 ** array__19358 
 ****************************************************************/
extern int array__19358_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19358_string(const char *str, char **endptr);
extern int string_to_array__19358(const char *str, void *pValue, char **endptr);
extern int is_array__19358_allow_double_conversion();
extern int array__19358_to_double(const void *pValue, double *nValue);
extern int get_array__19358_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19358(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19358_default_value(void *pValue);
extern SimTypeUtils _Type_array__19358_Utils;

/****************************************************************
 ** struct__19361 
 ****************************************************************/
extern int struct__19361_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19361_string(const char *str, char **endptr);
extern int string_to_struct__19361(const char *str, void *pValue, char **endptr);
extern int is_struct__19361_allow_double_conversion();
extern int struct__19361_to_double(const void *pValue, double *nValue);
extern int get_struct__19361_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19361(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19361_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19361_Utils;

/****************************************************************
 ** array_int_7 
 ****************************************************************/
extern int array_int_7_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_string(const char *str, char **endptr);
extern int string_to_array_int_7(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_allow_double_conversion();
extern int array_int_7_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_Utils;

/****************************************************************
 ** array_int_7_33 
 ****************************************************************/
extern int array_int_7_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_string(const char *str, char **endptr);
extern int string_to_array_int_7_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_allow_double_conversion();
extern int array_int_7_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_Utils;

/****************************************************************
 ** array_int_231 
 ****************************************************************/
extern int array_int_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_231_string(const char *str, char **endptr);
extern int string_to_array_int_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_231_allow_double_conversion();
extern int array_int_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_231_Utils;

/****************************************************************
 ** array__19387 
 ****************************************************************/
extern int array__19387_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19387_string(const char *str, char **endptr);
extern int string_to_array__19387(const char *str, void *pValue, char **endptr);
extern int is_array__19387_allow_double_conversion();
extern int array__19387_to_double(const void *pValue, double *nValue);
extern int get_array__19387_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19387(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19387_default_value(void *pValue);
extern SimTypeUtils _Type_array__19387_Utils;

/****************************************************************
 ** array_int_32 
 ****************************************************************/
extern int array_int_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_string(const char *str, char **endptr);
extern int string_to_array_int_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_allow_double_conversion();
extern int array_int_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_Utils;

/****************************************************************
 ** struct__19393 
 ****************************************************************/
extern int struct__19393_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19393_string(const char *str, char **endptr);
extern int string_to_struct__19393(const char *str, void *pValue, char **endptr);
extern int is_struct__19393_allow_double_conversion();
extern int struct__19393_to_double(const void *pValue, double *nValue);
extern int get_struct__19393_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19393(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19393_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19393_Utils;

/****************************************************************
 ** struct__19422 
 ****************************************************************/
extern int struct__19422_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19422_string(const char *str, char **endptr);
extern int string_to_struct__19422(const char *str, void *pValue, char **endptr);
extern int is_struct__19422_allow_double_conversion();
extern int struct__19422_to_double(const void *pValue, double *nValue);
extern int get_struct__19422_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19422(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19422_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19422_Utils;

/****************************************************************
 ** array__19427 
 ****************************************************************/
extern int array__19427_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19427_string(const char *str, char **endptr);
extern int string_to_array__19427(const char *str, void *pValue, char **endptr);
extern int is_array__19427_allow_double_conversion();
extern int array__19427_to_double(const void *pValue, double *nValue);
extern int get_array__19427_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19427(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19427_default_value(void *pValue);
extern SimTypeUtils _Type_array__19427_Utils;

/****************************************************************
 ** struct__19430 
 ****************************************************************/
extern int struct__19430_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19430_string(const char *str, char **endptr);
extern int string_to_struct__19430(const char *str, void *pValue, char **endptr);
extern int is_struct__19430_allow_double_conversion();
extern int struct__19430_to_double(const void *pValue, double *nValue);
extern int get_struct__19430_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19430(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19430_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19430_Utils;

/****************************************************************
 ** array_int_64 
 ****************************************************************/
extern int array_int_64_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_64_string(const char *str, char **endptr);
extern int string_to_array_int_64(const char *str, void *pValue, char **endptr);
extern int is_array_int_64_allow_double_conversion();
extern int array_int_64_to_double(const void *pValue, double *nValue);
extern int get_array_int_64_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_64(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_64_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_64_Utils;

/****************************************************************
 ** array_int_2 
 ****************************************************************/
extern int array_int_2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_string(const char *str, char **endptr);
extern int string_to_array_int_2(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_allow_double_conversion();
extern int array_int_2_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_Utils;

/****************************************************************
 ** array_int_2_32 
 ****************************************************************/
extern int array_int_2_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_string(const char *str, char **endptr);
extern int string_to_array_int_2_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_allow_double_conversion();
extern int array_int_2_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_Utils;

/****************************************************************
 ** array__19447 
 ****************************************************************/
extern int array__19447_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19447_string(const char *str, char **endptr);
extern int string_to_array__19447(const char *str, void *pValue, char **endptr);
extern int is_array__19447_allow_double_conversion();
extern int array__19447_to_double(const void *pValue, double *nValue);
extern int get_array__19447_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19447(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19447_default_value(void *pValue);
extern SimTypeUtils _Type_array__19447_Utils;

/****************************************************************
 ** array__19450 
 ****************************************************************/
extern int array__19450_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19450_string(const char *str, char **endptr);
extern int string_to_array__19450(const char *str, void *pValue, char **endptr);
extern int is_array__19450_allow_double_conversion();
extern int array__19450_to_double(const void *pValue, double *nValue);
extern int get_array__19450_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19450(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19450_default_value(void *pValue);
extern SimTypeUtils _Type_array__19450_Utils;

/****************************************************************
 ** struct__19453 
 ****************************************************************/
extern int struct__19453_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19453_string(const char *str, char **endptr);
extern int string_to_struct__19453(const char *str, void *pValue, char **endptr);
extern int is_struct__19453_allow_double_conversion();
extern int struct__19453_to_double(const void *pValue, double *nValue);
extern int get_struct__19453_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19453(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19453_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19453_Utils;

/****************************************************************
 ** struct__19468 
 ****************************************************************/
extern int struct__19468_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19468_string(const char *str, char **endptr);
extern int string_to_struct__19468(const char *str, void *pValue, char **endptr);
extern int is_struct__19468_allow_double_conversion();
extern int struct__19468_to_double(const void *pValue, double *nValue);
extern int get_struct__19468_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19468(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19468_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19468_Utils;

/****************************************************************
 ** array__19474 
 ****************************************************************/
extern int array__19474_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19474_string(const char *str, char **endptr);
extern int string_to_array__19474(const char *str, void *pValue, char **endptr);
extern int is_array__19474_allow_double_conversion();
extern int array__19474_to_double(const void *pValue, double *nValue);
extern int get_array__19474_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19474(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19474_default_value(void *pValue);
extern SimTypeUtils _Type_array__19474_Utils;

/****************************************************************
 ** struct__19477 
 ****************************************************************/
extern int struct__19477_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19477_string(const char *str, char **endptr);
extern int string_to_struct__19477(const char *str, void *pValue, char **endptr);
extern int is_struct__19477_allow_double_conversion();
extern int struct__19477_to_double(const void *pValue, double *nValue);
extern int get_struct__19477_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19477(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19477_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19477_Utils;

/****************************************************************
 ** array__19490 
 ****************************************************************/
extern int array__19490_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19490_string(const char *str, char **endptr);
extern int string_to_array__19490(const char *str, void *pValue, char **endptr);
extern int is_array__19490_allow_double_conversion();
extern int array__19490_to_double(const void *pValue, double *nValue);
extern int get_array__19490_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19490(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19490_default_value(void *pValue);
extern SimTypeUtils _Type_array__19490_Utils;

/****************************************************************
 ** array__19493 
 ****************************************************************/
extern int array__19493_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19493_string(const char *str, char **endptr);
extern int string_to_array__19493(const char *str, void *pValue, char **endptr);
extern int is_array__19493_allow_double_conversion();
extern int array__19493_to_double(const void *pValue, double *nValue);
extern int get_array__19493_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19493(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19493_default_value(void *pValue);
extern SimTypeUtils _Type_array__19493_Utils;

/****************************************************************
 ** array_int_24 
 ****************************************************************/
extern int array_int_24_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_24_string(const char *str, char **endptr);
extern int string_to_array_int_24(const char *str, void *pValue, char **endptr);
extern int is_array_int_24_allow_double_conversion();
extern int array_int_24_to_double(const void *pValue, double *nValue);
extern int get_array_int_24_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_24(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_24_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_24_Utils;

/****************************************************************
 ** struct__19499 
 ****************************************************************/
extern int struct__19499_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19499_string(const char *str, char **endptr);
extern int string_to_struct__19499(const char *str, void *pValue, char **endptr);
extern int is_struct__19499_allow_double_conversion();
extern int struct__19499_to_double(const void *pValue, double *nValue);
extern int get_struct__19499_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19499(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19499_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19499_Utils;

/****************************************************************
 ** array_int_5 
 ****************************************************************/
extern int array_int_5_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_5_string(const char *str, char **endptr);
extern int string_to_array_int_5(const char *str, void *pValue, char **endptr);
extern int is_array_int_5_allow_double_conversion();
extern int array_int_5_to_double(const void *pValue, double *nValue);
extern int get_array_int_5_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_5(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_5_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_5_Utils;

/****************************************************************
 ** array_int_15 
 ****************************************************************/
extern int array_int_15_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_15_string(const char *str, char **endptr);
extern int string_to_array_int_15(const char *str, void *pValue, char **endptr);
extern int is_array_int_15_allow_double_conversion();
extern int array_int_15_to_double(const void *pValue, double *nValue);
extern int get_array_int_15_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_15(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_15_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_15_Utils;

/****************************************************************
 ** array_int_6 
 ****************************************************************/
extern int array_int_6_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_6_string(const char *str, char **endptr);
extern int string_to_array_int_6(const char *str, void *pValue, char **endptr);
extern int is_array_int_6_allow_double_conversion();
extern int array_int_6_to_double(const void *pValue, double *nValue);
extern int get_array_int_6_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_6(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_6_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_6_Utils;

/****************************************************************
 ** struct__19514 
 ****************************************************************/
extern int struct__19514_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19514_string(const char *str, char **endptr);
extern int string_to_struct__19514(const char *str, void *pValue, char **endptr);
extern int is_struct__19514_allow_double_conversion();
extern int struct__19514_to_double(const void *pValue, double *nValue);
extern int get_struct__19514_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19514(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19514_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19514_Utils;

/****************************************************************
 ** struct__19532 
 ****************************************************************/
extern int struct__19532_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19532_string(const char *str, char **endptr);
extern int string_to_struct__19532(const char *str, void *pValue, char **endptr);
extern int is_struct__19532_allow_double_conversion();
extern int struct__19532_to_double(const void *pValue, double *nValue);
extern int get_struct__19532_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19532(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19532_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19532_Utils;

/****************************************************************
 ** struct__19542 
 ****************************************************************/
extern int struct__19542_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19542_string(const char *str, char **endptr);
extern int string_to_struct__19542(const char *str, void *pValue, char **endptr);
extern int is_struct__19542_allow_double_conversion();
extern int struct__19542_to_double(const void *pValue, double *nValue);
extern int get_struct__19542_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19542(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19542_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19542_Utils;

/****************************************************************
 ** struct__19552 
 ****************************************************************/
extern int struct__19552_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19552_string(const char *str, char **endptr);
extern int string_to_struct__19552(const char *str, void *pValue, char **endptr);
extern int is_struct__19552_allow_double_conversion();
extern int struct__19552_to_double(const void *pValue, double *nValue);
extern int get_struct__19552_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19552(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19552_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19552_Utils;

/****************************************************************
 ** struct__19563 
 ****************************************************************/
extern int struct__19563_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19563_string(const char *str, char **endptr);
extern int string_to_struct__19563(const char *str, void *pValue, char **endptr);
extern int is_struct__19563_allow_double_conversion();
extern int struct__19563_to_double(const void *pValue, double *nValue);
extern int get_struct__19563_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19563(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19563_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19563_Utils;

/****************************************************************
 ** struct__19577 
 ****************************************************************/
extern int struct__19577_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19577_string(const char *str, char **endptr);
extern int string_to_struct__19577(const char *str, void *pValue, char **endptr);
extern int is_struct__19577_allow_double_conversion();
extern int struct__19577_to_double(const void *pValue, double *nValue);
extern int get_struct__19577_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19577(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19577_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19577_Utils;

/****************************************************************
 ** struct__19587 
 ****************************************************************/
extern int struct__19587_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19587_string(const char *str, char **endptr);
extern int string_to_struct__19587(const char *str, void *pValue, char **endptr);
extern int is_struct__19587_allow_double_conversion();
extern int struct__19587_to_double(const void *pValue, double *nValue);
extern int get_struct__19587_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19587(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19587_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19587_Utils;

/****************************************************************
 ** struct__19598 
 ****************************************************************/
extern int struct__19598_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19598_string(const char *str, char **endptr);
extern int string_to_struct__19598(const char *str, void *pValue, char **endptr);
extern int is_struct__19598_allow_double_conversion();
extern int struct__19598_to_double(const void *pValue, double *nValue);
extern int get_struct__19598_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19598(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19598_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19598_Utils;

/****************************************************************
 ** struct__19608 
 ****************************************************************/
extern int struct__19608_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19608_string(const char *str, char **endptr);
extern int string_to_struct__19608(const char *str, void *pValue, char **endptr);
extern int is_struct__19608_allow_double_conversion();
extern int struct__19608_to_double(const void *pValue, double *nValue);
extern int get_struct__19608_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19608(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19608_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19608_Utils;

/****************************************************************
 ** struct__19622 
 ****************************************************************/
extern int struct__19622_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_struct__19622_string(const char *str, char **endptr);
extern int string_to_struct__19622(const char *str, void *pValue, char **endptr);
extern int is_struct__19622_allow_double_conversion();
extern int struct__19622_to_double(const void *pValue, double *nValue);
extern int get_struct__19622_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_struct__19622(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_struct__19622_default_value(void *pValue);
extern SimTypeUtils _Type_struct__19622_Utils;

/****************************************************************
 ** array_int_30 
 ****************************************************************/
extern int array_int_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_30_string(const char *str, char **endptr);
extern int string_to_array_int_30(const char *str, void *pValue, char **endptr);
extern int is_array_int_30_allow_double_conversion();
extern int array_int_30_to_double(const void *pValue, double *nValue);
extern int get_array_int_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_30_Utils;

/****************************************************************
 ** array_bool_30 
 ****************************************************************/
extern int array_bool_30_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_bool_30_string(const char *str, char **endptr);
extern int string_to_array_bool_30(const char *str, void *pValue, char **endptr);
extern int is_array_bool_30_allow_double_conversion();
extern int array_bool_30_to_double(const void *pValue, double *nValue);
extern int get_array_bool_30_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_bool_30(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_bool_30_default_value(void *pValue);
extern SimTypeUtils _Type_array_bool_30_Utils;

/****************************************************************
 ** array_int_500_500 
 ****************************************************************/
extern int array_int_500_500_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_500_500_string(const char *str, char **endptr);
extern int string_to_array_int_500_500(const char *str, void *pValue, char **endptr);
extern int is_array_int_500_500_allow_double_conversion();
extern int array_int_500_500_to_double(const void *pValue, double *nValue);
extern int get_array_int_500_500_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_500_500(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_500_500_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_500_500_Utils;

/****************************************************************
 ** array_int_128_32 
 ****************************************************************/
extern int array_int_128_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_128_32_string(const char *str, char **endptr);
extern int string_to_array_int_128_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_128_32_allow_double_conversion();
extern int array_int_128_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_128_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_128_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_128_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_128_32_Utils;

/****************************************************************
 ** array_int_33 
 ****************************************************************/
extern int array_int_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_33_string(const char *str, char **endptr);
extern int string_to_array_int_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_33_allow_double_conversion();
extern int array_int_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_33_Utils;

/****************************************************************
 ** array_int_99_33 
 ****************************************************************/
extern int array_int_99_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_99_33_string(const char *str, char **endptr);
extern int string_to_array_int_99_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_99_33_allow_double_conversion();
extern int array_int_99_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_99_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_99_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_99_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_99_33_Utils;

/****************************************************************
 ** array_int_231_33 
 ****************************************************************/
extern int array_int_231_33_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_231_33_string(const char *str, char **endptr);
extern int string_to_array_int_231_33(const char *str, void *pValue, char **endptr);
extern int is_array_int_231_33_allow_double_conversion();
extern int array_int_231_33_to_double(const void *pValue, double *nValue);
extern int get_array_int_231_33_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_231_33(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_231_33_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_231_33_Utils;

/****************************************************************
 ** array_int_64_32 
 ****************************************************************/
extern int array_int_64_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_64_32_string(const char *str, char **endptr);
extern int string_to_array_int_64_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_64_32_allow_double_conversion();
extern int array_int_64_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_64_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_64_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_64_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_64_32_Utils;

/****************************************************************
 ** array__19656 
 ****************************************************************/
extern int array__19656_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19656_string(const char *str, char **endptr);
extern int string_to_array__19656(const char *str, void *pValue, char **endptr);
extern int is_array__19656_allow_double_conversion();
extern int array__19656_to_double(const void *pValue, double *nValue);
extern int get_array__19656_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19656(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19656_default_value(void *pValue);
extern SimTypeUtils _Type_array__19656_Utils;

/****************************************************************
 ** array_int_32_32 
 ****************************************************************/
extern int array_int_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_32_32_string(const char *str, char **endptr);
extern int string_to_array_int_32_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_32_32_allow_double_conversion();
extern int array_int_32_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_32_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_32_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_32_32_Utils;

/****************************************************************
 ** array__19662 
 ****************************************************************/
extern int array__19662_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19662_string(const char *str, char **endptr);
extern int string_to_array__19662(const char *str, void *pValue, char **endptr);
extern int is_array__19662_allow_double_conversion();
extern int array__19662_to_double(const void *pValue, double *nValue);
extern int get_array__19662_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19662(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19662_default_value(void *pValue);
extern SimTypeUtils _Type_array__19662_Utils;

/****************************************************************
 ** array__19665 
 ****************************************************************/
extern int array__19665_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19665_string(const char *str, char **endptr);
extern int string_to_array__19665(const char *str, void *pValue, char **endptr);
extern int is_array__19665_allow_double_conversion();
extern int array__19665_to_double(const void *pValue, double *nValue);
extern int get_array__19665_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19665(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19665_default_value(void *pValue);
extern SimTypeUtils _Type_array__19665_Utils;

/****************************************************************
 ** array__19668 
 ****************************************************************/
extern int array__19668_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19668_string(const char *str, char **endptr);
extern int string_to_array__19668(const char *str, void *pValue, char **endptr);
extern int is_array__19668_allow_double_conversion();
extern int array__19668_to_double(const void *pValue, double *nValue);
extern int get_array__19668_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19668(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19668_default_value(void *pValue);
extern SimTypeUtils _Type_array__19668_Utils;

/****************************************************************
 ** array_int_23 
 ****************************************************************/
extern int array_int_23_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_23_string(const char *str, char **endptr);
extern int string_to_array_int_23(const char *str, void *pValue, char **endptr);
extern int is_array_int_23_allow_double_conversion();
extern int array_int_23_to_double(const void *pValue, double *nValue);
extern int get_array_int_23_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_23(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_23_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_23_Utils;

/****************************************************************
 ** array_int_20 
 ****************************************************************/
extern int array_int_20_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_20_string(const char *str, char **endptr);
extern int string_to_array_int_20(const char *str, void *pValue, char **endptr);
extern int is_array_int_20_allow_double_conversion();
extern int array_int_20_to_double(const void *pValue, double *nValue);
extern int get_array_int_20_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_20(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_20_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_20_Utils;

/****************************************************************
 ** array_int_48 
 ****************************************************************/
extern int array_int_48_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_48_string(const char *str, char **endptr);
extern int string_to_array_int_48(const char *str, void *pValue, char **endptr);
extern int is_array_int_48_allow_double_conversion();
extern int array_int_48_to_double(const void *pValue, double *nValue);
extern int get_array_int_48_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_48(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_48_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_48_Utils;

/****************************************************************
 ** array_int_3_33_231 
 ****************************************************************/
extern int array_int_3_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_231_string(const char *str, char **endptr);
extern int string_to_array_int_3_33_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_231_allow_double_conversion();
extern int array_int_3_33_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_231_Utils;

/****************************************************************
 ** array_int_396 
 ****************************************************************/
extern int array_int_396_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_396_string(const char *str, char **endptr);
extern int string_to_array_int_396(const char *str, void *pValue, char **endptr);
extern int is_array_int_396_allow_double_conversion();
extern int array_int_396_to_double(const void *pValue, double *nValue);
extern int get_array_int_396_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_396(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_396_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_396_Utils;

/****************************************************************
 ** array_int_104 
 ****************************************************************/
extern int array_int_104_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_104_string(const char *str, char **endptr);
extern int string_to_array_int_104(const char *str, void *pValue, char **endptr);
extern int is_array_int_104_allow_double_conversion();
extern int array_int_104_to_double(const void *pValue, double *nValue);
extern int get_array_int_104_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_104(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_104_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_104_Utils;

/****************************************************************
 ** array__19689 
 ****************************************************************/
extern int array__19689_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19689_string(const char *str, char **endptr);
extern int string_to_array__19689(const char *str, void *pValue, char **endptr);
extern int is_array__19689_allow_double_conversion();
extern int array__19689_to_double(const void *pValue, double *nValue);
extern int get_array__19689_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19689(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19689_default_value(void *pValue);
extern SimTypeUtils _Type_array__19689_Utils;

/****************************************************************
 ** array_int_494 
 ****************************************************************/
extern int array_int_494_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_494_string(const char *str, char **endptr);
extern int string_to_array_int_494(const char *str, void *pValue, char **endptr);
extern int is_array_int_494_allow_double_conversion();
extern int array_int_494_to_double(const void *pValue, double *nValue);
extern int get_array_int_494_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_494(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_494_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_494_Utils;

/****************************************************************
 ** array__19695 
 ****************************************************************/
extern int array__19695_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19695_string(const char *str, char **endptr);
extern int string_to_array__19695(const char *str, void *pValue, char **endptr);
extern int is_array__19695_allow_double_conversion();
extern int array__19695_to_double(const void *pValue, double *nValue);
extern int get_array__19695_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19695(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19695_default_value(void *pValue);
extern SimTypeUtils _Type_array__19695_Utils;

/****************************************************************
 ** array_int_2_32_32 
 ****************************************************************/
extern int array_int_2_32_32_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_2_32_32_string(const char *str, char **endptr);
extern int string_to_array_int_2_32_32(const char *str, void *pValue, char **endptr);
extern int is_array_int_2_32_32_allow_double_conversion();
extern int array_int_2_32_32_to_double(const void *pValue, double *nValue);
extern int get_array_int_2_32_32_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_2_32_32(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_2_32_32_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_2_32_32_Utils;

/****************************************************************
 ** array_int_432 
 ****************************************************************/
extern int array_int_432_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_432_string(const char *str, char **endptr);
extern int string_to_array_int_432(const char *str, void *pValue, char **endptr);
extern int is_array_int_432_allow_double_conversion();
extern int array_int_432_to_double(const void *pValue, double *nValue);
extern int get_array_int_432_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_432(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_432_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_432_Utils;

/****************************************************************
 ** array_int_68 
 ****************************************************************/
extern int array_int_68_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_68_string(const char *str, char **endptr);
extern int string_to_array_int_68(const char *str, void *pValue, char **endptr);
extern int is_array_int_68_allow_double_conversion();
extern int array_int_68_to_double(const void *pValue, double *nValue);
extern int get_array_int_68_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_68(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_68_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_68_Utils;

/****************************************************************
 ** array_int_444 
 ****************************************************************/
extern int array_int_444_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_444_string(const char *str, char **endptr);
extern int string_to_array_int_444(const char *str, void *pValue, char **endptr);
extern int is_array_int_444_allow_double_conversion();
extern int array_int_444_to_double(const void *pValue, double *nValue);
extern int get_array_int_444_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_444(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_444_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_444_Utils;

/****************************************************************
 ** array_int_56 
 ****************************************************************/
extern int array_int_56_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_56_string(const char *str, char **endptr);
extern int string_to_array_int_56(const char *str, void *pValue, char **endptr);
extern int is_array_int_56_allow_double_conversion();
extern int array_int_56_to_double(const void *pValue, double *nValue);
extern int get_array_int_56_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_56(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_56_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_56_Utils;

/****************************************************************
 ** array_int_18 
 ****************************************************************/
extern int array_int_18_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_18_string(const char *str, char **endptr);
extern int string_to_array_int_18(const char *str, void *pValue, char **endptr);
extern int is_array_int_18_allow_double_conversion();
extern int array_int_18_to_double(const void *pValue, double *nValue);
extern int get_array_int_18_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_18(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_18_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_18_Utils;

/****************************************************************
 ** array_int_7_33_231 
 ****************************************************************/
extern int array_int_7_33_231_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_7_33_231_string(const char *str, char **endptr);
extern int string_to_array_int_7_33_231(const char *str, void *pValue, char **endptr);
extern int is_array_int_7_33_231_allow_double_conversion();
extern int array_int_7_33_231_to_double(const void *pValue, double *nValue);
extern int get_array_int_7_33_231_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_7_33_231(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_7_33_231_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_7_33_231_Utils;

/****************************************************************
 ** array_int_264 
 ****************************************************************/
extern int array_int_264_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_264_string(const char *str, char **endptr);
extern int string_to_array_int_264(const char *str, void *pValue, char **endptr);
extern int is_array_int_264_allow_double_conversion();
extern int array_int_264_to_double(const void *pValue, double *nValue);
extern int get_array_int_264_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_264(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_264_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_264_Utils;

/****************************************************************
 ** array_int_236 
 ****************************************************************/
extern int array_int_236_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_236_string(const char *str, char **endptr);
extern int string_to_array_int_236(const char *str, void *pValue, char **endptr);
extern int is_array_int_236_allow_double_conversion();
extern int array_int_236_to_double(const void *pValue, double *nValue);
extern int get_array_int_236_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_236(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_236_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_236_Utils;

/****************************************************************
 ** array__19725 
 ****************************************************************/
extern int array__19725_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19725_string(const char *str, char **endptr);
extern int string_to_array__19725(const char *str, void *pValue, char **endptr);
extern int is_array__19725_allow_double_conversion();
extern int array__19725_to_double(const void *pValue, double *nValue);
extern int get_array__19725_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19725(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19725_default_value(void *pValue);
extern SimTypeUtils _Type_array__19725_Utils;

/****************************************************************
 ** array_int_3_33_99 
 ****************************************************************/
extern int array_int_3_33_99_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_3_33_99_string(const char *str, char **endptr);
extern int string_to_array_int_3_33_99(const char *str, void *pValue, char **endptr);
extern int is_array_int_3_33_99_allow_double_conversion();
extern int array_int_3_33_99_to_double(const void *pValue, double *nValue);
extern int get_array_int_3_33_99_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_3_33_99(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_3_33_99_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_3_33_99_Utils;

/****************************************************************
 ** array_int_395 
 ****************************************************************/
extern int array_int_395_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_395_string(const char *str, char **endptr);
extern int string_to_array_int_395(const char *str, void *pValue, char **endptr);
extern int is_array_int_395_allow_double_conversion();
extern int array_int_395_to_double(const void *pValue, double *nValue);
extern int get_array_int_395_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_395(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_395_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_395_Utils;

/****************************************************************
 ** array_int_105 
 ****************************************************************/
extern int array_int_105_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_105_string(const char *str, char **endptr);
extern int string_to_array_int_105(const char *str, void *pValue, char **endptr);
extern int is_array_int_105_allow_double_conversion();
extern int array_int_105_to_double(const void *pValue, double *nValue);
extern int get_array_int_105_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_105(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_105_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_105_Utils;

/****************************************************************
 ** array__19737 
 ****************************************************************/
extern int array__19737_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array__19737_string(const char *str, char **endptr);
extern int string_to_array__19737(const char *str, void *pValue, char **endptr);
extern int is_array__19737_allow_double_conversion();
extern int array__19737_to_double(const void *pValue, double *nValue);
extern int get_array__19737_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array__19737(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array__19737_default_value(void *pValue);
extern SimTypeUtils _Type_array__19737_Utils;

/****************************************************************
 ** array_int_491 
 ****************************************************************/
extern int array_int_491_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_491_string(const char *str, char **endptr);
extern int string_to_array_int_491(const char *str, void *pValue, char **endptr);
extern int is_array_int_491_allow_double_conversion();
extern int array_int_491_to_double(const void *pValue, double *nValue);
extern int get_array_int_491_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_491(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_491_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_491_Utils;

/****************************************************************
 ** array_int_9 
 ****************************************************************/
extern int array_int_9_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_9_string(const char *str, char **endptr);
extern int string_to_array_int_9(const char *str, void *pValue, char **endptr);
extern int is_array_int_9_allow_double_conversion();
extern int array_int_9_to_double(const void *pValue, double *nValue);
extern int get_array_int_9_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_9(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_9_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_9_Utils;

/****************************************************************
 ** array_int_4_32_128 
 ****************************************************************/
extern int array_int_4_32_128_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_4_32_128_string(const char *str, char **endptr);
extern int string_to_array_int_4_32_128(const char *str, void *pValue, char **endptr);
extern int is_array_int_4_32_128_allow_double_conversion();
extern int array_int_4_32_128_to_double(const void *pValue, double *nValue);
extern int get_array_int_4_32_128_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_4_32_128(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_4_32_128_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_4_32_128_Utils;

/****************************************************************
 ** array_int_350 
 ****************************************************************/
extern int array_int_350_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_350_string(const char *str, char **endptr);
extern int string_to_array_int_350(const char *str, void *pValue, char **endptr);
extern int is_array_int_350_allow_double_conversion();
extern int array_int_350_to_double(const void *pValue, double *nValue);
extern int get_array_int_350_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_350(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_350_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_350_Utils;

/****************************************************************
 ** array_int_21 
 ****************************************************************/
extern int array_int_21_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_21_string(const char *str, char **endptr);
extern int string_to_array_int_21(const char *str, void *pValue, char **endptr);
extern int is_array_int_21_allow_double_conversion();
extern int array_int_21_to_double(const void *pValue, double *nValue);
extern int get_array_int_21_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_21(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_21_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_21_Utils;

/****************************************************************
 ** array_int_150 
 ****************************************************************/
extern int array_int_150_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_150_string(const char *str, char **endptr);
extern int string_to_array_int_150(const char *str, void *pValue, char **endptr);
extern int is_array_int_150_allow_double_conversion();
extern int array_int_150_to_double(const void *pValue, double *nValue);
extern int get_array_int_150_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_150(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_150_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_150_Utils;

/****************************************************************
 ** array_int_22 
 ****************************************************************/
extern int array_int_22_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_22_string(const char *str, char **endptr);
extern int string_to_array_int_22(const char *str, void *pValue, char **endptr);
extern int is_array_int_22_allow_double_conversion();
extern int array_int_22_to_double(const void *pValue, double *nValue);
extern int get_array_int_22_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_22(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_22_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_22_Utils;

/****************************************************************
 ** array_int_499 
 ****************************************************************/
extern int array_int_499_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_499_string(const char *str, char **endptr);
extern int string_to_array_int_499(const char *str, void *pValue, char **endptr);
extern int is_array_int_499_allow_double_conversion();
extern int array_int_499_to_double(const void *pValue, double *nValue);
extern int get_array_int_499_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_499(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_499_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_499_Utils;

/****************************************************************
 ** array_int_496 
 ****************************************************************/
extern int array_int_496_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_array_int_496_string(const char *str, char **endptr);
extern int string_to_array_int_496(const char *str, void *pValue, char **endptr);
extern int is_array_int_496_allow_double_conversion();
extern int array_int_496_to_double(const void *pValue, double *nValue);
extern int get_array_int_496_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_array_int_496(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_array_int_496_default_value(void *pValue);
extern SimTypeUtils _Type_array_int_496_Utils;

/****************************************************************
 ** NID_MESSAGE 
 ****************************************************************/
extern int NID_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_MESSAGE_string(const char *str, char **endptr);
extern int string_to_NID_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_NID_MESSAGE_allow_double_conversion();
extern int NID_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_NID_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_MESSAGE_Utils;

/****************************************************************
 ** L_MESSAGE 
 ****************************************************************/
extern int L_MESSAGE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_MESSAGE_string(const char *str, char **endptr);
extern int string_to_L_MESSAGE(const char *str, void *pValue, char **endptr);
extern int is_L_MESSAGE_allow_double_conversion();
extern int L_MESSAGE_to_double(const void *pValue, double *nValue);
extern int get_L_MESSAGE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_MESSAGE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_MESSAGE_default_value(void *pValue);
extern SimTypeUtils _Type_L_MESSAGE_Utils;

/****************************************************************
 ** T_TRAIN 
 ****************************************************************/
extern int T_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_TRAIN_string(const char *str, char **endptr);
extern int string_to_T_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_T_TRAIN_allow_double_conversion();
extern int T_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_T_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_T_TRAIN_Utils;

/****************************************************************
 ** M_ACK 
 ****************************************************************/
extern int M_ACK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ACK_string(const char *str, char **endptr);
extern int string_to_M_ACK(const char *str, void *pValue, char **endptr);
extern int is_M_ACK_allow_double_conversion();
extern int M_ACK_to_double(const void *pValue, double *nValue);
extern int get_M_ACK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ACK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ACK_default_value(void *pValue);
extern SimTypeUtils _Type_M_ACK_Utils;

/****************************************************************
 ** NID_LRBG 
 ****************************************************************/
extern int NID_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_LRBG_string(const char *str, char **endptr);
extern int string_to_NID_LRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_LRBG_allow_double_conversion();
extern int NID_LRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_LRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_LRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_LRBG_Utils;

/****************************************************************
 ** NID_EM 
 ****************************************************************/
extern int NID_EM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_EM_string(const char *str, char **endptr);
extern int string_to_NID_EM(const char *str, void *pValue, char **endptr);
extern int is_NID_EM_allow_double_conversion();
extern int NID_EM_to_double(const void *pValue, double *nValue);
extern int get_NID_EM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_EM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_EM_default_value(void *pValue);
extern SimTypeUtils _Type_NID_EM_Utils;

/****************************************************************
 ** Q_SCALE 
 ****************************************************************/
extern int Q_SCALE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SCALE_string(const char *str, char **endptr);
extern int string_to_Q_SCALE(const char *str, void *pValue, char **endptr);
extern int is_Q_SCALE_allow_double_conversion();
extern int Q_SCALE_to_double(const void *pValue, double *nValue);
extern int get_Q_SCALE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SCALE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SCALE_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SCALE_Utils;

/****************************************************************
 ** D_SR 
 ****************************************************************/
extern int D_SR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_SR_string(const char *str, char **endptr);
extern int string_to_D_SR(const char *str, void *pValue, char **endptr);
extern int is_D_SR_allow_double_conversion();
extern int D_SR_to_double(const void *pValue, double *nValue);
extern int get_D_SR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_SR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_SR_default_value(void *pValue);
extern SimTypeUtils _Type_D_SR_Utils;

/****************************************************************
 ** D_REF 
 ****************************************************************/
extern int D_REF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_REF_string(const char *str, char **endptr);
extern int string_to_D_REF(const char *str, void *pValue, char **endptr);
extern int is_D_REF_allow_double_conversion();
extern int D_REF_to_double(const void *pValue, double *nValue);
extern int get_D_REF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_REF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_REF_default_value(void *pValue);
extern SimTypeUtils _Type_D_REF_Utils;

/****************************************************************
 ** Q_DIR 
 ****************************************************************/
extern int Q_DIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIR_string(const char *str, char **endptr);
extern int string_to_Q_DIR(const char *str, void *pValue, char **endptr);
extern int is_Q_DIR_allow_double_conversion();
extern int Q_DIR_to_double(const void *pValue, double *nValue);
extern int get_Q_DIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIR_Utils;

/****************************************************************
 ** D_EMERGENCYSTOP 
 ****************************************************************/
extern int D_EMERGENCYSTOP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_EMERGENCYSTOP_string(const char *str, char **endptr);
extern int string_to_D_EMERGENCYSTOP(const char *str, void *pValue, char **endptr);
extern int is_D_EMERGENCYSTOP_allow_double_conversion();
extern int D_EMERGENCYSTOP_to_double(const void *pValue, double *nValue);
extern int get_D_EMERGENCYSTOP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_EMERGENCYSTOP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_EMERGENCYSTOP_default_value(void *pValue);
extern SimTypeUtils _Type_D_EMERGENCYSTOP_Utils;

/****************************************************************
 ** M_VERSION 
 ****************************************************************/
extern int M_VERSION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_VERSION_string(const char *str, char **endptr);
extern int string_to_M_VERSION(const char *str, void *pValue, char **endptr);
extern int is_M_VERSION_allow_double_conversion();
extern int M_VERSION_to_double(const void *pValue, double *nValue);
extern int get_M_VERSION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_VERSION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_VERSION_default_value(void *pValue);
extern SimTypeUtils _Type_M_VERSION_Utils;

/****************************************************************
 ** NID_PACKET 
 ****************************************************************/
extern int NID_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PACKET_string(const char *str, char **endptr);
extern int string_to_NID_PACKET(const char *str, void *pValue, char **endptr);
extern int is_NID_PACKET_allow_double_conversion();
extern int NID_PACKET_to_double(const void *pValue, double *nValue);
extern int get_NID_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PACKET_Utils;

/****************************************************************
 ** D_DP 
 ****************************************************************/
extern int D_DP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_DP_string(const char *str, char **endptr);
extern int string_to_D_DP(const char *str, void *pValue, char **endptr);
extern int is_D_DP_allow_double_conversion();
extern int D_DP_to_double(const void *pValue, double *nValue);
extern int get_D_DP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_DP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_DP_default_value(void *pValue);
extern SimTypeUtils _Type_D_DP_Utils;

/****************************************************************
 ** D_OL 
 ****************************************************************/
extern int D_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_OL_string(const char *str, char **endptr);
extern int string_to_D_OL(const char *str, void *pValue, char **endptr);
extern int is_D_OL_allow_double_conversion();
extern int D_OL_to_double(const void *pValue, double *nValue);
extern int get_D_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_OL_default_value(void *pValue);
extern SimTypeUtils _Type_D_OL_Utils;

/****************************************************************
 ** V_LOA 
 ****************************************************************/
extern int V_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_LOA_string(const char *str, char **endptr);
extern int string_to_V_LOA(const char *str, void *pValue, char **endptr);
extern int is_V_LOA_allow_double_conversion();
extern int V_LOA_to_double(const void *pValue, double *nValue);
extern int get_V_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_V_LOA_Utils;

/****************************************************************
 ** T_ENDTIMER 
 ****************************************************************/
extern int T_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_T_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_T_ENDTIMER_allow_double_conversion();
extern int T_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_T_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_T_ENDTIMER_Utils;

/****************************************************************
 ** L_SECTION 
 ****************************************************************/
extern int L_SECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_SECTION_string(const char *str, char **endptr);
extern int string_to_L_SECTION(const char *str, void *pValue, char **endptr);
extern int is_L_SECTION_allow_double_conversion();
extern int L_SECTION_to_double(const void *pValue, double *nValue);
extern int get_L_SECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_SECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_SECTION_default_value(void *pValue);
extern SimTypeUtils _Type_L_SECTION_Utils;

/****************************************************************
 ** Q_SECTIONTIMER 
 ****************************************************************/
extern int Q_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_Q_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_Q_SECTIONTIMER_allow_double_conversion();
extern int Q_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_Q_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_Q_SECTIONTIMER_Utils;

/****************************************************************
 ** T_SECTIONTIMER 
 ****************************************************************/
extern int T_SECTIONTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_SECTIONTIMER_string(const char *str, char **endptr);
extern int string_to_T_SECTIONTIMER(const char *str, void *pValue, char **endptr);
extern int is_T_SECTIONTIMER_allow_double_conversion();
extern int T_SECTIONTIMER_to_double(const void *pValue, double *nValue);
extern int get_T_SECTIONTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_SECTIONTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_SECTIONTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_T_SECTIONTIMER_Utils;

/****************************************************************
 ** D_SECTIONTIMERSTOPLOC 
 ****************************************************************/
extern int D_SECTIONTIMERSTOPLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_SECTIONTIMERSTOPLOC_string(const char *str, char **endptr);
extern int string_to_D_SECTIONTIMERSTOPLOC(const char *str, void *pValue, char **endptr);
extern int is_D_SECTIONTIMERSTOPLOC_allow_double_conversion();
extern int D_SECTIONTIMERSTOPLOC_to_double(const void *pValue, double *nValue);
extern int get_D_SECTIONTIMERSTOPLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_SECTIONTIMERSTOPLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_SECTIONTIMERSTOPLOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_SECTIONTIMERSTOPLOC_Utils;

/****************************************************************
 ** Q_OVERLAP 
 ****************************************************************/
extern int Q_OVERLAP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_OVERLAP_string(const char *str, char **endptr);
extern int string_to_Q_OVERLAP(const char *str, void *pValue, char **endptr);
extern int is_Q_OVERLAP_allow_double_conversion();
extern int Q_OVERLAP_to_double(const void *pValue, double *nValue);
extern int get_Q_OVERLAP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_OVERLAP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_OVERLAP_default_value(void *pValue);
extern SimTypeUtils _Type_Q_OVERLAP_Utils;

/****************************************************************
 ** Q_DANGERPOINT 
 ****************************************************************/
extern int Q_DANGERPOINT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DANGERPOINT_string(const char *str, char **endptr);
extern int string_to_Q_DANGERPOINT(const char *str, void *pValue, char **endptr);
extern int is_Q_DANGERPOINT_allow_double_conversion();
extern int Q_DANGERPOINT_to_double(const void *pValue, double *nValue);
extern int get_Q_DANGERPOINT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DANGERPOINT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DANGERPOINT_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DANGERPOINT_Utils;

/****************************************************************
 ** T_LOA 
 ****************************************************************/
extern int T_LOA_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_LOA_string(const char *str, char **endptr);
extern int string_to_T_LOA(const char *str, void *pValue, char **endptr);
extern int is_T_LOA_allow_double_conversion();
extern int T_LOA_to_double(const void *pValue, double *nValue);
extern int get_T_LOA_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_LOA(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_LOA_default_value(void *pValue);
extern SimTypeUtils _Type_T_LOA_Utils;

/****************************************************************
 ** N_ITER 
 ****************************************************************/
extern int N_ITER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_N_ITER_string(const char *str, char **endptr);
extern int string_to_N_ITER(const char *str, void *pValue, char **endptr);
extern int is_N_ITER_allow_double_conversion();
extern int N_ITER_to_double(const void *pValue, double *nValue);
extern int get_N_ITER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_N_ITER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_N_ITER_default_value(void *pValue);
extern SimTypeUtils _Type_N_ITER_Utils;

/****************************************************************
 ** L_ENDSECTION 
 ****************************************************************/
extern int L_ENDSECTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_ENDSECTION_string(const char *str, char **endptr);
extern int string_to_L_ENDSECTION(const char *str, void *pValue, char **endptr);
extern int is_L_ENDSECTION_allow_double_conversion();
extern int L_ENDSECTION_to_double(const void *pValue, double *nValue);
extern int get_L_ENDSECTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_ENDSECTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_ENDSECTION_default_value(void *pValue);
extern SimTypeUtils _Type_L_ENDSECTION_Utils;

/****************************************************************
 ** Q_ENDTIMER 
 ****************************************************************/
extern int Q_ENDTIMER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ENDTIMER_string(const char *str, char **endptr);
extern int string_to_Q_ENDTIMER(const char *str, void *pValue, char **endptr);
extern int is_Q_ENDTIMER_allow_double_conversion();
extern int Q_ENDTIMER_to_double(const void *pValue, double *nValue);
extern int get_Q_ENDTIMER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ENDTIMER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ENDTIMER_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ENDTIMER_Utils;

/****************************************************************
 ** D_ENDTIMERSTARTLOC 
 ****************************************************************/
extern int D_ENDTIMERSTARTLOC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_ENDTIMERSTARTLOC_string(const char *str, char **endptr);
extern int string_to_D_ENDTIMERSTARTLOC(const char *str, void *pValue, char **endptr);
extern int is_D_ENDTIMERSTARTLOC_allow_double_conversion();
extern int D_ENDTIMERSTARTLOC_to_double(const void *pValue, double *nValue);
extern int get_D_ENDTIMERSTARTLOC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_ENDTIMERSTARTLOC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_ENDTIMERSTARTLOC_default_value(void *pValue);
extern SimTypeUtils _Type_D_ENDTIMERSTARTLOC_Utils;

/****************************************************************
 ** V_RELEASEDP 
 ****************************************************************/
extern int V_RELEASEDP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_RELEASEDP_string(const char *str, char **endptr);
extern int string_to_V_RELEASEDP(const char *str, void *pValue, char **endptr);
extern int is_V_RELEASEDP_allow_double_conversion();
extern int V_RELEASEDP_to_double(const void *pValue, double *nValue);
extern int get_V_RELEASEDP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_RELEASEDP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_RELEASEDP_default_value(void *pValue);
extern SimTypeUtils _Type_V_RELEASEDP_Utils;

/****************************************************************
 ** D_STARTOL 
 ****************************************************************/
extern int D_STARTOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_STARTOL_string(const char *str, char **endptr);
extern int string_to_D_STARTOL(const char *str, void *pValue, char **endptr);
extern int is_D_STARTOL_allow_double_conversion();
extern int D_STARTOL_to_double(const void *pValue, double *nValue);
extern int get_D_STARTOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_STARTOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_STARTOL_default_value(void *pValue);
extern SimTypeUtils _Type_D_STARTOL_Utils;

/****************************************************************
 ** T_OL 
 ****************************************************************/
extern int T_OL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_OL_string(const char *str, char **endptr);
extern int string_to_T_OL(const char *str, void *pValue, char **endptr);
extern int is_T_OL_allow_double_conversion();
extern int T_OL_to_double(const void *pValue, double *nValue);
extern int get_T_OL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_OL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_OL_default_value(void *pValue);
extern SimTypeUtils _Type_T_OL_Utils;

/****************************************************************
 ** V_RELEASEOL 
 ****************************************************************/
extern int V_RELEASEOL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_RELEASEOL_string(const char *str, char **endptr);
extern int string_to_V_RELEASEOL(const char *str, void *pValue, char **endptr);
extern int is_V_RELEASEOL_allow_double_conversion();
extern int V_RELEASEOL_to_double(const void *pValue, double *nValue);
extern int get_V_RELEASEOL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_RELEASEOL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_RELEASEOL_default_value(void *pValue);
extern SimTypeUtils _Type_V_RELEASEOL_Utils;

/****************************************************************
 ** D_GRADIENT 
 ****************************************************************/
extern int D_GRADIENT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_GRADIENT_string(const char *str, char **endptr);
extern int string_to_D_GRADIENT(const char *str, void *pValue, char **endptr);
extern int is_D_GRADIENT_allow_double_conversion();
extern int D_GRADIENT_to_double(const void *pValue, double *nValue);
extern int get_D_GRADIENT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_GRADIENT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_GRADIENT_default_value(void *pValue);
extern SimTypeUtils _Type_D_GRADIENT_Utils;

/****************************************************************
 ** Q_GDIR 
 ****************************************************************/
extern int Q_GDIR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_GDIR_string(const char *str, char **endptr);
extern int string_to_Q_GDIR(const char *str, void *pValue, char **endptr);
extern int is_Q_GDIR_allow_double_conversion();
extern int Q_GDIR_to_double(const void *pValue, double *nValue);
extern int get_Q_GDIR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_GDIR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_GDIR_default_value(void *pValue);
extern SimTypeUtils _Type_Q_GDIR_Utils;

/****************************************************************
 ** G_A 
 ****************************************************************/
extern int G_A_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_G_A_string(const char *str, char **endptr);
extern int string_to_G_A(const char *str, void *pValue, char **endptr);
extern int is_G_A_allow_double_conversion();
extern int G_A_to_double(const void *pValue, double *nValue);
extern int get_G_A_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_G_A(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_G_A_default_value(void *pValue);
extern SimTypeUtils _Type_G_A_Utils;

/****************************************************************
 ** M_LEVELTR 
 ****************************************************************/
extern int M_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVELTR_string(const char *str, char **endptr);
extern int string_to_M_LEVELTR(const char *str, void *pValue, char **endptr);
extern int is_M_LEVELTR_allow_double_conversion();
extern int M_LEVELTR_to_double(const void *pValue, double *nValue);
extern int get_M_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVELTR_Utils;

/****************************************************************
 ** NID_NTC 
 ****************************************************************/
extern int NID_NTC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_NTC_string(const char *str, char **endptr);
extern int string_to_NID_NTC(const char *str, void *pValue, char **endptr);
extern int is_NID_NTC_allow_double_conversion();
extern int NID_NTC_to_double(const void *pValue, double *nValue);
extern int get_NID_NTC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_NTC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_NTC_default_value(void *pValue);
extern SimTypeUtils _Type_NID_NTC_Utils;

/****************************************************************
 ** L_ACKLEVELTR 
 ****************************************************************/
extern int L_ACKLEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_ACKLEVELTR_string(const char *str, char **endptr);
extern int string_to_L_ACKLEVELTR(const char *str, void *pValue, char **endptr);
extern int is_L_ACKLEVELTR_allow_double_conversion();
extern int L_ACKLEVELTR_to_double(const void *pValue, double *nValue);
extern int get_L_ACKLEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_ACKLEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_ACKLEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_L_ACKLEVELTR_Utils;

/****************************************************************
 ** D_LEVELTR 
 ****************************************************************/
extern int D_LEVELTR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LEVELTR_string(const char *str, char **endptr);
extern int string_to_D_LEVELTR(const char *str, void *pValue, char **endptr);
extern int is_D_LEVELTR_allow_double_conversion();
extern int D_LEVELTR_to_double(const void *pValue, double *nValue);
extern int get_D_LEVELTR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LEVELTR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LEVELTR_default_value(void *pValue);
extern SimTypeUtils _Type_D_LEVELTR_Utils;

/****************************************************************
 ** D_LINK 
 ****************************************************************/
extern int D_LINK_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LINK_string(const char *str, char **endptr);
extern int string_to_D_LINK(const char *str, void *pValue, char **endptr);
extern int is_D_LINK_allow_double_conversion();
extern int D_LINK_to_double(const void *pValue, double *nValue);
extern int get_D_LINK_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LINK(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LINK_default_value(void *pValue);
extern SimTypeUtils _Type_D_LINK_Utils;

/****************************************************************
 ** Q_NEWCOUNTRY 
 ****************************************************************/
extern int Q_NEWCOUNTRY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NEWCOUNTRY_string(const char *str, char **endptr);
extern int string_to_Q_NEWCOUNTRY(const char *str, void *pValue, char **endptr);
extern int is_Q_NEWCOUNTRY_allow_double_conversion();
extern int Q_NEWCOUNTRY_to_double(const void *pValue, double *nValue);
extern int get_Q_NEWCOUNTRY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NEWCOUNTRY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NEWCOUNTRY_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NEWCOUNTRY_Utils;

/****************************************************************
 ** NID_C 
 ****************************************************************/
extern int NID_C_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_C_string(const char *str, char **endptr);
extern int string_to_NID_C(const char *str, void *pValue, char **endptr);
extern int is_NID_C_allow_double_conversion();
extern int NID_C_to_double(const void *pValue, double *nValue);
extern int get_NID_C_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_C(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_C_default_value(void *pValue);
extern SimTypeUtils _Type_NID_C_Utils;

/****************************************************************
 ** NID_BG 
 ****************************************************************/
extern int NID_BG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_BG_string(const char *str, char **endptr);
extern int string_to_NID_BG(const char *str, void *pValue, char **endptr);
extern int is_NID_BG_allow_double_conversion();
extern int NID_BG_to_double(const void *pValue, double *nValue);
extern int get_NID_BG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_BG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_BG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_BG_Utils;

/****************************************************************
 ** Q_LINKORIENTATION 
 ****************************************************************/
extern int Q_LINKORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_LINKORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKORIENTATION_allow_double_conversion();
extern int Q_LINKORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKORIENTATION_Utils;

/****************************************************************
 ** Q_LINKREACTION 
 ****************************************************************/
extern int Q_LINKREACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LINKREACTION_string(const char *str, char **endptr);
extern int string_to_Q_LINKREACTION(const char *str, void *pValue, char **endptr);
extern int is_Q_LINKREACTION_allow_double_conversion();
extern int Q_LINKREACTION_to_double(const void *pValue, double *nValue);
extern int get_Q_LINKREACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LINKREACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LINKREACTION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LINKREACTION_Utils;

/****************************************************************
 ** Q_LOCACC 
 ****************************************************************/
extern int Q_LOCACC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LOCACC_string(const char *str, char **endptr);
extern int string_to_Q_LOCACC(const char *str, void *pValue, char **endptr);
extern int is_Q_LOCACC_allow_double_conversion();
extern int Q_LOCACC_to_double(const void *pValue, double *nValue);
extern int get_Q_LOCACC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LOCACC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LOCACC_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LOCACC_Utils;

/****************************************************************
 ** L_PACKET 
 ****************************************************************/
extern int L_PACKET_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_PACKET_string(const char *str, char **endptr);
extern int string_to_L_PACKET(const char *str, void *pValue, char **endptr);
extern int is_L_PACKET_allow_double_conversion();
extern int L_PACKET_to_double(const void *pValue, double *nValue);
extern int get_L_PACKET_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_PACKET(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_PACKET_default_value(void *pValue);
extern SimTypeUtils _Type_L_PACKET_Utils;

/****************************************************************
 ** D_STATIC 
 ****************************************************************/
extern int D_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_STATIC_string(const char *str, char **endptr);
extern int string_to_D_STATIC(const char *str, void *pValue, char **endptr);
extern int is_D_STATIC_allow_double_conversion();
extern int D_STATIC_to_double(const void *pValue, double *nValue);
extern int get_D_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_STATIC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_STATIC_default_value(void *pValue);
extern SimTypeUtils _Type_D_STATIC_Utils;

/****************************************************************
 ** V_STATIC 
 ****************************************************************/
extern int V_STATIC_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_STATIC_string(const char *str, char **endptr);
extern int string_to_V_STATIC(const char *str, void *pValue, char **endptr);
extern int is_V_STATIC_allow_double_conversion();
extern int V_STATIC_to_double(const void *pValue, double *nValue);
extern int get_V_STATIC_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_STATIC(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_STATIC_default_value(void *pValue);
extern SimTypeUtils _Type_V_STATIC_Utils;

/****************************************************************
 ** Q_FRONT 
 ****************************************************************/
extern int Q_FRONT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_FRONT_string(const char *str, char **endptr);
extern int string_to_Q_FRONT(const char *str, void *pValue, char **endptr);
extern int is_Q_FRONT_allow_double_conversion();
extern int Q_FRONT_to_double(const void *pValue, double *nValue);
extern int get_Q_FRONT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_FRONT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_FRONT_default_value(void *pValue);
extern SimTypeUtils _Type_Q_FRONT_Utils;

/****************************************************************
 ** NC_DIFF 
 ****************************************************************/
extern int NC_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NC_DIFF_string(const char *str, char **endptr);
extern int string_to_NC_DIFF(const char *str, void *pValue, char **endptr);
extern int is_NC_DIFF_allow_double_conversion();
extern int NC_DIFF_to_double(const void *pValue, double *nValue);
extern int get_NC_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NC_DIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NC_DIFF_default_value(void *pValue);
extern SimTypeUtils _Type_NC_DIFF_Utils;

/****************************************************************
 ** V_DIFF 
 ****************************************************************/
extern int V_DIFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_DIFF_string(const char *str, char **endptr);
extern int string_to_V_DIFF(const char *str, void *pValue, char **endptr);
extern int is_V_DIFF_allow_double_conversion();
extern int V_DIFF_to_double(const void *pValue, double *nValue);
extern int get_V_DIFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_DIFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_DIFF_default_value(void *pValue);
extern SimTypeUtils _Type_V_DIFF_Utils;

/****************************************************************
 ** D_VALIDNV 
 ****************************************************************/
extern int D_VALIDNV_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_VALIDNV_string(const char *str, char **endptr);
extern int string_to_D_VALIDNV(const char *str, void *pValue, char **endptr);
extern int is_D_VALIDNV_allow_double_conversion();
extern int D_VALIDNV_to_double(const void *pValue, double *nValue);
extern int get_D_VALIDNV_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_VALIDNV(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_VALIDNV_default_value(void *pValue);
extern SimTypeUtils _Type_D_VALIDNV_Utils;

/****************************************************************
 ** V_NVSHUNT 
 ****************************************************************/
extern int V_NVSHUNT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSHUNT_string(const char *str, char **endptr);
extern int string_to_V_NVSHUNT(const char *str, void *pValue, char **endptr);
extern int is_V_NVSHUNT_allow_double_conversion();
extern int V_NVSHUNT_to_double(const void *pValue, double *nValue);
extern int get_V_NVSHUNT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSHUNT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSHUNT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSHUNT_Utils;

/****************************************************************
 ** V_NVSTFF 
 ****************************************************************/
extern int V_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSTFF_string(const char *str, char **endptr);
extern int string_to_V_NVSTFF(const char *str, void *pValue, char **endptr);
extern int is_V_NVSTFF_allow_double_conversion();
extern int V_NVSTFF_to_double(const void *pValue, double *nValue);
extern int get_V_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSTFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSTFF_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSTFF_Utils;

/****************************************************************
 ** V_NVONSIGHT 
 ****************************************************************/
extern int V_NVONSIGHT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVONSIGHT_string(const char *str, char **endptr);
extern int string_to_V_NVONSIGHT(const char *str, void *pValue, char **endptr);
extern int is_V_NVONSIGHT_allow_double_conversion();
extern int V_NVONSIGHT_to_double(const void *pValue, double *nValue);
extern int get_V_NVONSIGHT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVONSIGHT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVONSIGHT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVONSIGHT_Utils;

/****************************************************************
 ** V_NVUNFIT 
 ****************************************************************/
extern int V_NVUNFIT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVUNFIT_string(const char *str, char **endptr);
extern int string_to_V_NVUNFIT(const char *str, void *pValue, char **endptr);
extern int is_V_NVUNFIT_allow_double_conversion();
extern int V_NVUNFIT_to_double(const void *pValue, double *nValue);
extern int get_V_NVUNFIT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVUNFIT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVUNFIT_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVUNFIT_Utils;

/****************************************************************
 ** V_NVREL 
 ****************************************************************/
extern int V_NVREL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVREL_string(const char *str, char **endptr);
extern int string_to_V_NVREL(const char *str, void *pValue, char **endptr);
extern int is_V_NVREL_allow_double_conversion();
extern int V_NVREL_to_double(const void *pValue, double *nValue);
extern int get_V_NVREL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVREL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVREL_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVREL_Utils;

/****************************************************************
 ** D_NVROLL 
 ****************************************************************/
extern int D_NVROLL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVROLL_string(const char *str, char **endptr);
extern int string_to_D_NVROLL(const char *str, void *pValue, char **endptr);
extern int is_D_NVROLL_allow_double_conversion();
extern int D_NVROLL_to_double(const void *pValue, double *nValue);
extern int get_D_NVROLL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVROLL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVROLL_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVROLL_Utils;

/****************************************************************
 ** Q_NVSBTSMPERM 
 ****************************************************************/
extern int Q_NVSBTSMPERM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVSBTSMPERM_string(const char *str, char **endptr);
extern int string_to_Q_NVSBTSMPERM(const char *str, void *pValue, char **endptr);
extern int is_Q_NVSBTSMPERM_allow_double_conversion();
extern int Q_NVSBTSMPERM_to_double(const void *pValue, double *nValue);
extern int get_Q_NVSBTSMPERM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVSBTSMPERM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVSBTSMPERM_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVSBTSMPERM_Utils;

/****************************************************************
 ** Q_NVEMRRLS 
 ****************************************************************/
extern int Q_NVEMRRLS_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVEMRRLS_string(const char *str, char **endptr);
extern int string_to_Q_NVEMRRLS(const char *str, void *pValue, char **endptr);
extern int is_Q_NVEMRRLS_allow_double_conversion();
extern int Q_NVEMRRLS_to_double(const void *pValue, double *nValue);
extern int get_Q_NVEMRRLS_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVEMRRLS(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVEMRRLS_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVEMRRLS_Utils;

/****************************************************************
 ** V_NVALLOWOVTRP 
 ****************************************************************/
extern int V_NVALLOWOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVALLOWOVTRP_string(const char *str, char **endptr);
extern int string_to_V_NVALLOWOVTRP(const char *str, void *pValue, char **endptr);
extern int is_V_NVALLOWOVTRP_allow_double_conversion();
extern int V_NVALLOWOVTRP_to_double(const void *pValue, double *nValue);
extern int get_V_NVALLOWOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVALLOWOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVALLOWOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVALLOWOVTRP_Utils;

/****************************************************************
 ** V_NVSUPOVTRP 
 ****************************************************************/
extern int V_NVSUPOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_NVSUPOVTRP_string(const char *str, char **endptr);
extern int string_to_V_NVSUPOVTRP(const char *str, void *pValue, char **endptr);
extern int is_V_NVSUPOVTRP_allow_double_conversion();
extern int V_NVSUPOVTRP_to_double(const void *pValue, double *nValue);
extern int get_V_NVSUPOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_NVSUPOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_NVSUPOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_V_NVSUPOVTRP_Utils;

/****************************************************************
 ** D_NVOVTRP 
 ****************************************************************/
extern int D_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVOVTRP_string(const char *str, char **endptr);
extern int string_to_D_NVOVTRP(const char *str, void *pValue, char **endptr);
extern int is_D_NVOVTRP_allow_double_conversion();
extern int D_NVOVTRP_to_double(const void *pValue, double *nValue);
extern int get_D_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVOVTRP_Utils;

/****************************************************************
 ** T_NVOVTRP 
 ****************************************************************/
extern int T_NVOVTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_NVOVTRP_string(const char *str, char **endptr);
extern int string_to_T_NVOVTRP(const char *str, void *pValue, char **endptr);
extern int is_T_NVOVTRP_allow_double_conversion();
extern int T_NVOVTRP_to_double(const void *pValue, double *nValue);
extern int get_T_NVOVTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_NVOVTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_NVOVTRP_default_value(void *pValue);
extern SimTypeUtils _Type_T_NVOVTRP_Utils;

/****************************************************************
 ** D_NVPOTRP 
 ****************************************************************/
extern int D_NVPOTRP_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVPOTRP_string(const char *str, char **endptr);
extern int string_to_D_NVPOTRP(const char *str, void *pValue, char **endptr);
extern int is_D_NVPOTRP_allow_double_conversion();
extern int D_NVPOTRP_to_double(const void *pValue, double *nValue);
extern int get_D_NVPOTRP_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVPOTRP(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVPOTRP_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVPOTRP_Utils;

/****************************************************************
 ** M_NVCONTACT 
 ****************************************************************/
extern int M_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVCONTACT_string(const char *str, char **endptr);
extern int string_to_M_NVCONTACT(const char *str, void *pValue, char **endptr);
extern int is_M_NVCONTACT_allow_double_conversion();
extern int M_NVCONTACT_to_double(const void *pValue, double *nValue);
extern int get_M_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVCONTACT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVCONTACT_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVCONTACT_Utils;

/****************************************************************
 ** T_NVCONTACT 
 ****************************************************************/
extern int T_NVCONTACT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_NVCONTACT_string(const char *str, char **endptr);
extern int string_to_T_NVCONTACT(const char *str, void *pValue, char **endptr);
extern int is_T_NVCONTACT_allow_double_conversion();
extern int T_NVCONTACT_to_double(const void *pValue, double *nValue);
extern int get_T_NVCONTACT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_NVCONTACT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_NVCONTACT_default_value(void *pValue);
extern SimTypeUtils _Type_T_NVCONTACT_Utils;

/****************************************************************
 ** M_NVDERUN 
 ****************************************************************/
extern int M_NVDERUN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_NVDERUN_string(const char *str, char **endptr);
extern int string_to_M_NVDERUN(const char *str, void *pValue, char **endptr);
extern int is_M_NVDERUN_allow_double_conversion();
extern int M_NVDERUN_to_double(const void *pValue, double *nValue);
extern int get_M_NVDERUN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_NVDERUN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_NVDERUN_default_value(void *pValue);
extern SimTypeUtils _Type_M_NVDERUN_Utils;

/****************************************************************
 ** D_NVSTFF 
 ****************************************************************/
extern int D_NVSTFF_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_NVSTFF_string(const char *str, char **endptr);
extern int string_to_D_NVSTFF(const char *str, void *pValue, char **endptr);
extern int is_D_NVSTFF_allow_double_conversion();
extern int D_NVSTFF_to_double(const void *pValue, double *nValue);
extern int get_D_NVSTFF_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_NVSTFF(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_NVSTFF_default_value(void *pValue);
extern SimTypeUtils _Type_D_NVSTFF_Utils;

/****************************************************************
 ** Q_NVDRIVER_ADHES 
 ****************************************************************/
extern int Q_NVDRIVER_ADHES_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_NVDRIVER_ADHES_string(const char *str, char **endptr);
extern int string_to_Q_NVDRIVER_ADHES(const char *str, void *pValue, char **endptr);
extern int is_Q_NVDRIVER_ADHES_allow_double_conversion();
extern int Q_NVDRIVER_ADHES_to_double(const void *pValue, double *nValue);
extern int get_Q_NVDRIVER_ADHES_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_NVDRIVER_ADHES(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_NVDRIVER_ADHES_default_value(void *pValue);
extern SimTypeUtils _Type_Q_NVDRIVER_ADHES_Utils;

/****************************************************************
 ** M_ERROR 
 ****************************************************************/
extern int M_ERROR_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_ERROR_string(const char *str, char **endptr);
extern int string_to_M_ERROR(const char *str, void *pValue, char **endptr);
extern int is_M_ERROR_allow_double_conversion();
extern int M_ERROR_to_double(const void *pValue, double *nValue);
extern int get_M_ERROR_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_ERROR(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_ERROR_default_value(void *pValue);
extern SimTypeUtils _Type_M_ERROR_Utils;

/****************************************************************
 ** NID_OPERATIONAL 
 ****************************************************************/
extern int NID_OPERATIONAL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_OPERATIONAL_string(const char *str, char **endptr);
extern int string_to_NID_OPERATIONAL(const char *str, void *pValue, char **endptr);
extern int is_NID_OPERATIONAL_allow_double_conversion();
extern int NID_OPERATIONAL_to_double(const void *pValue, double *nValue);
extern int get_NID_OPERATIONAL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_OPERATIONAL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_OPERATIONAL_default_value(void *pValue);
extern SimTypeUtils _Type_NID_OPERATIONAL_Utils;

/****************************************************************
 ** NID_XUSER 
 ****************************************************************/
extern int NID_XUSER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_XUSER_string(const char *str, char **endptr);
extern int string_to_NID_XUSER(const char *str, void *pValue, char **endptr);
extern int is_NID_XUSER_allow_double_conversion();
extern int NID_XUSER_to_double(const void *pValue, double *nValue);
extern int get_NID_XUSER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_XUSER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_XUSER_default_value(void *pValue);
extern SimTypeUtils _Type_NID_XUSER_Utils;

/****************************************************************
 ** NID_ENGINE 
 ****************************************************************/
extern int NID_ENGINE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_ENGINE_string(const char *str, char **endptr);
extern int string_to_NID_ENGINE(const char *str, void *pValue, char **endptr);
extern int is_NID_ENGINE_allow_double_conversion();
extern int NID_ENGINE_to_double(const void *pValue, double *nValue);
extern int get_NID_ENGINE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_ENGINE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_ENGINE_default_value(void *pValue);
extern SimTypeUtils _Type_NID_ENGINE_Utils;

/****************************************************************
 ** Q_STATUS 
 ****************************************************************/
extern int Q_STATUS_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_STATUS_string(const char *str, char **endptr);
extern int string_to_Q_STATUS(const char *str, void *pValue, char **endptr);
extern int is_Q_STATUS_allow_double_conversion();
extern int Q_STATUS_to_double(const void *pValue, double *nValue);
extern int get_Q_STATUS_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_STATUS(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_STATUS_default_value(void *pValue);
extern SimTypeUtils _Type_Q_STATUS_Utils;

/****************************************************************
 ** NID_CTRACTION 
 ****************************************************************/
extern int NID_CTRACTION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_CTRACTION_string(const char *str, char **endptr);
extern int string_to_NID_CTRACTION(const char *str, void *pValue, char **endptr);
extern int is_NID_CTRACTION_allow_double_conversion();
extern int NID_CTRACTION_to_double(const void *pValue, double *nValue);
extern int get_NID_CTRACTION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_CTRACTION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_CTRACTION_default_value(void *pValue);
extern SimTypeUtils _Type_NID_CTRACTION_Utils;

/****************************************************************
 ** D_LRBG 
 ****************************************************************/
extern int D_LRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_LRBG_string(const char *str, char **endptr);
extern int string_to_D_LRBG(const char *str, void *pValue, char **endptr);
extern int is_D_LRBG_allow_double_conversion();
extern int D_LRBG_to_double(const void *pValue, double *nValue);
extern int get_D_LRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_LRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_LRBG_default_value(void *pValue);
extern SimTypeUtils _Type_D_LRBG_Utils;

/****************************************************************
 ** Q_DIRLRBG 
 ****************************************************************/
extern int Q_DIRLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DIRLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRLRBG_allow_double_conversion();
extern int Q_DIRLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRLRBG_Utils;

/****************************************************************
 ** Q_DLRBG 
 ****************************************************************/
extern int Q_DLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DLRBG_string(const char *str, char **endptr);
extern int string_to_Q_DLRBG(const char *str, void *pValue, char **endptr);
extern int is_Q_DLRBG_allow_double_conversion();
extern int Q_DLRBG_to_double(const void *pValue, double *nValue);
extern int get_Q_DLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DLRBG_Utils;

/****************************************************************
 ** L_DOUBTOVER 
 ****************************************************************/
extern int L_DOUBTOVER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_DOUBTOVER_string(const char *str, char **endptr);
extern int string_to_L_DOUBTOVER(const char *str, void *pValue, char **endptr);
extern int is_L_DOUBTOVER_allow_double_conversion();
extern int L_DOUBTOVER_to_double(const void *pValue, double *nValue);
extern int get_L_DOUBTOVER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_DOUBTOVER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_DOUBTOVER_default_value(void *pValue);
extern SimTypeUtils _Type_L_DOUBTOVER_Utils;

/****************************************************************
 ** L_DOUBTUNDER 
 ****************************************************************/
extern int L_DOUBTUNDER_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_DOUBTUNDER_string(const char *str, char **endptr);
extern int string_to_L_DOUBTUNDER(const char *str, void *pValue, char **endptr);
extern int is_L_DOUBTUNDER_allow_double_conversion();
extern int L_DOUBTUNDER_to_double(const void *pValue, double *nValue);
extern int get_L_DOUBTUNDER_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_DOUBTUNDER(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_DOUBTUNDER_default_value(void *pValue);
extern SimTypeUtils _Type_L_DOUBTUNDER_Utils;

/****************************************************************
 ** Q_LENGTH 
 ****************************************************************/
extern int Q_LENGTH_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_LENGTH_string(const char *str, char **endptr);
extern int string_to_Q_LENGTH(const char *str, void *pValue, char **endptr);
extern int is_Q_LENGTH_allow_double_conversion();
extern int Q_LENGTH_to_double(const void *pValue, double *nValue);
extern int get_Q_LENGTH_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_LENGTH(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_LENGTH_default_value(void *pValue);
extern SimTypeUtils _Type_Q_LENGTH_Utils;

/****************************************************************
 ** L_TRAININT 
 ****************************************************************/
extern int L_TRAININT_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TRAININT_string(const char *str, char **endptr);
extern int string_to_L_TRAININT(const char *str, void *pValue, char **endptr);
extern int is_L_TRAININT_allow_double_conversion();
extern int L_TRAININT_to_double(const void *pValue, double *nValue);
extern int get_L_TRAININT_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TRAININT(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TRAININT_default_value(void *pValue);
extern SimTypeUtils _Type_L_TRAININT_Utils;

/****************************************************************
 ** V_TRAIN 
 ****************************************************************/
extern int V_TRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_V_TRAIN_string(const char *str, char **endptr);
extern int string_to_V_TRAIN(const char *str, void *pValue, char **endptr);
extern int is_V_TRAIN_allow_double_conversion();
extern int V_TRAIN_to_double(const void *pValue, double *nValue);
extern int get_V_TRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_V_TRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_V_TRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_V_TRAIN_Utils;

/****************************************************************
 ** Q_DIRTRAIN 
 ****************************************************************/
extern int Q_DIRTRAIN_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_DIRTRAIN_string(const char *str, char **endptr);
extern int string_to_Q_DIRTRAIN(const char *str, void *pValue, char **endptr);
extern int is_Q_DIRTRAIN_allow_double_conversion();
extern int Q_DIRTRAIN_to_double(const void *pValue, double *nValue);
extern int get_Q_DIRTRAIN_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_DIRTRAIN(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_DIRTRAIN_default_value(void *pValue);
extern SimTypeUtils _Type_Q_DIRTRAIN_Utils;

/****************************************************************
 ** M_MODE 
 ****************************************************************/
extern int M_MODE_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_MODE_string(const char *str, char **endptr);
extern int string_to_M_MODE(const char *str, void *pValue, char **endptr);
extern int is_M_MODE_allow_double_conversion();
extern int M_MODE_to_double(const void *pValue, double *nValue);
extern int get_M_MODE_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_MODE(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_MODE_default_value(void *pValue);
extern SimTypeUtils _Type_M_MODE_Utils;

/****************************************************************
 ** M_LEVEL 
 ****************************************************************/
extern int M_LEVEL_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_LEVEL_string(const char *str, char **endptr);
extern int string_to_M_LEVEL(const char *str, void *pValue, char **endptr);
extern int is_M_LEVEL_allow_double_conversion();
extern int M_LEVEL_to_double(const void *pValue, double *nValue);
extern int get_M_LEVEL_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_LEVEL(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_LEVEL_default_value(void *pValue);
extern SimTypeUtils _Type_M_LEVEL_Utils;

/****************************************************************
 ** NID_PRVLRBG 
 ****************************************************************/
extern int NID_PRVLRBG_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_NID_PRVLRBG_string(const char *str, char **endptr);
extern int string_to_NID_PRVLRBG(const char *str, void *pValue, char **endptr);
extern int is_NID_PRVLRBG_allow_double_conversion();
extern int NID_PRVLRBG_to_double(const void *pValue, double *nValue);
extern int get_NID_PRVLRBG_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_NID_PRVLRBG(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_NID_PRVLRBG_default_value(void *pValue);
extern SimTypeUtils _Type_NID_PRVLRBG_Utils;

/****************************************************************
 ** Q_ORIENTATION 
 ****************************************************************/
extern int Q_ORIENTATION_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Q_ORIENTATION_string(const char *str, char **endptr);
extern int string_to_Q_ORIENTATION(const char *str, void *pValue, char **endptr);
extern int is_Q_ORIENTATION_allow_double_conversion();
extern int Q_ORIENTATION_to_double(const void *pValue, double *nValue);
extern int get_Q_ORIENTATION_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Q_ORIENTATION(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Q_ORIENTATION_default_value(void *pValue);
extern SimTypeUtils _Type_Q_ORIENTATION_Utils;

/****************************************************************
 ** D_TAFDISPLAY 
 ****************************************************************/
extern int D_TAFDISPLAY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_D_TAFDISPLAY_string(const char *str, char **endptr);
extern int string_to_D_TAFDISPLAY(const char *str, void *pValue, char **endptr);
extern int is_D_TAFDISPLAY_allow_double_conversion();
extern int D_TAFDISPLAY_to_double(const void *pValue, double *nValue);
extern int get_D_TAFDISPLAY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_D_TAFDISPLAY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_D_TAFDISPLAY_default_value(void *pValue);
extern SimTypeUtils _Type_D_TAFDISPLAY_Utils;

/****************************************************************
 ** L_TAFDISPLAY 
 ****************************************************************/
extern int L_TAFDISPLAY_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_L_TAFDISPLAY_string(const char *str, char **endptr);
extern int string_to_L_TAFDISPLAY(const char *str, void *pValue, char **endptr);
extern int is_L_TAFDISPLAY_allow_double_conversion();
extern int L_TAFDISPLAY_to_double(const void *pValue, double *nValue);
extern int get_L_TAFDISPLAY_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_L_TAFDISPLAY(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_L_TAFDISPLAY_default_value(void *pValue);
extern SimTypeUtils _Type_L_TAFDISPLAY_Utils;

/****************************************************************
 ** M_003_T_TM_radio_messages 
 ****************************************************************/
extern int M_003_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_003_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_003_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_003_T_TM_radio_messages_allow_double_conversion();
extern int M_003_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_003_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_003_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_003_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_003_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrainTrack_MessageHd_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_MessageHd_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_MessageHd_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_MessageHd_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_MessageHd_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_MessageHd_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_MessageHd_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_MessageHd_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_MessageHd_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_MessageHd_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_157_T_TM_radio_messages 
 ****************************************************************/
extern int M_157_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_157_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_157_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_157_T_TM_radio_messages_allow_double_conversion();
extern int M_157_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_157_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_157_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_157_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_157_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrainTrack_Message_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_Message_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_Message_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_Message_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_Message_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_Message_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_Message_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_Message_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_Message_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_Message_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrainTrack_compressed_packets_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrainTrack_compressed_packets_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrack_compressed_packets_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrainTrack_compressed_packets_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrack_compressed_packets_T_TM_radio_messages_allow_double_conversion();
extern int M_TrainTrack_compressed_packets_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrack_compressed_packets_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrack_compressed_packets_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrack_compressed_packets_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrack_compressed_packets_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_027_T_TM_radio_messages 
 ****************************************************************/
extern int M_027_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_027_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_027_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_027_T_TM_radio_messages_allow_double_conversion();
extern int M_027_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_027_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_027_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_027_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_027_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_TrackTrain_Radio_T_TM_radio_messages 
 ****************************************************************/
extern int M_TrackTrain_Radio_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrackTrain_Radio_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_TrackTrain_Radio_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_TrackTrain_Radio_T_TM_radio_messages_allow_double_conversion();
extern int M_TrackTrain_Radio_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_TrackTrain_Radio_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrackTrain_Radio_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrackTrain_Radio_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_024_T_TM_radio_messages 
 ****************************************************************/
extern int M_024_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_024_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_024_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_024_T_TM_radio_messages_allow_double_conversion();
extern int M_024_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_024_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_024_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_024_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_024_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_018_T_TM_radio_messages 
 ****************************************************************/
extern int M_018_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_018_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_018_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_018_T_TM_radio_messages_allow_double_conversion();
extern int M_018_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_018_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_018_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_018_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_018_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_016_T_TM_radio_messages 
 ****************************************************************/
extern int M_016_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_016_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_016_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_016_T_TM_radio_messages_allow_double_conversion();
extern int M_016_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_016_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_016_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_016_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_016_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_015_T_TM_radio_messages 
 ****************************************************************/
extern int M_015_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_015_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_015_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_015_T_TM_radio_messages_allow_double_conversion();
extern int M_015_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_015_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_015_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_015_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_015_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_009_T_TM_radio_messages 
 ****************************************************************/
extern int M_009_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_009_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_009_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_009_T_TM_radio_messages_allow_double_conversion();
extern int M_009_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_009_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_009_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_009_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_009_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_008_T_TM_radio_messages 
 ****************************************************************/
extern int M_008_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_008_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_008_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_008_T_TM_radio_messages_allow_double_conversion();
extern int M_008_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_008_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_008_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_008_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_008_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_006_T_TM_radio_messages 
 ****************************************************************/
extern int M_006_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_006_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_006_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_006_T_TM_radio_messages_allow_double_conversion();
extern int M_006_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_006_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_006_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_006_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_006_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_002_T_TM_radio_messages 
 ****************************************************************/
extern int M_002_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_002_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_002_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_002_T_TM_radio_messages_allow_double_conversion();
extern int M_002_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_002_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_002_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_002_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_002_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_045_T_TM_radio_messages 
 ****************************************************************/
extern int M_045_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_045_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_045_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_045_T_TM_radio_messages_allow_double_conversion();
extern int M_045_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_045_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_045_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_045_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_045_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_043_T_TM_radio_messages 
 ****************************************************************/
extern int M_043_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_043_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_043_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_043_T_TM_radio_messages_allow_double_conversion();
extern int M_043_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_043_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_043_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_043_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_043_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_041_T_TM_radio_messages 
 ****************************************************************/
extern int M_041_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_041_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_041_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_041_T_TM_radio_messages_allow_double_conversion();
extern int M_041_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_041_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_041_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_041_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_041_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_040_T_TM_radio_messages 
 ****************************************************************/
extern int M_040_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_040_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_040_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_040_T_TM_radio_messages_allow_double_conversion();
extern int M_040_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_040_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_040_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_040_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_040_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_039_T_TM_radio_messages 
 ****************************************************************/
extern int M_039_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_039_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_039_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_039_T_TM_radio_messages_allow_double_conversion();
extern int M_039_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_039_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_039_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_039_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_039_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_038_T_TM_radio_messages 
 ****************************************************************/
extern int M_038_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_038_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_038_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_038_T_TM_radio_messages_allow_double_conversion();
extern int M_038_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_038_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_038_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_038_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_038_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_034_T_TM_radio_messages 
 ****************************************************************/
extern int M_034_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_034_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_034_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_034_T_TM_radio_messages_allow_double_conversion();
extern int M_034_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_034_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_034_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_034_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_034_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_033_T_TM_radio_messages 
 ****************************************************************/
extern int M_033_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_033_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_033_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_033_T_TM_radio_messages_allow_double_conversion();
extern int M_033_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_033_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_033_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_033_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_033_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_032_T_TM_radio_messages 
 ****************************************************************/
extern int M_032_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_032_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_032_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_032_T_TM_radio_messages_allow_double_conversion();
extern int M_032_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_032_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_032_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_032_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_032_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_028_T_TM_radio_messages 
 ****************************************************************/
extern int M_028_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_028_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_028_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_028_T_TM_radio_messages_allow_double_conversion();
extern int M_028_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_028_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_028_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_028_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_028_T_TM_radio_messages_Utils;

/****************************************************************
 ** M_003_int_T_TM_radio_messages 
 ****************************************************************/
extern int M_003_int_T_TM_radio_messages_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_003_int_T_TM_radio_messages_string(const char *str, char **endptr);
extern int string_to_M_003_int_T_TM_radio_messages(const char *str, void *pValue, char **endptr);
extern int is_M_003_int_T_TM_radio_messages_allow_double_conversion();
extern int M_003_int_T_TM_radio_messages_to_double(const void *pValue, double *nValue);
extern int get_M_003_int_T_TM_radio_messages_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_003_int_T_TM_radio_messages(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_003_int_T_TM_radio_messages_default_value(void *pValue);
extern SimTypeUtils _Type_M_003_int_T_TM_radio_messages_Utils;

/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg 
 ****************************************************************/
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_conversion();
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Radio_TrackTrain_Header_T_Radio_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg 
 ****************************************************************/
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char *str, char **endptr);
extern int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char *str, void *pValue, char **endptr);
extern int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_conversion();
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_double(const void *pValue, double *nValue);
extern int get_T_internal_Type_Obu_BasicTypes_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_T_internal_Type_Obu_BasicTypes_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_T_internal_Type_Obu_BasicTypes_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils;

/****************************************************************
 ** Array06_TM 
 ****************************************************************/
extern int Array06_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array06_TM_string(const char *str, char **endptr);
extern int string_to_Array06_TM(const char *str, void *pValue, char **endptr);
extern int is_Array06_TM_allow_double_conversion();
extern int Array06_TM_to_double(const void *pValue, double *nValue);
extern int get_Array06_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array06_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array06_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array06_TM_Utils;

/****************************************************************
 ** P015_section_enum_T_TM 
 ****************************************************************/
extern int P015_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_enum_T_TM_allow_double_conversion();
extern int P015_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_enum_T_TM_Utils;

/****************************************************************
 ** P015_sections_array_flat_T_TM 
 ****************************************************************/
extern int P015_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_sections_array_flat_T_TM_allow_double_conversion();
extern int P015_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** Array15_TM 
 ****************************************************************/
extern int Array15_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array15_TM_string(const char *str, char **endptr);
extern int string_to_Array15_TM(const char *str, void *pValue, char **endptr);
extern int is_Array15_TM_allow_double_conversion();
extern int Array15_TM_to_double(const void *pValue, double *nValue);
extern int get_Array15_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array15_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array15_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array15_TM_Utils;

/****************************************************************
 ** P015_OBU_T_TM 
 ****************************************************************/
extern int P015_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_T_TM_allow_double_conversion();
extern int P015_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_T_TM_Utils;

/****************************************************************
 ** P021_section_enum_T_TM 
 ****************************************************************/
extern int P021_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_enum_T_TM_allow_double_conversion();
extern int P021_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_enum_T_TM_Utils;

/****************************************************************
 ** P021_sections_array_flat_T_TM 
 ****************************************************************/
extern int P021_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_sections_array_flat_T_TM_allow_double_conversion();
extern int P021_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P021_OBU_T_TM 
 ****************************************************************/
extern int P021_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_T_TM_allow_double_conversion();
extern int P021_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_T_TM_Utils;

/****************************************************************
 ** Array05_TM 
 ****************************************************************/
extern int Array05_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array05_TM_string(const char *str, char **endptr);
extern int string_to_Array05_TM(const char *str, void *pValue, char **endptr);
extern int is_Array05_TM_allow_double_conversion();
extern int Array05_TM_to_double(const void *pValue, double *nValue);
extern int get_Array05_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array05_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array05_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array05_TM_Utils;

/****************************************************************
 ** P041_section_enum_T_TM 
 ****************************************************************/
extern int P041_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_enum_T_TM_allow_double_conversion();
extern int P041_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_enum_T_TM_Utils;

/****************************************************************
 ** P041_sections_array_flat_T_TM 
 ****************************************************************/
extern int P041_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_sections_array_flat_T_TM_allow_double_conversion();
extern int P041_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P041_OBU_T_TM 
 ****************************************************************/
extern int P041_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_T_TM_allow_double_conversion();
extern int P041_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_T_TM_Utils;

/****************************************************************
 ** P005_section_enum_T_TM 
 ****************************************************************/
extern int P005_section_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_enum_T_TM_allow_double_conversion();
extern int P005_section_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_enum_T_TM_Utils;

/****************************************************************
 ** P005_sections_array_flat_T_TM 
 ****************************************************************/
extern int P005_sections_array_flat_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_sections_array_flat_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_sections_array_flat_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_sections_array_flat_T_TM_allow_double_conversion();
extern int P005_sections_array_flat_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_sections_array_flat_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_sections_array_flat_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_sections_array_flat_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_sections_array_flat_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_enum_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_enum_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_enum_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_enum_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_enum_T_TM_allow_double_conversion();
extern int P005_OBU_sectionlist_enum_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_enum_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_enum_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_enum_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_enum_T_TM_Utils;

/****************************************************************
 ** P005_OBU_T_TM 
 ****************************************************************/
extern int P005_OBU_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_T_TM_allow_double_conversion();
extern int P005_OBU_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_T_TM_Utils;

/****************************************************************
 ** Array03_TM 
 ****************************************************************/
extern int Array03_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array03_TM_string(const char *str, char **endptr);
extern int string_to_Array03_TM(const char *str, void *pValue, char **endptr);
extern int is_Array03_TM_allow_double_conversion();
extern int Array03_TM_to_double(const void *pValue, double *nValue);
extern int get_Array03_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array03_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array03_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array03_TM_Utils;

/****************************************************************
 ** Array24_TM 
 ****************************************************************/
extern int Array24_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Array24_TM_string(const char *str, char **endptr);
extern int string_to_Array24_TM(const char *str, void *pValue, char **endptr);
extern int is_Array24_TM_allow_double_conversion();
extern int Array24_TM_to_double(const void *pValue, double *nValue);
extern int get_Array24_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Array24_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Array24_TM_default_value(void *pValue);
extern SimTypeUtils _Type_Array24_TM_Utils;

/****************************************************************
 ** CompressedBaliseMessage_TM 
 ****************************************************************/
extern int CompressedBaliseMessage_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedBaliseMessage_TM_string(const char *str, char **endptr);
extern int string_to_CompressedBaliseMessage_TM(const char *str, void *pValue, char **endptr);
extern int is_CompressedBaliseMessage_TM_allow_double_conversion();
extern int CompressedBaliseMessage_TM_to_double(const void *pValue, double *nValue);
extern int get_CompressedBaliseMessage_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedBaliseMessage_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedBaliseMessage_TM_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedBaliseMessage_TM_Utils;

/****************************************************************
 ** BaliseTelegramHeader_int_T_TM 
 ****************************************************************/
extern int BaliseTelegramHeader_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseTelegramHeader_int_T_TM_string(const char *str, char **endptr);
extern int string_to_BaliseTelegramHeader_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseTelegramHeader_int_T_TM_allow_double_conversion();
extern int BaliseTelegramHeader_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseTelegramHeader_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseTelegramHeader_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseTelegramHeader_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseTelegramHeader_int_T_TM_Utils;

/****************************************************************
 ** P021_trackside_int_T_TM 
 ****************************************************************/
extern int P021_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_trackside_int_T_TM_allow_double_conversion();
extern int P021_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_trackside_int_T_TM_Utils;

/****************************************************************
 ** P021_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P021_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P021_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P021_section_int_T_TM 
 ****************************************************************/
extern int P021_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_int_T_TM_allow_double_conversion();
extern int P021_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_int_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P021_section_array_T_TM 
 ****************************************************************/
extern int P021_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_section_array_T_TM_allow_double_conversion();
extern int P021_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_section_array_T_TM_Utils;

/****************************************************************
 ** P021_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P021_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P021_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P021_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P021_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P021_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P021_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P021_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P021_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P021_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** nid_packet_meta_TM 
 ****************************************************************/
extern int nid_packet_meta_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_nid_packet_meta_TM_string(const char *str, char **endptr);
extern int string_to_nid_packet_meta_TM(const char *str, void *pValue, char **endptr);
extern int is_nid_packet_meta_TM_allow_double_conversion();
extern int nid_packet_meta_TM_to_double(const void *pValue, double *nValue);
extern int get_nid_packet_meta_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_nid_packet_meta_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_nid_packet_meta_TM_default_value(void *pValue);
extern SimTypeUtils _Type_nid_packet_meta_TM_Utils;

/****************************************************************
 ** P005_trackside_int_T_TM 
 ****************************************************************/
extern int P005_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackside_int_T_TM_allow_double_conversion();
extern int P005_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackside_int_T_TM_Utils;

/****************************************************************
 ** P005_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P005_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P005_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P005_section_int_T_TM 
 ****************************************************************/
extern int P005_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_int_T_TM_allow_double_conversion();
extern int P005_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_int_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P005_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P005_section_array_T_TM 
 ****************************************************************/
extern int P005_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_section_array_T_TM_allow_double_conversion();
extern int P005_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_section_array_T_TM_Utils;

/****************************************************************
 ** P005_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P005_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P005_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P005_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P005_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P005_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P005_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P041_trackside_int_T_TM 
 ****************************************************************/
extern int P041_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackside_int_T_TM_allow_double_conversion();
extern int P041_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackside_int_T_TM_Utils;

/****************************************************************
 ** P041_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P041_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P041_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P041_section_int_T_TM 
 ****************************************************************/
extern int P041_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_int_T_TM_allow_double_conversion();
extern int P041_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_int_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P041_section_array_T_TM 
 ****************************************************************/
extern int P041_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_section_array_T_TM_allow_double_conversion();
extern int P041_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_section_array_T_TM_Utils;

/****************************************************************
 ** P041_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P041_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P041_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P041_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P041_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P041_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P041_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P041_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P041_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P041_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** P065_trackside_int_T_TM 
 ****************************************************************/
extern int P065_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P065_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P065_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P065_trackside_int_T_TM_allow_double_conversion();
extern int P065_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P065_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P065_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P065_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P065_trackside_int_T_TM_Utils;

/****************************************************************
 ** P015_trackside_int_T_TM 
 ****************************************************************/
extern int P015_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_trackside_int_T_TM_allow_double_conversion();
extern int P015_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_trackside_int_T_TM_Utils;

/****************************************************************
 ** P015_trackide_sectionlist_T_TM 
 ****************************************************************/
extern int P015_trackide_sectionlist_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_trackide_sectionlist_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_trackide_sectionlist_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_trackide_sectionlist_T_TM_allow_double_conversion();
extern int P015_trackide_sectionlist_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_trackide_sectionlist_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_trackide_sectionlist_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_trackide_sectionlist_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_trackide_sectionlist_T_TM_Utils;

/****************************************************************
 ** P015_section_int_T_TM 
 ****************************************************************/
extern int P015_section_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_int_T_TM_allow_double_conversion();
extern int P015_section_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_int_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_array_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_array_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_array_T_TM_Utils;

/****************************************************************
 ** P015_section_array_T_TM 
 ****************************************************************/
extern int P015_section_array_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_section_array_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_section_array_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_section_array_T_TM_allow_double_conversion();
extern int P015_section_array_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_section_array_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_section_array_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_section_array_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_section_array_T_TM_Utils;

/****************************************************************
 ** P015_OBU_sectionlist_int_T_TM 
 ****************************************************************/
extern int P015_OBU_sectionlist_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P015_OBU_sectionlist_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P015_OBU_sectionlist_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P015_OBU_sectionlist_int_T_TM_allow_double_conversion();
extern int P015_OBU_sectionlist_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P015_OBU_sectionlist_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P015_OBU_sectionlist_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P015_OBU_sectionlist_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P015_OBU_sectionlist_int_T_TM_Utils;

/****************************************************************
 ** OrBG_TM 
 ****************************************************************/
extern int OrBG_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrBG_TM_string(const char *str, char **endptr);
extern int string_to_OrBG_TM(const char *str, void *pValue, char **endptr);
extern int is_OrBG_TM_allow_double_conversion();
extern int OrBG_TM_to_double(const void *pValue, double *nValue);
extern int get_OrBG_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrBG_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrBG_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrBG_TM_Utils;

/****************************************************************
 ** OrLine_TM 
 ****************************************************************/
extern int OrLine_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_OrLine_TM_string(const char *str, char **endptr);
extern int string_to_OrLine_TM(const char *str, void *pValue, char **endptr);
extern int is_OrLine_TM_allow_double_conversion();
extern int OrLine_TM_to_double(const void *pValue, double *nValue);
extern int get_OrLine_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_OrLine_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_OrLine_TM_default_value(void *pValue);
extern SimTypeUtils _Type_OrLine_TM_Utils;

/****************************************************************
 ** P255_trackside_int_T_TM 
 ****************************************************************/
extern int P255_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P255_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P255_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P255_trackside_int_T_TM_allow_double_conversion();
extern int P255_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P255_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P255_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P255_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P255_trackside_int_T_TM_Utils;

/****************************************************************
 ** P045_trackside_int_T_TM 
 ****************************************************************/
extern int P045_trackside_int_T_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P045_trackside_int_T_TM_string(const char *str, char **endptr);
extern int string_to_P045_trackside_int_T_TM(const char *str, void *pValue, char **endptr);
extern int is_P045_trackside_int_T_TM_allow_double_conversion();
extern int P045_trackside_int_T_TM_to_double(const void *pValue, double *nValue);
extern int get_P045_trackside_int_T_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P045_trackside_int_T_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P045_trackside_int_T_TM_default_value(void *pValue);
extern SimTypeUtils _Type_P045_trackside_int_T_TM_Utils;

/****************************************************************
 ** BaliseGroupData_TM 
 ****************************************************************/
extern int BaliseGroupData_TM_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_TM_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_TM(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_TM_allow_double_conversion();
extern int BaliseGroupData_TM_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_TM_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_TM(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_TM_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_TM_Utils;

/****************************************************************
 ** M_TrainTrackMessage_buffer_t_TM_lib_internal 
 ****************************************************************/
extern int M_TrainTrackMessage_buffer_t_TM_lib_internal_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrackMessage_buffer_t_TM_lib_internal_string(const char *str, char **endptr);
extern int string_to_M_TrainTrackMessage_buffer_t_TM_lib_internal(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrackMessage_buffer_t_TM_lib_internal_allow_double_conversion();
extern int M_TrainTrackMessage_buffer_t_TM_lib_internal_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrackMessage_buffer_t_TM_lib_internal_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrackMessage_buffer_t_TM_lib_internal(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrackMessage_buffer_t_TM_lib_internal_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrackMessage_buffer_t_TM_lib_internal_Utils;

/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg 
 ****************************************************************/
extern int MetadataElement_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_MetadataElement_T_Common_Types_Pkg_allow_double_conversion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_MetadataElement_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_MetadataElement_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_MetadataElement_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_MetadataElement_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** Metadata_T_Common_Types_Pkg 
 ****************************************************************/
extern int Metadata_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_Metadata_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_Metadata_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_Metadata_T_Common_Types_Pkg_allow_double_conversion();
extern int Metadata_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_Metadata_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_Metadata_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_Metadata_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_Metadata_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPacketData_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPacketData_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPacketData_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPacketData_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPacketData_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg 
 ****************************************************************/
extern int CompressedPackets_T_Common_Types_Pkg_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char *str, char **endptr);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char *str, void *pValue, char **endptr);
extern int is_CompressedPackets_T_Common_Types_Pkg_allow_double_conversion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(const void *pValue, double *nValue);
extern int get_CompressedPackets_T_Common_Types_Pkg_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_CompressedPackets_T_Common_Types_Pkg(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_CompressedPackets_T_Common_Types_Pkg_default_value(void *pValue);
extern SimTypeUtils _Type_CompressedPackets_T_Common_Types_Pkg_Utils;

/****************************************************************
 ** P027V1_OBU_body_enum_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_body_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_body_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_body_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_body_enum_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_body_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_body_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_body_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_body_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_body_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_enum_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_enum_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_enum_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_enum_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_enum_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_enum_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_enum_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_enum_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_enum_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_enum_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_sections_array_flat_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_sections_array_flat_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_sections_array_flat_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_sections_array_flat_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_sections_array_flat_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_sections_array_flat_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_sections_array_flat_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_sections_array_flat_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_T_TM_baseline2_Utils;

/****************************************************************
 ** _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_section_enum_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_section_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_section_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_section_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_section_enum_T_TM_baseline2_allow_double_conversion();
extern int P003V1_section_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_section_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_section_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_section_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_section_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_OBU_sectionlist_int_T_TM_baseline2_allow_double_conversion();
extern int P003V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_OBU_sectionlist_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_OBU_sectionlist_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_sectionlist_enum_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_sectionlist_enum_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_sectionlist_enum_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_sectionlist_enum_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_sectionlist_enum_T_TM_baseline2_allow_double_conversion();
extern int P003V1_sectionlist_enum_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_sectionlist_enum_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_sectionlist_enum_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_sectionlist_enum_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_sectionlist_enum_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_OBU_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_OBU_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_OBU_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_OBU_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_OBU_T_TM_baseline2_allow_double_conversion();
extern int P003V1_OBU_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_OBU_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_OBU_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_OBU_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_OBU_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_qdifflist_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_qdifflist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_qdifflist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_qdifflist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_qdifflist_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_qdifflist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_qdifflist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_qdifflist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_qdifflist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_int_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_trackside_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_trackside_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_trackside_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_trackside_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_trackside_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int P027V1_trackside_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_trackside_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_trackside_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_trackside_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_int_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_int_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_int_T_TM_baseline2_Utils;

/****************************************************************
 ** _2_P027V1_OBU_sectionlist_int_T_TM_baseline2 
 ****************************************************************/
extern int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_allow_double_conversion();
extern int _2_P027V1_OBU_sectionlist_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__2_P027V1_OBU_sectionlist_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils;

/****************************************************************
 ** _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_allow_double_conversion();
extern int _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_section_array_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_section_array_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_section_array_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_section_array_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_section_array_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_section_array_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_section_array_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_section_array_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_section_array_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 
 ****************************************************************/
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_allow_double_conversion();
extern int P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_trackside_int_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackside_int_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackside_int_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackside_int_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackside_int_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackside_int_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackside_int_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackside_int_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackside_int_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackside_int_T_TM_baseline2_Utils;

/****************************************************************
 ** P003V1_trackide_sectionlist_T_TM_baseline2 
 ****************************************************************/
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P003V1_trackide_sectionlist_T_TM_baseline2_string(const char *str, char **endptr);
extern int string_to_P003V1_trackide_sectionlist_T_TM_baseline2(const char *str, void *pValue, char **endptr);
extern int is_P003V1_trackide_sectionlist_T_TM_baseline2_allow_double_conversion();
extern int P003V1_trackide_sectionlist_T_TM_baseline2_to_double(const void *pValue, double *nValue);
extern int get_P003V1_trackide_sectionlist_T_TM_baseline2_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P003V1_trackide_sectionlist_T_TM_baseline2(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P003V1_trackide_sectionlist_T_TM_baseline2_default_value(void *pValue);
extern SimTypeUtils _Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils;

/****************************************************************
 ** P004_TM_TrainToTrack 
 ****************************************************************/
extern int P004_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P004_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P004_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P004_TM_TrainToTrack_allow_double_conversion();
extern int P004_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P004_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P004_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P004_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P004_TM_TrainToTrack_Utils;

/****************************************************************
 ** P004_TrainTrack_int_TM_TrainToTrack 
 ****************************************************************/
extern int P004_TrainTrack_int_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P004_TrainTrack_int_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P004_TrainTrack_int_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P004_TrainTrack_int_TM_TrainToTrack_allow_double_conversion();
extern int P004_TrainTrack_int_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P004_TrainTrack_int_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P004_TrainTrack_int_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P004_TrainTrack_int_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P004_TrainTrack_int_TM_TrainToTrack_Utils;

/****************************************************************
 ** P005_TM_TrainToTrack 
 ****************************************************************/
extern int P005_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P005_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P005_TM_TrainToTrack_allow_double_conversion();
extern int P005_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P005_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P005_TM_TrainToTrack_Utils;

/****************************************************************
 ** P005_TrainTrack_int_TM_TrainToTrack 
 ****************************************************************/
extern int P005_TrainTrack_int_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P005_TrainTrack_int_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P005_TrainTrack_int_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P005_TrainTrack_int_TM_TrainToTrack_allow_double_conversion();
extern int P005_TrainTrack_int_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P005_TrainTrack_int_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P005_TrainTrack_int_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P005_TrainTrack_int_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P005_TrainTrack_int_TM_TrainToTrack_Utils;

/****************************************************************
 ** P044_TrainTrack_int_TM_TrainToTrack 
 ****************************************************************/
extern int P044_TrainTrack_int_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P044_TrainTrack_int_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P044_TrainTrack_int_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P044_TrainTrack_int_TM_TrainToTrack_allow_double_conversion();
extern int P044_TrainTrack_int_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P044_TrainTrack_int_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P044_TrainTrack_int_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P044_TrainTrack_int_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P044_TrainTrack_int_TM_TrainToTrack_Utils;

/****************************************************************
 ** P044_TM_TrainToTrack 
 ****************************************************************/
extern int P044_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P044_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P044_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P044_TM_TrainToTrack_allow_double_conversion();
extern int P044_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P044_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P044_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P044_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P044_TM_TrainToTrack_Utils;

/****************************************************************
 ** P044_other_data_TM_TrainToTrack 
 ****************************************************************/
extern int P044_other_data_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P044_other_data_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P044_other_data_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P044_other_data_TM_TrainToTrack_allow_double_conversion();
extern int P044_other_data_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P044_other_data_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P044_other_data_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P044_other_data_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P044_other_data_TM_TrainToTrack_Utils;

/****************************************************************
 ** P000_TM_TrainToTrack 
 ****************************************************************/
extern int P000_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P000_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P000_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P000_TM_TrainToTrack_allow_double_conversion();
extern int P000_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P000_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P000_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P000_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P000_TM_TrainToTrack_Utils;

/****************************************************************
 ** P000_TrainTrack_int_TM_TrainToTrack 
 ****************************************************************/
extern int P000_TrainTrack_int_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P000_TrainTrack_int_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P000_TrainTrack_int_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P000_TrainTrack_int_TM_TrainToTrack_allow_double_conversion();
extern int P000_TrainTrack_int_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P000_TrainTrack_int_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P000_TrainTrack_int_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P000_TrainTrack_int_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P000_TrainTrack_int_TM_TrainToTrack_Utils;

/****************************************************************
 ** P001_TM_TrainToTrack 
 ****************************************************************/
extern int P001_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P001_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P001_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P001_TM_TrainToTrack_allow_double_conversion();
extern int P001_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P001_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P001_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P001_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P001_TM_TrainToTrack_Utils;

/****************************************************************
 ** P001_TrainTrack_int_TM_TrainToTrack 
 ****************************************************************/
extern int P001_TrainTrack_int_TM_TrainToTrack_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_P001_TrainTrack_int_TM_TrainToTrack_string(const char *str, char **endptr);
extern int string_to_P001_TrainTrack_int_TM_TrainToTrack(const char *str, void *pValue, char **endptr);
extern int is_P001_TrainTrack_int_TM_TrainToTrack_allow_double_conversion();
extern int P001_TrainTrack_int_TM_TrainToTrack_to_double(const void *pValue, double *nValue);
extern int get_P001_TrainTrack_int_TM_TrainToTrack_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_P001_TrainTrack_int_TM_TrainToTrack(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_P001_TrainTrack_int_TM_TrainToTrack_default_value(void *pValue);
extern SimTypeUtils _Type_P001_TrainTrack_int_TM_TrainToTrack_Utils;

/****************************************************************
 ** M_TrainTrackMessageBus_t_TM_TrainTrack_Bus 
 ****************************************************************/
extern int M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_string(const char *str, char **endptr);
extern int string_to_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(const char *str, void *pValue, char **endptr);
extern int is_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_allow_double_conversion();
extern int M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_to_double(const void *pValue, double *nValue);
extern int get_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_default_value(void *pValue);
extern SimTypeUtils _Type_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus_Utils;

/****************************************************************
 ** R_data_internal_T_InfraLib 
 ****************************************************************/
extern int R_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_R_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_R_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_R_data_internal_T_InfraLib_allow_double_conversion();
extern int R_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_R_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_R_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_R_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_R_data_internal_T_InfraLib_Utils;

/****************************************************************
 ** B_data_internal_T_InfraLib 
 ****************************************************************/
extern int B_data_internal_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_B_data_internal_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_B_data_internal_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_B_data_internal_T_InfraLib_allow_double_conversion();
extern int B_data_internal_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_B_data_internal_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_B_data_internal_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_B_data_internal_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_B_data_internal_T_InfraLib_Utils;

/****************************************************************
 ** TrackSectionData_T_InfraLib 
 ****************************************************************/
extern int TrackSectionData_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrackSectionData_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrackSectionData_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrackSectionData_T_InfraLib_allow_double_conversion();
extern int TrackSectionData_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrackSectionData_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrackSectionData_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrackSectionData_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrackSectionData_T_InfraLib_Utils;

/****************************************************************
 ** TrainPosRaw_T_InfraLib 
 ****************************************************************/
extern int TrainPosRaw_T_InfraLib_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_TrainPosRaw_T_InfraLib_string(const char *str, char **endptr);
extern int string_to_TrainPosRaw_T_InfraLib(const char *str, void *pValue, char **endptr);
extern int is_TrainPosRaw_T_InfraLib_allow_double_conversion();
extern int TrainPosRaw_T_InfraLib_to_double(const void *pValue, double *nValue);
extern int get_TrainPosRaw_T_InfraLib_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_TrainPosRaw_T_InfraLib(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_TrainPosRaw_T_InfraLib_default_value(void *pValue);
extern SimTypeUtils _Type_TrainPosRaw_T_InfraLib_Utils;

/****************************************************************
 ** BaliseGroupData_Basics 
 ****************************************************************/
extern int BaliseGroupData_Basics_to_string(const void *pValue, PFNSTRAPPEND pfnStrAppend, void *pData);
extern int check_BaliseGroupData_Basics_string(const char *str, char **endptr);
extern int string_to_BaliseGroupData_Basics(const char *str, void *pValue, char **endptr);
extern int is_BaliseGroupData_Basics_allow_double_conversion();
extern int BaliseGroupData_Basics_to_double(const void *pValue, double *nValue);
extern int get_BaliseGroupData_Basics_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern void compare_BaliseGroupData_Basics(int *nStatus, const void *pValue1, const void *pValue2, void *pData, const char *pszPath, PFNSTRAPPEND pfnStrListAppend, void *pListErrPaths);
extern int set_BaliseGroupData_Basics_default_value(void *pValue);
extern SimTypeUtils _Type_BaliseGroupData_Basics_Utils;


#endif /*MEN_DEMONSTRATOR_TYPES_CONVERSION */
