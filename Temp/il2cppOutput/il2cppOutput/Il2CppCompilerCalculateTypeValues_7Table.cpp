﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t3440565878;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1952629169;
// System.Text.DecoderFallback
struct DecoderFallback_t1076525380;
// System.Text.EncoderFallback
struct EncoderFallback_t2886011065;
// System.Reflection.Assembly
struct Assembly_t2995492547;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t3165239236;
// System.Object[]
struct ObjectU5BU5D_t2640533940;
// System.Text.Encoding
struct Encoding_t4152569411;
// System.Byte[]
struct ByteU5BU5D_t790048969;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t4007383332;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2551749648;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t578525927;
// System.Collections.ArrayList
struct ArrayList_t2105504018;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1090004131;
// System.Collections.IEnumerator
struct IEnumerator_t2688600795;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t1473846340;
// System.Version
struct Version_t1834903876;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1093455032;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t3541188788;
// System.Collections.Hashtable
struct Hashtable_t1881663185;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t500991301;
// System.Char[]
struct CharU5BU5D_t233192964;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4037442205;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3048023816;
// System.UInt32[]
struct UInt32U5BU5D_t3484520041;
// System.UInt64[]
struct UInt64U5BU5D_t1986694663;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t111540951;
// System.Void
struct Void_t3911667008;
// System.AppDomain
struct AppDomain_t3513054594;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t3784804660;
// System.Security.Cryptography.RSA
struct RSA_t3399184103;
// System.Security.Cryptography.DESTransform
struct DESTransform_t29700371;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t230145952;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2840070564;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2661590508;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t3011774220;
// System.Security.Policy.Evidence
struct Evidence_t620674145;
// System.Threading.CompressedStack
struct CompressedStack_t2098124453;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2900656082;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3736283333;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2939961003;
// System.Security.SecurityElement
struct SecurityElement_t2041609139;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T3765817724_H
#define EXCEPTION_T3765817724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3765817724  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3440565878* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3765817724 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3440565878* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3440565878** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3440565878* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___inner_exception_1)); }
	inline Exception_t3765817724 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3765817724 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3765817724 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3765817724, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3765817724_H
#ifndef ENCODING_T4152569411_H
#define ENCODING_T4152569411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t4152569411  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t1076525380 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t2886011065 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_9;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_10;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_11;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_12;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_13;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_14;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_15;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_16;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___decoder_fallback_3)); }
	inline DecoderFallback_t1076525380 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t1076525380 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t1076525380 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___encoder_fallback_4)); }
	inline EncoderFallback_t2886011065 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t2886011065 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t2886011065 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_9() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___body_name_9)); }
	inline String_t* get_body_name_9() const { return ___body_name_9; }
	inline String_t** get_address_of_body_name_9() { return &___body_name_9; }
	inline void set_body_name_9(String_t* value)
	{
		___body_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_9), value);
	}

	inline static int32_t get_offset_of_encoding_name_10() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___encoding_name_10)); }
	inline String_t* get_encoding_name_10() const { return ___encoding_name_10; }
	inline String_t** get_address_of_encoding_name_10() { return &___encoding_name_10; }
	inline void set_encoding_name_10(String_t* value)
	{
		___encoding_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_10), value);
	}

	inline static int32_t get_offset_of_header_name_11() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___header_name_11)); }
	inline String_t* get_header_name_11() const { return ___header_name_11; }
	inline String_t** get_address_of_header_name_11() { return &___header_name_11; }
	inline void set_header_name_11(String_t* value)
	{
		___header_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_11), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_12() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___is_mail_news_display_12)); }
	inline bool get_is_mail_news_display_12() const { return ___is_mail_news_display_12; }
	inline bool* get_address_of_is_mail_news_display_12() { return &___is_mail_news_display_12; }
	inline void set_is_mail_news_display_12(bool value)
	{
		___is_mail_news_display_12 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_13() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___is_mail_news_save_13)); }
	inline bool get_is_mail_news_save_13() const { return ___is_mail_news_save_13; }
	inline bool* get_address_of_is_mail_news_save_13() { return &___is_mail_news_save_13; }
	inline void set_is_mail_news_save_13(bool value)
	{
		___is_mail_news_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_14() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___is_browser_save_14)); }
	inline bool get_is_browser_save_14() const { return ___is_browser_save_14; }
	inline bool* get_address_of_is_browser_save_14() { return &___is_browser_save_14; }
	inline void set_is_browser_save_14(bool value)
	{
		___is_browser_save_14 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_15() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___is_browser_display_15)); }
	inline bool get_is_browser_display_15() const { return ___is_browser_display_15; }
	inline bool* get_address_of_is_browser_display_15() { return &___is_browser_display_15; }
	inline void set_is_browser_display_15(bool value)
	{
		___is_browser_display_15 = value;
	}

	inline static int32_t get_offset_of_web_name_16() { return static_cast<int32_t>(offsetof(Encoding_t4152569411, ___web_name_16)); }
	inline String_t* get_web_name_16() const { return ___web_name_16; }
	inline String_t** get_address_of_web_name_16() { return &___web_name_16; }
	inline void set_web_name_16(String_t* value)
	{
		___web_name_16 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_16), value);
	}
};

struct Encoding_t4152569411_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t2995492547 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Text.EncodingInfo[] System.Text.Encoding::encoding_infos
	EncodingInfoU5BU5D_t3165239236* ___encoding_infos_7;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2640533940* ___encodings_8;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t4152569411 * ___asciiEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t4152569411 * ___bigEndianEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t4152569411 * ___defaultEncoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t4152569411 * ___utf7Encoding_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t4152569411 * ___utf8EncodingWithMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t4152569411 * ___utf8EncodingWithoutMarkers_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t4152569411 * ___unicodeEncoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t4152569411 * ___isoLatin1Encoding_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t4152569411 * ___utf8EncodingUnsafe_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t4152569411 * ___utf32Encoding_26;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t4152569411 * ___bigEndianUTF32Encoding_27;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_28;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t2995492547 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t2995492547 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t2995492547 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encoding_infos_7() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___encoding_infos_7)); }
	inline EncodingInfoU5BU5D_t3165239236* get_encoding_infos_7() const { return ___encoding_infos_7; }
	inline EncodingInfoU5BU5D_t3165239236** get_address_of_encoding_infos_7() { return &___encoding_infos_7; }
	inline void set_encoding_infos_7(EncodingInfoU5BU5D_t3165239236* value)
	{
		___encoding_infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_infos_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___encodings_8)); }
	inline ObjectU5BU5D_t2640533940* get_encodings_8() const { return ___encodings_8; }
	inline ObjectU5BU5D_t2640533940** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(ObjectU5BU5D_t2640533940* value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___asciiEncoding_17)); }
	inline Encoding_t4152569411 * get_asciiEncoding_17() const { return ___asciiEncoding_17; }
	inline Encoding_t4152569411 ** get_address_of_asciiEncoding_17() { return &___asciiEncoding_17; }
	inline void set_asciiEncoding_17(Encoding_t4152569411 * value)
	{
		___asciiEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_17), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___bigEndianEncoding_18)); }
	inline Encoding_t4152569411 * get_bigEndianEncoding_18() const { return ___bigEndianEncoding_18; }
	inline Encoding_t4152569411 ** get_address_of_bigEndianEncoding_18() { return &___bigEndianEncoding_18; }
	inline void set_bigEndianEncoding_18(Encoding_t4152569411 * value)
	{
		___bigEndianEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_18), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_19() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___defaultEncoding_19)); }
	inline Encoding_t4152569411 * get_defaultEncoding_19() const { return ___defaultEncoding_19; }
	inline Encoding_t4152569411 ** get_address_of_defaultEncoding_19() { return &___defaultEncoding_19; }
	inline void set_defaultEncoding_19(Encoding_t4152569411 * value)
	{
		___defaultEncoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_19), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_20() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___utf7Encoding_20)); }
	inline Encoding_t4152569411 * get_utf7Encoding_20() const { return ___utf7Encoding_20; }
	inline Encoding_t4152569411 ** get_address_of_utf7Encoding_20() { return &___utf7Encoding_20; }
	inline void set_utf7Encoding_20(Encoding_t4152569411 * value)
	{
		___utf7Encoding_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___utf8EncodingWithMarkers_21)); }
	inline Encoding_t4152569411 * get_utf8EncodingWithMarkers_21() const { return ___utf8EncodingWithMarkers_21; }
	inline Encoding_t4152569411 ** get_address_of_utf8EncodingWithMarkers_21() { return &___utf8EncodingWithMarkers_21; }
	inline void set_utf8EncodingWithMarkers_21(Encoding_t4152569411 * value)
	{
		___utf8EncodingWithMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_21), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_22() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___utf8EncodingWithoutMarkers_22)); }
	inline Encoding_t4152569411 * get_utf8EncodingWithoutMarkers_22() const { return ___utf8EncodingWithoutMarkers_22; }
	inline Encoding_t4152569411 ** get_address_of_utf8EncodingWithoutMarkers_22() { return &___utf8EncodingWithoutMarkers_22; }
	inline void set_utf8EncodingWithoutMarkers_22(Encoding_t4152569411 * value)
	{
		___utf8EncodingWithoutMarkers_22 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_22), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_23() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___unicodeEncoding_23)); }
	inline Encoding_t4152569411 * get_unicodeEncoding_23() const { return ___unicodeEncoding_23; }
	inline Encoding_t4152569411 ** get_address_of_unicodeEncoding_23() { return &___unicodeEncoding_23; }
	inline void set_unicodeEncoding_23(Encoding_t4152569411 * value)
	{
		___unicodeEncoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_23), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_24() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___isoLatin1Encoding_24)); }
	inline Encoding_t4152569411 * get_isoLatin1Encoding_24() const { return ___isoLatin1Encoding_24; }
	inline Encoding_t4152569411 ** get_address_of_isoLatin1Encoding_24() { return &___isoLatin1Encoding_24; }
	inline void set_isoLatin1Encoding_24(Encoding_t4152569411 * value)
	{
		___isoLatin1Encoding_24 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_24), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_25() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___utf8EncodingUnsafe_25)); }
	inline Encoding_t4152569411 * get_utf8EncodingUnsafe_25() const { return ___utf8EncodingUnsafe_25; }
	inline Encoding_t4152569411 ** get_address_of_utf8EncodingUnsafe_25() { return &___utf8EncodingUnsafe_25; }
	inline void set_utf8EncodingUnsafe_25(Encoding_t4152569411 * value)
	{
		___utf8EncodingUnsafe_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_25), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___utf32Encoding_26)); }
	inline Encoding_t4152569411 * get_utf32Encoding_26() const { return ___utf32Encoding_26; }
	inline Encoding_t4152569411 ** get_address_of_utf32Encoding_26() { return &___utf32Encoding_26; }
	inline void set_utf32Encoding_26(Encoding_t4152569411 * value)
	{
		___utf32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_26), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_27() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___bigEndianUTF32Encoding_27)); }
	inline Encoding_t4152569411 * get_bigEndianUTF32Encoding_27() const { return ___bigEndianUTF32Encoding_27; }
	inline Encoding_t4152569411 ** get_address_of_bigEndianUTF32Encoding_27() { return &___bigEndianUTF32Encoding_27; }
	inline void set_bigEndianUTF32Encoding_27(Encoding_t4152569411 * value)
	{
		___bigEndianUTF32Encoding_27 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_27), value);
	}

	inline static int32_t get_offset_of_lockobj_28() { return static_cast<int32_t>(offsetof(Encoding_t4152569411_StaticFields, ___lockobj_28)); }
	inline RuntimeObject * get_lockobj_28() const { return ___lockobj_28; }
	inline RuntimeObject ** get_address_of_lockobj_28() { return &___lockobj_28; }
	inline void set_lockobj_28(RuntimeObject * value)
	{
		___lockobj_28 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T4152569411_H
#ifndef TOBASE64TRANSFORM_T1132403400_H
#define TOBASE64TRANSFORM_T1132403400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t1132403400  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_2;

public:
	inline static int32_t get_offset_of_m_disposed_2() { return static_cast<int32_t>(offsetof(ToBase64Transform_t1132403400, ___m_disposed_2)); }
	inline bool get_m_disposed_2() const { return ___m_disposed_2; }
	inline bool* get_address_of_m_disposed_2() { return &___m_disposed_2; }
	inline void set_m_disposed_2(bool value)
	{
		___m_disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T1132403400_H
#ifndef SECURITYATTRIBUTE_T2617373956_H
#define SECURITYATTRIBUTE_T2617373956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t2617373956  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2617373956, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2617373956, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2617373956_H
#ifndef ENCODERFALLBACKBUFFER_T484429160_H
#define ENCODERFALLBACKBUFFER_T484429160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t484429160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T484429160_H
#ifndef ENCODERFALLBACK_T2886011065_H
#define ENCODERFALLBACK_T2886011065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t2886011065  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t2886011065_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t2886011065 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t2886011065 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t2886011065 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t2886011065_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t2886011065 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t2886011065 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t2886011065 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t2886011065_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t2886011065 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t2886011065 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t2886011065 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t2886011065_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t2886011065 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t2886011065 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t2886011065 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T2886011065_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T1473846340_H
#define STRONGNAMEPUBLICKEYBLOB_T1473846340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t1473846340  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t790048969* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t1473846340, ___pubkey_0)); }
	inline ByteU5BU5D_t790048969* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t790048969** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t790048969* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T1473846340_H
#ifndef APPLICATIONTRUST_T802285283_H
#define APPLICATIONTRUST_T802285283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t802285283  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t802285283, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T802285283_H
#ifndef CODEGROUP_T2939961003_H
#define CODEGROUP_T2939961003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t2939961003  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t2551749648 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2105504018 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003, ___m_policy_0)); }
	inline PolicyStatement_t2551749648 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t2551749648 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t2551749648 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003, ___m_children_4)); }
	inline ArrayList_t2105504018 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2105504018 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2105504018 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t2939961003_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t1090004131 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t2939961003_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t1090004131 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t1090004131 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t1090004131 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T2939961003_H
#ifndef EVIDENCE_T620674145_H
#define EVIDENCE_T620674145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t620674145  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2105504018 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2105504018 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t620674145, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t620674145, ___hostEvidenceList_1)); }
	inline ArrayList_t2105504018 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2105504018 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2105504018 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t620674145, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2105504018 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2105504018 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2105504018 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t620674145, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T620674145_H
#ifndef EVIDENCEENUMERATOR_T435111325_H
#define EVIDENCEENUMERATOR_T435111325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t435111325  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t435111325, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t435111325, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t435111325, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T435111325_H
#ifndef HASH_T1715286532_H
#define HASH_T1715286532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t1715286532  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t2995492547 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t790048969* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t1715286532, ___assembly_0)); }
	inline Assembly_t2995492547 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t2995492547 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t2995492547 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t1715286532, ___data_1)); }
	inline ByteU5BU5D_t790048969* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t790048969** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t790048969* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T1715286532_H
#ifndef DECODERFALLBACKBUFFER_T1093455032_H
#define DECODERFALLBACKBUFFER_T1093455032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t1093455032  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T1093455032_H
#ifndef DECODERFALLBACK_T1076525380_H
#define DECODERFALLBACK_T1076525380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t1076525380  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t1076525380_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t1076525380 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t1076525380 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t1076525380 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t1076525380_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t1076525380 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t1076525380 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t1076525380 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t1076525380_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t1076525380 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t1076525380 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t1076525380 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t1076525380_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t1076525380 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t1076525380 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t1076525380 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T1076525380_H
#ifndef STRONGNAME_T1990136251_H
#define STRONGNAME_T1990136251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t1990136251  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t1473846340 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1834903876 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t1990136251, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t1473846340 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t1473846340 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t1473846340 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t1990136251, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t1990136251, ___version_2)); }
	inline Version_t1834903876 * get_version_2() const { return ___version_2; }
	inline Version_t1834903876 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t1834903876 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T1990136251_H
#ifndef DECODER_T3743853803_H
#define DECODER_T3743853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t3743853803  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1076525380 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1093455032 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t3743853803, ___fallback_0)); }
	inline DecoderFallback_t1076525380 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t1076525380 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t1076525380 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t3743853803, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t1093455032 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t1093455032 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t1093455032 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T3743853803_H
#ifndef CODEACCESSPERMISSION_T3787515626_H
#define CODEACCESSPERMISSION_T3787515626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t3787515626  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T3787515626_H
#ifndef PERMISSIONSET_T3784804660_H
#define PERMISSIONSET_T3784804660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t3784804660  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t3541188788 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t3784804660, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t3541188788 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t3541188788 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t3541188788 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResolverU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t3784804660, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T3784804660_H
#ifndef SECURITYMANAGER_T338823560_H
#define SECURITYMANAGER_T338823560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t338823560  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t338823560_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1881663185 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t500991301 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t338823560_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t338823560_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t1881663185 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t1881663185 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t1881663185 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_1), value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t338823560_StaticFields, ____execution_2)); }
	inline SecurityPermission_t500991301 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t500991301 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t500991301 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier((&____execution_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T338823560_H
#ifndef ENCODINGINFO_T449048377_H
#define ENCODINGINFO_T449048377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingInfo
struct  EncodingInfo_t449048377  : public RuntimeObject
{
public:
	// System.Int32 System.Text.EncodingInfo::codepage
	int32_t ___codepage_0;
	// System.Text.Encoding System.Text.EncodingInfo::encoding
	Encoding_t4152569411 * ___encoding_1;

public:
	inline static int32_t get_offset_of_codepage_0() { return static_cast<int32_t>(offsetof(EncodingInfo_t449048377, ___codepage_0)); }
	inline int32_t get_codepage_0() const { return ___codepage_0; }
	inline int32_t* get_address_of_codepage_0() { return &___codepage_0; }
	inline void set_codepage_0(int32_t value)
	{
		___codepage_0 = value;
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(EncodingInfo_t449048377, ___encoding_1)); }
	inline Encoding_t4152569411 * get_encoding_1() const { return ___encoding_1; }
	inline Encoding_t4152569411 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(Encoding_t4152569411 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGINFO_T449048377_H
#ifndef SIGNATUREDESCRIPTION_T1917752119_H
#define SIGNATUREDESCRIPTION_T1917752119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t1917752119  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t1917752119, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t1917752119, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t1917752119, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t1917752119, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T1917752119_H
#ifndef SECURITYELEMENT_T2041609139_H
#define SECURITYELEMENT_T2041609139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t2041609139  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2105504018 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2105504018 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139, ___attributes_2)); }
	inline ArrayList_t2105504018 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2105504018 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2105504018 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139, ___children_3)); }
	inline ArrayList_t2105504018 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2105504018 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2105504018 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t2041609139_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t233192964* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t233192964* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t233192964* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t233192964* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t233192964* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t233192964* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t233192964** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t233192964* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t233192964* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t233192964** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t233192964* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t233192964* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t233192964** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t233192964* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t233192964* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t233192964** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t233192964* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t2041609139_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t233192964* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t233192964** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t233192964* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T2041609139_H
#ifndef SYMMETRICTRANSFORM_T2016100967_H
#define SYMMETRICTRANSFORM_T2016100967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2016100967  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4037442205 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t790048969* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t790048969* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t790048969* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t790048969* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3048023816 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___algo_0)); }
	inline SymmetricAlgorithm_t4037442205 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4037442205 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4037442205 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___temp_3)); }
	inline ByteU5BU5D_t790048969* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t790048969** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t790048969* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___temp2_4)); }
	inline ByteU5BU5D_t790048969* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t790048969** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t790048969* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___workBuff_5)); }
	inline ByteU5BU5D_t790048969* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t790048969** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t790048969* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___workout_6)); }
	inline ByteU5BU5D_t790048969* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t790048969** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t790048969* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2016100967, ____rng_11)); }
	inline RandomNumberGenerator_t3048023816 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3048023816 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2016100967_H
#ifndef RANDOMNUMBERGENERATOR_T3048023816_H
#define RANDOMNUMBERGENERATOR_T3048023816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t3048023816  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T3048023816_H
#ifndef HASHALGORITHM_T2840070564_H
#define HASHALGORITHM_T2840070564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2840070564  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t790048969* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2840070564, ___HashValue_0)); }
	inline ByteU5BU5D_t790048969* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t790048969** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t790048969* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2840070564, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2840070564, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2840070564, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T2840070564_H
#ifndef SHACONSTANTS_T738728595_H
#define SHACONSTANTS_T738728595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t738728595  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t738728595_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t3484520041* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t1986694663* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t738728595_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t3484520041* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t3484520041** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t3484520041* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t738728595_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t1986694663* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t1986694663** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t1986694663* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T738728595_H
#ifndef DERIVEBYTES_T3271722203_H
#define DERIVEBYTES_T3271722203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t3271722203  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T3271722203_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T3678233407_H
#define RIJNDAELMANAGEDTRANSFORM_T3678233407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t3678233407  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t111540951 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3678233407, ____st_0)); }
	inline RijndaelTransform_t111540951 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t111540951 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t111540951 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3678233407, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T3678233407_H
#ifndef SHA1INTERNAL_T2661590508_H
#define SHA1INTERNAL_T2661590508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2661590508  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t3484520041* ____H_2;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_3;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t790048969* ____ProcessingBuffer_4;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t3484520041* ___buff_6;

public:
	inline static int32_t get_offset_of__H_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2661590508, ____H_2)); }
	inline UInt32U5BU5D_t3484520041* get__H_2() const { return ____H_2; }
	inline UInt32U5BU5D_t3484520041** get_address_of__H_2() { return &____H_2; }
	inline void set__H_2(UInt32U5BU5D_t3484520041* value)
	{
		____H_2 = value;
		Il2CppCodeGenWriteBarrier((&____H_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2661590508, ___count_3)); }
	inline uint64_t get_count_3() const { return ___count_3; }
	inline uint64_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(uint64_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2661590508, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t790048969* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t790048969** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t790048969* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_5() { return static_cast<int32_t>(offsetof(SHA1Internal_t2661590508, ____ProcessingBufferCount_5)); }
	inline int32_t get__ProcessingBufferCount_5() const { return ____ProcessingBufferCount_5; }
	inline int32_t* get_address_of__ProcessingBufferCount_5() { return &____ProcessingBufferCount_5; }
	inline void set__ProcessingBufferCount_5(int32_t value)
	{
		____ProcessingBufferCount_5 = value;
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(SHA1Internal_t2661590508, ___buff_6)); }
	inline UInt32U5BU5D_t3484520041* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_t3484520041** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_t3484520041* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((&___buff_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2661590508_H
#ifndef VALUETYPE_T2090162233_H
#define VALUETYPE_T2090162233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2090162233  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2090162233_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2090162233_marshaled_com
{
};
#endif // VALUETYPE_T2090162233_H
#ifndef CRITICALFINALIZEROBJECT_T1222321560_H
#define CRITICALFINALIZEROBJECT_T1222321560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1222321560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1222321560_H
#ifndef ATTRIBUTE_T2408019351_H
#define ATTRIBUTE_T2408019351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2408019351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2408019351_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1343556470_H
#define ASYMMETRICSIGNATUREFORMATTER_T1343556470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1343556470  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1343556470_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1332390066_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1332390066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1332390066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1332390066_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T2364482138_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T2364482138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t2364482138  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T2364482138_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T3582650339_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T3582650339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t3582650339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T3582650339_H
#ifndef STRINGBUILDER_T2500992024_H
#define STRINGBUILDER_T2500992024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t2500992024  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t2500992024, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t2500992024, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t2500992024, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t2500992024, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T2500992024_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T3703492960_H
#define UNVERIFIABLECODEATTRIBUTE_T3703492960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t3703492960  : public Attribute_t2408019351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T3703492960_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T455816589_H
#define SECURITYSAFECRITICALATTRIBUTE_T455816589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t455816589  : public Attribute_t2408019351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T455816589_H
#ifndef SYSTEMEXCEPTION_T972320735_H
#define SYSTEMEXCEPTION_T972320735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t972320735  : public Exception_t3765817724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T972320735_H
#ifndef SECURITYFRAME_T258139900_H
#define SECURITYFRAME_T258139900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t258139900 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t3513054594 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t3784804660 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t3784804660 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t3784804660 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t258139900, ____domain_0)); }
	inline AppDomain_t3513054594 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t3513054594 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t3513054594 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t258139900, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t258139900, ____assert_2)); }
	inline PermissionSet_t3784804660 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t3784804660 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t3784804660 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t258139900, ____deny_3)); }
	inline PermissionSet_t3784804660 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t3784804660 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t3784804660 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t258139900, ____permitonly_4)); }
	inline PermissionSet_t3784804660 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t3784804660 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t3784804660 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t258139900_marshaled_pinvoke
{
	AppDomain_t3513054594 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t3784804660 * ____assert_2;
	PermissionSet_t3784804660 * ____deny_3;
	PermissionSet_t3784804660 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t258139900_marshaled_com
{
	AppDomain_t3513054594 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t3784804660 * ____assert_2;
	PermissionSet_t3784804660 * ____deny_3;
	PermissionSet_t3784804660 * ____permitonly_4;
};
#endif // SECURITYFRAME_T258139900_H
#ifndef ASCIIENCODING_T3080359094_H
#define ASCIIENCODING_T3080359094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3080359094  : public Encoding_t4152569411
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3080359094_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T4043464209_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T4043464209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t4043464209  : public Attribute_t2408019351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T4043464209_H
#ifndef DECODEREXCEPTIONFALLBACK_T764658574_H
#define DECODEREXCEPTIONFALLBACK_T764658574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t764658574  : public DecoderFallback_t1076525380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T764658574_H
#ifndef LATIN1ENCODING_T2365169646_H
#define LATIN1ENCODING_T2365169646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t2365169646  : public Encoding_t4152569411
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T2365169646_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T2336117571_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T2336117571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t2336117571  : public DecoderFallbackBuffer_t1093455032
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T2336117571_H
#ifndef SECURITYATTRIBUTE_T1614312746_H
#define SECURITYATTRIBUTE_T1614312746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t1614312746  : public Attribute_t2408019351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T1614312746_H
#ifndef DECODERREPLACEMENTFALLBACK_T262029281_H
#define DECODERREPLACEMENTFALLBACK_T262029281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t262029281  : public DecoderFallback_t1076525380
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t262029281, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T262029281_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T3199137925_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T3199137925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t3199137925  : public DecoderFallbackBuffer_t1093455032
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3199137925, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3199137925, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3199137925, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T3199137925_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1107903588_H
#define ENCODEREXCEPTIONFALLBACK_T1107903588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1107903588  : public EncoderFallback_t2886011065
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1107903588_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T342969077_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T342969077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t342969077  : public EncoderFallbackBuffer_t484429160
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T342969077_H
#ifndef ENCODERREPLACEMENTFALLBACK_T664715637_H
#define ENCODERREPLACEMENTFALLBACK_T664715637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t664715637  : public EncoderFallback_t2886011065
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t664715637, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T664715637_H
#ifndef UTF32ENCODING_T1789740781_H
#define UTF32ENCODING_T1789740781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t1789740781  : public Encoding_t4152569411
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_29;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_30;

public:
	inline static int32_t get_offset_of_bigEndian_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t1789740781, ___bigEndian_29)); }
	inline bool get_bigEndian_29() const { return ___bigEndian_29; }
	inline bool* get_address_of_bigEndian_29() { return &___bigEndian_29; }
	inline void set_bigEndian_29(bool value)
	{
		___bigEndian_29 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_30() { return static_cast<int32_t>(offsetof(UTF32Encoding_t1789740781, ___byteOrderMark_30)); }
	inline bool get_byteOrderMark_30() const { return ___byteOrderMark_30; }
	inline bool* get_address_of_byteOrderMark_30() { return &___byteOrderMark_30; }
	inline void set_byteOrderMark_30(bool value)
	{
		___byteOrderMark_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T1789740781_H
#ifndef FORWARDINGDECODER_T1301436739_H
#define FORWARDINGDECODER_T1301436739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t1301436739  : public Decoder_t3743853803
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t4152569411 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t1301436739, ___encoding_2)); }
	inline Encoding_t4152569411 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t4152569411 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t4152569411 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T1301436739_H
#ifndef ENUM_T3437500853_H
#define ENUM_T3437500853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3437500853  : public ValueType_t2090162233
{
public:

public:
};

struct Enum_t3437500853_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t233192964* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3437500853_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t233192964* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t233192964** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t233192964* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3437500853_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3437500853_marshaled_com
{
};
#endif // ENUM_T3437500853_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T2871994335_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T2871994335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t2871994335  : public EncoderFallbackBuffer_t484429160
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t2871994335, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t2871994335, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t2871994335, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T2871994335_H
#ifndef SECURESTRING_T1860731416_H
#define SECURESTRING_T1860731416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t1860731416  : public CriticalFinalizerObject_t1222321560
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t790048969* ___data_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t1860731416, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t1860731416, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(SecureString_t1860731416, ___data_2)); }
	inline ByteU5BU5D_t790048969* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t790048969** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t790048969* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T1860731416_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T3335920622_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T3335920622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t3335920622  : public AsymmetricKeyExchangeFormatter_t3582650339
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t3399184103 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t3048023816 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t790048969* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t3335920622, ___rsa_0)); }
	inline RSA_t3399184103 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3399184103 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3399184103 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t3335920622, ___random_1)); }
	inline RandomNumberGenerator_t3048023816 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3048023816 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t3335920622, ___param_2)); }
	inline ByteU5BU5D_t790048969* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t790048969** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t790048969* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T3335920622_H
#ifndef DSASIGNATUREDESCRIPTION_T3427270986_H
#define DSASIGNATUREDESCRIPTION_T3427270986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t3427270986  : public SignatureDescription_t1917752119
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T3427270986_H
#ifndef TRIPLEDESTRANSFORM_T3452976596_H
#define TRIPLEDESTRANSFORM_T3452976596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t3452976596  : public SymmetricTransform_t2016100967
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t29700371 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t29700371 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t29700371 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t29700371 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t29700371 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t29700371 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___E1_12)); }
	inline DESTransform_t29700371 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t29700371 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t29700371 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___D2_13)); }
	inline DESTransform_t29700371 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t29700371 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t29700371 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___E3_14)); }
	inline DESTransform_t29700371 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t29700371 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t29700371 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___D1_15)); }
	inline DESTransform_t29700371 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t29700371 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t29700371 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___E2_16)); }
	inline DESTransform_t29700371 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t29700371 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t29700371 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t3452976596, ___D3_17)); }
	inline DESTransform_t29700371 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t29700371 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t29700371 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T3452976596_H
#ifndef SHA512_T2995471164_H
#define SHA512_T2995471164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t2995471164  : public HashAlgorithm_t2840070564
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T2995471164_H
#ifndef SHA384_T33646681_H
#define SHA384_T33646681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t33646681  : public HashAlgorithm_t2840070564
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T33646681_H
#ifndef SHA256_T1863843093_H
#define SHA256_T1863843093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t1863843093  : public HashAlgorithm_t2840070564
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T1863843093_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T3809374944_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T3809374944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t3809374944  : public SignatureDescription_t1917752119
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T3809374944_H
#ifndef RIJNDAELTRANSFORM_T111540951_H
#define RIJNDAELTRANSFORM_T111540951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t111540951  : public SymmetricTransform_t2016100967
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t3484520041* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951, ___expandedKey_12)); }
	inline UInt32U5BU5D_t3484520041* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t3484520041** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t3484520041* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t111540951_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t3484520041* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t790048969* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t790048969* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t3484520041* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t3484520041* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t3484520041* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t3484520041* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t3484520041* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t3484520041* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t3484520041* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t3484520041* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t3484520041* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t3484520041** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t3484520041* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t790048969* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t790048969** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t790048969* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t790048969* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t790048969** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t790048969* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t3484520041* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t3484520041** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t3484520041* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t3484520041* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t3484520041** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t3484520041* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t3484520041* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t3484520041** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t3484520041* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t3484520041* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t3484520041** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t3484520041* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t3484520041* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t3484520041** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t3484520041* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t3484520041* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t3484520041** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t3484520041* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t3484520041* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t3484520041** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t3484520041* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t111540951_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t3484520041* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t3484520041** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t3484520041* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T111540951_H
#ifndef SHA1_T1001824043_H
#define SHA1_T1001824043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1001824043  : public HashAlgorithm_t2840070564
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1001824043_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3938201542_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3938201542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t3938201542  : public Attribute_t2408019351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3938201542_H
#ifndef RFC2898DERIVEBYTES_T3671174768_H
#define RFC2898DERIVEBYTES_T3671174768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t3671174768  : public DeriveBytes_t3271722203
{
public:
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_iteration
	int32_t ____iteration_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_t790048969* ____salt_2;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMACSHA1_t230145952 * ____hmac_3;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_t790048969* ____buffer_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_pos
	int32_t ____pos_5;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_f
	int32_t ____f_6;

public:
	inline static int32_t get_offset_of__iteration_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____iteration_1)); }
	inline int32_t get__iteration_1() const { return ____iteration_1; }
	inline int32_t* get_address_of__iteration_1() { return &____iteration_1; }
	inline void set__iteration_1(int32_t value)
	{
		____iteration_1 = value;
	}

	inline static int32_t get_offset_of__salt_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____salt_2)); }
	inline ByteU5BU5D_t790048969* get__salt_2() const { return ____salt_2; }
	inline ByteU5BU5D_t790048969** get_address_of__salt_2() { return &____salt_2; }
	inline void set__salt_2(ByteU5BU5D_t790048969* value)
	{
		____salt_2 = value;
		Il2CppCodeGenWriteBarrier((&____salt_2), value);
	}

	inline static int32_t get_offset_of__hmac_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____hmac_3)); }
	inline HMACSHA1_t230145952 * get__hmac_3() const { return ____hmac_3; }
	inline HMACSHA1_t230145952 ** get_address_of__hmac_3() { return &____hmac_3; }
	inline void set__hmac_3(HMACSHA1_t230145952 * value)
	{
		____hmac_3 = value;
		Il2CppCodeGenWriteBarrier((&____hmac_3), value);
	}

	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____buffer_4)); }
	inline ByteU5BU5D_t790048969* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t790048969** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t790048969* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t3671174768, ____f_6)); }
	inline int32_t get__f_6() const { return ____f_6; }
	inline int32_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(int32_t value)
	{
		____f_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RFC2898DERIVEBYTES_T3671174768_H
#ifndef RSAPARAMETERS_T114625675_H
#define RSAPARAMETERS_T114625675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t114625675 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t790048969* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t790048969* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t790048969* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t790048969* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t790048969* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t790048969* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t790048969* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t790048969* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___P_0)); }
	inline ByteU5BU5D_t790048969* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t790048969** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t790048969* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Q_1)); }
	inline ByteU5BU5D_t790048969* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t790048969** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t790048969* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___D_2)); }
	inline ByteU5BU5D_t790048969* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t790048969** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t790048969* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___DP_3)); }
	inline ByteU5BU5D_t790048969* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t790048969** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t790048969* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___DQ_4)); }
	inline ByteU5BU5D_t790048969* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t790048969** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t790048969* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___InverseQ_5)); }
	inline ByteU5BU5D_t790048969* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t790048969** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t790048969* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Modulus_6)); }
	inline ByteU5BU5D_t790048969* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t790048969** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t790048969* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t114625675, ___Exponent_7)); }
	inline ByteU5BU5D_t790048969* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t790048969** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t790048969* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t114625675_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t114625675_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T114625675_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T2874503393_H
#define RSAPKCS1SIGNATUREFORMATTER_T2874503393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2874503393  : public AsymmetricSignatureFormatter_t1343556470
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3399184103 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t2840070564 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2874503393, ___rsa_0)); }
	inline RSA_t3399184103 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3399184103 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3399184103 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2874503393, ___hash_1)); }
	inline HashAlgorithm_t2840070564 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t2840070564 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t2840070564 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T2874503393_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T1498834521_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T1498834521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t1498834521  : public AsymmetricSignatureDeformatter_t1332390066
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t3399184103 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t1498834521, ___rsa_0)); }
	inline RSA_t3399184103 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3399184103 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3399184103 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t1498834521, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T1498834521_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2349456182_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2349456182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2349456182  : public AsymmetricKeyExchangeFormatter_t3582650339
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t3399184103 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3048023816 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2349456182, ___rsa_0)); }
	inline RSA_t3399184103 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3399184103 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3399184103 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2349456182, ___random_1)); }
	inline RandomNumberGenerator_t3048023816 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3048023816 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2349456182_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T604788726_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T604788726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t604788726  : public AsymmetricKeyExchangeDeformatter_t2364482138
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::rsa
	RSA_t3399184103 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::random
	RandomNumberGenerator_t3048023816 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t604788726, ___rsa_0)); }
	inline RSA_t3399184103 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3399184103 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3399184103 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t604788726, ___random_1)); }
	inline RandomNumberGenerator_t3048023816 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3048023816 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3048023816 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T604788726_H
#ifndef CIPHERMODE_T3232808250_H
#define CIPHERMODE_T3232808250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3232808250 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3232808250, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T3232808250_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3391810955_H
#define SHA1CRYPTOSERVICEPROVIDER_T3391810955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3391810955  : public SHA1_t1001824043
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2661590508 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3391810955, ___sha_4)); }
	inline SHA1Internal_t2661590508 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2661590508 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2661590508 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3391810955_H
#ifndef SHA1MANAGED_T1628106242_H
#define SHA1MANAGED_T1628106242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1628106242  : public SHA1_t1001824043
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t2661590508 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1628106242, ___sha_4)); }
	inline SHA1Internal_t2661590508 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2661590508 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2661590508 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1628106242_H
#ifndef SHA256MANAGED_T2139958071_H
#define SHA256MANAGED_T2139958071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t2139958071  : public SHA256_t1863843093
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t3484520041* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t790048969* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t3484520041* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t2139958071, ____H_6)); }
	inline UInt32U5BU5D_t3484520041* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t3484520041** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t3484520041* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t2139958071, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t2139958071, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t790048969* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t790048969** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t790048969* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t2139958071, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t2139958071, ___buff_10)); }
	inline UInt32U5BU5D_t3484520041* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t3484520041** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t3484520041* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier((&___buff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T2139958071_H
#ifndef SHA384MANAGED_T4033558649_H
#define SHA384MANAGED_T4033558649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t4033558649  : public SHA384_t33646681
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t790048969* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t1986694663* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___xBuf_4)); }
	inline ByteU5BU5D_t790048969* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t790048969** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t790048969* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___W_16)); }
	inline UInt64U5BU5D_t1986694663* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1986694663** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1986694663* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t4033558649, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T4033558649_H
#ifndef SHA512MANAGED_T3814993787_H
#define SHA512MANAGED_T3814993787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t3814993787  : public SHA512_t2995471164
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t790048969* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t1986694663* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___xBuf_4)); }
	inline ByteU5BU5D_t790048969* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t790048969** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t790048969* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___W_16)); }
	inline UInt64U5BU5D_t1986694663* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1986694663** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1986694663* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t3814993787, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T3814993787_H
#ifndef PADDINGMODE_T1661085941_H
#define PADDINGMODE_T1661085941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1661085941 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1661085941, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T1661085941_H
#ifndef SECURITYCRITICALSCOPE_T3037247185_H
#define SECURITYCRITICALSCOPE_T3037247185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t3037247185 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t3037247185, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALSCOPE_T3037247185_H
#ifndef SECURITYEXCEPTION_T460755523_H
#define SECURITYEXCEPTION_T460755523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t460755523  : public SystemException_t972320735
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t620674145 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t460755523, ____evidence_18)); }
	inline Evidence_t620674145 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t620674145 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t620674145 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T460755523_H
#ifndef PRINCIPALPOLICY_T2294539733_H
#define PRINCIPALPOLICY_T2294539733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t2294539733 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t2294539733, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T2294539733_H
#ifndef RUNTIMEDECLSECURITYENTRY_T1294868608_H
#define RUNTIMEDECLSECURITYENTRY_T1294868608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t1294868608 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	IntPtr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1294868608, ___blob_0)); }
	inline IntPtr_t get_blob_0() const { return ___blob_0; }
	inline IntPtr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(IntPtr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1294868608, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1294868608, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T1294868608_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3359146193_H
#define CODEACCESSSECURITYATTRIBUTE_T3359146193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3359146193  : public SecurityAttribute_t1614312746
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3359146193_H
#ifndef PERMISSIONSTATE_T1418812499_H
#define PERMISSIONSTATE_T1418812499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1418812499 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t1418812499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSTATE_T1418812499_H
#ifndef SECURITYPERMISSIONFLAG_T1721869258_H
#define SECURITYPERMISSIONFLAG_T1721869258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1721869258 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1721869258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T1721869258_H
#ifndef SECURITYCONTEXT_T1822453880_H
#define SECURITYCONTEXT_T1822453880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t1822453880  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t2098124453 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t1822453880, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t1822453880, ____winid_1)); }
	inline IntPtr_t get__winid_1() const { return ____winid_1; }
	inline IntPtr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(IntPtr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t1822453880, ____stack_2)); }
	inline CompressedStack_t2098124453 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t2098124453 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t2098124453 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t1822453880, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t1822453880, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T1822453880_H
#ifndef ARGUMENTEXCEPTION_T651371020_H
#define ARGUMENTEXCEPTION_T651371020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t651371020  : public SystemException_t972320735
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t651371020, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T651371020_H
#ifndef POLICYLEVELTYPE_T1880505113_H
#define POLICYLEVELTYPE_T1880505113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t1880505113 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t1880505113, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVELTYPE_T1880505113_H
#ifndef POLICYSTATEMENTATTRIBUTE_T771507849_H
#define POLICYSTATEMENTATTRIBUTE_T771507849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t771507849 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t771507849, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENTATTRIBUTE_T771507849_H
#ifndef WINDOWSACCOUNTTYPE_T621336019_H
#define WINDOWSACCOUNTTYPE_T621336019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t621336019 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t621336019, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T621336019_H
#ifndef RUNTIMESECURITYFRAME_T3802568812_H
#define RUNTIMESECURITYFRAME_T3802568812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t3802568812  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t3513054594 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t1294868608  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t1294868608  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t1294868608  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t3802568812, ___domain_0)); }
	inline AppDomain_t3513054594 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t3513054594 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t3513054594 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t3802568812, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t3802568812, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t1294868608  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t1294868608 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t1294868608  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t3802568812, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t1294868608  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t1294868608 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t1294868608  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t3802568812, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t1294868608  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t1294868608 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t1294868608  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T3802568812_H
#ifndef SECURITYCRITICALATTRIBUTE_T278110259_H
#define SECURITYCRITICALATTRIBUTE_T278110259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t278110259  : public Attribute_t2408019351
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t278110259, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T278110259_H
#ifndef WINDOWSIDENTITY_T1586895408_H
#define WINDOWSIDENTITY_T1586895408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t1586895408  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2900656082 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____token_0)); }
	inline IntPtr_t get__token_0() const { return ____token_0; }
	inline IntPtr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(IntPtr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408, ____info_5)); }
	inline SerializationInfo_t2900656082 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t2900656082 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t2900656082 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t1586895408_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1586895408_StaticFields, ___invalidWindows_6)); }
	inline IntPtr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline IntPtr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(IntPtr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T1586895408_H
#ifndef SYMMETRICALGORITHM_T4037442205_H
#define SYMMETRICALGORITHM_T4037442205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4037442205  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t790048969* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t790048969* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3736283333* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3736283333* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___IVValue_1)); }
	inline ByteU5BU5D_t790048969* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t790048969** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t790048969* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___KeyValue_3)); }
	inline ByteU5BU5D_t790048969* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t790048969** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t790048969* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3736283333* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3736283333** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3736283333* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3736283333* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3736283333** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3736283333* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4037442205, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4037442205_H
#ifndef POLICYSTATEMENT_T2551749648_H
#define POLICYSTATEMENT_T2551749648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t2551749648  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t3784804660 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t2551749648, ___perms_0)); }
	inline PermissionSet_t3784804660 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t3784804660 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t3784804660 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t2551749648, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T2551749648_H
#ifndef POLICYLEVEL_T3541188788_H
#define POLICYLEVEL_T3541188788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t3541188788  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t2939961003 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2105504018 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2105504018 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1881663185 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t2041609139 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___root_code_group_1)); }
	inline CodeGroup_t2939961003 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t2939961003 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t2939961003 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___full_trust_assemblies_2)); }
	inline ArrayList_t2105504018 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2105504018 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2105504018 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___named_permission_sets_3)); }
	inline ArrayList_t2105504018 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2105504018 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2105504018 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___fullNames_6)); }
	inline Hashtable_t1881663185 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1881663185 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1881663185 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t3541188788, ___xml_7)); }
	inline SecurityElement_t2041609139 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t2041609139 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t2041609139 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T3541188788_H
#ifndef DECODERFALLBACKEXCEPTION_T4204559769_H
#define DECODERFALLBACKEXCEPTION_T4204559769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t4204559769  : public ArgumentException_t651371020
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t790048969* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4204559769, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t790048969* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t790048969** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t790048969* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4204559769, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T4204559769_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T4283651025_H
#define SECURITYPERMISSIONATTRIBUTE_T4283651025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t4283651025  : public CodeAccessSecurityAttribute_t3359146193
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t4283651025, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T4283651025_H
#ifndef SECURITYPERMISSION_T500991301_H
#define SECURITYPERMISSION_T500991301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t500991301  : public CodeAccessPermission_t3787515626
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t500991301, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T500991301_H
#ifndef ENCODERFALLBACKEXCEPTION_T445862953_H
#define ENCODERFALLBACKEXCEPTION_T445862953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t445862953  : public ArgumentException_t651371020
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t445862953, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t445862953, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t445862953, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t445862953, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T445862953_H
#ifndef TRIPLEDES_T992254813_H
#define TRIPLEDES_T992254813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t992254813  : public SymmetricAlgorithm_t4037442205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T992254813_H
#ifndef RIJNDAEL_T850676014_H
#define RIJNDAEL_T850676014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t850676014  : public SymmetricAlgorithm_t4037442205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T850676014_H
#ifndef RIJNDAELMANAGED_T3166538479_H
#define RIJNDAELMANAGED_T3166538479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3166538479  : public Rijndael_t850676014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3166538479_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T4289829448_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T4289829448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t4289829448  : public TripleDES_t992254813
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T4289829448_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (RSAOAEPKeyExchangeFormatter_t3335920622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable700[3] = 
{
	RSAOAEPKeyExchangeFormatter_t3335920622::get_offset_of_rsa_0(),
	RSAOAEPKeyExchangeFormatter_t3335920622::get_offset_of_random_1(),
	RSAOAEPKeyExchangeFormatter_t3335920622::get_offset_of_param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (RSAPKCS1KeyExchangeDeformatter_t604788726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable701[2] = 
{
	RSAPKCS1KeyExchangeDeformatter_t604788726::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeDeformatter_t604788726::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2349456182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t2349456182::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t2349456182::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (RSAPKCS1SignatureDeformatter_t1498834521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable703[2] = 
{
	RSAPKCS1SignatureDeformatter_t1498834521::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t1498834521::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (RSAPKCS1SignatureFormatter_t2874503393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable704[2] = 
{
	RSAPKCS1SignatureFormatter_t2874503393::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t2874503393::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (RSAParameters_t114625675)+ sizeof (RuntimeObject), sizeof(RSAParameters_t114625675_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable705[8] = 
{
	RSAParameters_t114625675::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t114625675::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (RandomNumberGenerator_t3048023816), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (Rfc2898DeriveBytes_t3671174768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable707[7] = 
{
	0,
	Rfc2898DeriveBytes_t3671174768::get_offset_of__iteration_1(),
	Rfc2898DeriveBytes_t3671174768::get_offset_of__salt_2(),
	Rfc2898DeriveBytes_t3671174768::get_offset_of__hmac_3(),
	Rfc2898DeriveBytes_t3671174768::get_offset_of__buffer_4(),
	Rfc2898DeriveBytes_t3671174768::get_offset_of__pos_5(),
	Rfc2898DeriveBytes_t3671174768::get_offset_of__f_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (Rijndael_t850676014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (RijndaelManaged_t3166538479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (RijndaelTransform_t111540951), -1, sizeof(RijndaelTransform_t111540951_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable710[15] = 
{
	RijndaelTransform_t111540951::get_offset_of_expandedKey_12(),
	RijndaelTransform_t111540951::get_offset_of_Nb_13(),
	RijndaelTransform_t111540951::get_offset_of_Nk_14(),
	RijndaelTransform_t111540951::get_offset_of_Nr_15(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t111540951_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (RijndaelManagedTransform_t3678233407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable711[2] = 
{
	RijndaelManagedTransform_t3678233407::get_offset_of__st_0(),
	RijndaelManagedTransform_t3678233407::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (SHA1_t1001824043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (SHA1Internal_t2661590508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[7] = 
{
	0,
	0,
	SHA1Internal_t2661590508::get_offset_of__H_2(),
	SHA1Internal_t2661590508::get_offset_of_count_3(),
	SHA1Internal_t2661590508::get_offset_of__ProcessingBuffer_4(),
	SHA1Internal_t2661590508::get_offset_of__ProcessingBufferCount_5(),
	SHA1Internal_t2661590508::get_offset_of_buff_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (SHA1CryptoServiceProvider_t3391810955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable714[1] = 
{
	SHA1CryptoServiceProvider_t3391810955::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (SHA1Managed_t1628106242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable715[1] = 
{
	SHA1Managed_t1628106242::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (SHA256_t1863843093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (SHA256Managed_t2139958071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[7] = 
{
	0,
	0,
	SHA256Managed_t2139958071::get_offset_of__H_6(),
	SHA256Managed_t2139958071::get_offset_of_count_7(),
	SHA256Managed_t2139958071::get_offset_of__ProcessingBuffer_8(),
	SHA256Managed_t2139958071::get_offset_of__ProcessingBufferCount_9(),
	SHA256Managed_t2139958071::get_offset_of_buff_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (SHA384_t33646681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (SHA384Managed_t4033558649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable719[14] = 
{
	SHA384Managed_t4033558649::get_offset_of_xBuf_4(),
	SHA384Managed_t4033558649::get_offset_of_xBufOff_5(),
	SHA384Managed_t4033558649::get_offset_of_byteCount1_6(),
	SHA384Managed_t4033558649::get_offset_of_byteCount2_7(),
	SHA384Managed_t4033558649::get_offset_of_H1_8(),
	SHA384Managed_t4033558649::get_offset_of_H2_9(),
	SHA384Managed_t4033558649::get_offset_of_H3_10(),
	SHA384Managed_t4033558649::get_offset_of_H4_11(),
	SHA384Managed_t4033558649::get_offset_of_H5_12(),
	SHA384Managed_t4033558649::get_offset_of_H6_13(),
	SHA384Managed_t4033558649::get_offset_of_H7_14(),
	SHA384Managed_t4033558649::get_offset_of_H8_15(),
	SHA384Managed_t4033558649::get_offset_of_W_16(),
	SHA384Managed_t4033558649::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (SHA512_t2995471164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (SHA512Managed_t3814993787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[14] = 
{
	SHA512Managed_t3814993787::get_offset_of_xBuf_4(),
	SHA512Managed_t3814993787::get_offset_of_xBufOff_5(),
	SHA512Managed_t3814993787::get_offset_of_byteCount1_6(),
	SHA512Managed_t3814993787::get_offset_of_byteCount2_7(),
	SHA512Managed_t3814993787::get_offset_of_H1_8(),
	SHA512Managed_t3814993787::get_offset_of_H2_9(),
	SHA512Managed_t3814993787::get_offset_of_H3_10(),
	SHA512Managed_t3814993787::get_offset_of_H4_11(),
	SHA512Managed_t3814993787::get_offset_of_H5_12(),
	SHA512Managed_t3814993787::get_offset_of_H6_13(),
	SHA512Managed_t3814993787::get_offset_of_H7_14(),
	SHA512Managed_t3814993787::get_offset_of_H8_15(),
	SHA512Managed_t3814993787::get_offset_of_W_16(),
	SHA512Managed_t3814993787::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (SHAConstants_t738728595), -1, sizeof(SHAConstants_t738728595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable722[2] = 
{
	SHAConstants_t738728595_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t738728595_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (SignatureDescription_t1917752119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable723[4] = 
{
	SignatureDescription_t1917752119::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t1917752119::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t1917752119::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t1917752119::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (DSASignatureDescription_t3427270986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (RSAPKCS1SHA1SignatureDescription_t3809374944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (SymmetricAlgorithm_t4037442205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable726[10] = 
{
	SymmetricAlgorithm_t4037442205::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t4037442205::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t4037442205::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t4037442205::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t4037442205::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t4037442205::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t4037442205::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t4037442205::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t4037442205::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t4037442205::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (ToBase64Transform_t1132403400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable727[3] = 
{
	0,
	0,
	ToBase64Transform_t1132403400::get_offset_of_m_disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (TripleDES_t992254813), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (TripleDESCryptoServiceProvider_t4289829448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (TripleDESTransform_t3452976596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable730[6] = 
{
	TripleDESTransform_t3452976596::get_offset_of_E1_12(),
	TripleDESTransform_t3452976596::get_offset_of_D2_13(),
	TripleDESTransform_t3452976596::get_offset_of_E3_14(),
	TripleDESTransform_t3452976596::get_offset_of_D1_15(),
	TripleDESTransform_t3452976596::get_offset_of_E2_16(),
	TripleDESTransform_t3452976596::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (CodeAccessSecurityAttribute_t3359146193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (PermissionState_t1418812499)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable734[3] = 
{
	PermissionState_t1418812499::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (SecurityPermission_t500991301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable735[1] = 
{
	SecurityPermission_t500991301::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (SecurityPermissionAttribute_t4283651025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable736[1] = 
{
	SecurityPermissionAttribute_t4283651025::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (SecurityPermissionFlag_t1721869258)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable737[17] = 
{
	SecurityPermissionFlag_t1721869258::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (StrongNamePublicKeyBlob_t1473846340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable738[1] = 
{
	StrongNamePublicKeyBlob_t1473846340::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (ApplicationTrust_t802285283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable739[1] = 
{
	ApplicationTrust_t802285283::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (CodeGroup_t2939961003), -1, sizeof(CodeGroup_t2939961003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable740[6] = 
{
	CodeGroup_t2939961003::get_offset_of_m_policy_0(),
	CodeGroup_t2939961003::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t2939961003::get_offset_of_m_description_2(),
	CodeGroup_t2939961003::get_offset_of_m_name_3(),
	CodeGroup_t2939961003::get_offset_of_m_children_4(),
	CodeGroup_t2939961003_StaticFields::get_offset_of_U3CU3Ef__switchU24map2A_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (Evidence_t620674145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable741[4] = 
{
	Evidence_t620674145::get_offset_of__locked_0(),
	Evidence_t620674145::get_offset_of_hostEvidenceList_1(),
	Evidence_t620674145::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t620674145::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (EvidenceEnumerator_t435111325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable742[3] = 
{
	EvidenceEnumerator_t435111325::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t435111325::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t435111325::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (Hash_t1715286532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable743[2] = 
{
	Hash_t1715286532::get_offset_of_assembly_0(),
	Hash_t1715286532::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (PolicyLevel_t3541188788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable747[8] = 
{
	PolicyLevel_t3541188788::get_offset_of_label_0(),
	PolicyLevel_t3541188788::get_offset_of_root_code_group_1(),
	PolicyLevel_t3541188788::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t3541188788::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t3541188788::get_offset_of__location_4(),
	PolicyLevel_t3541188788::get_offset_of__type_5(),
	PolicyLevel_t3541188788::get_offset_of_fullNames_6(),
	PolicyLevel_t3541188788::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (PolicyStatement_t2551749648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable748[2] = 
{
	PolicyStatement_t2551749648::get_offset_of_perms_0(),
	PolicyStatement_t2551749648::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (PolicyStatementAttribute_t771507849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable749[5] = 
{
	PolicyStatementAttribute_t771507849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (StrongName_t1990136251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable750[3] = 
{
	StrongName_t1990136251::get_offset_of_publickey_0(),
	StrongName_t1990136251::get_offset_of_name_1(),
	StrongName_t1990136251::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (PrincipalPolicy_t2294539733)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable753[4] = 
{
	PrincipalPolicy_t2294539733::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (WindowsAccountType_t621336019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable754[5] = 
{
	WindowsAccountType_t621336019::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (WindowsIdentity_t1586895408), -1, sizeof(WindowsIdentity_t1586895408_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable755[7] = 
{
	WindowsIdentity_t1586895408::get_offset_of__token_0(),
	WindowsIdentity_t1586895408::get_offset_of__type_1(),
	WindowsIdentity_t1586895408::get_offset_of__account_2(),
	WindowsIdentity_t1586895408::get_offset_of__authenticated_3(),
	WindowsIdentity_t1586895408::get_offset_of__name_4(),
	WindowsIdentity_t1586895408::get_offset_of__info_5(),
	WindowsIdentity_t1586895408_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (AllowPartiallyTrustedCallersAttribute_t3938201542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (CodeAccessPermission_t3787515626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (PermissionSet_t3784804660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable762[2] = 
{
	PermissionSet_t3784804660::get_offset_of_U3CResolverU3Ek__BackingField_0(),
	PermissionSet_t3784804660::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (PolicyLevelType_t1880505113)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable763[5] = 
{
	PolicyLevelType_t1880505113::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (SecureString_t1860731416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable764[3] = 
{
	SecureString_t1860731416::get_offset_of_length_0(),
	SecureString_t1860731416::get_offset_of_disposed_1(),
	SecureString_t1860731416::get_offset_of_data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (SecurityContext_t1822453880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable765[5] = 
{
	SecurityContext_t1822453880::get_offset_of__capture_0(),
	SecurityContext_t1822453880::get_offset_of__winid_1(),
	SecurityContext_t1822453880::get_offset_of__stack_2(),
	SecurityContext_t1822453880::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t1822453880::get_offset_of__suppressFlow_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (SecurityCriticalAttribute_t278110259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable766[1] = 
{
	SecurityCriticalAttribute_t278110259::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (SecurityCriticalScope_t3037247185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable767[3] = 
{
	SecurityCriticalScope_t3037247185::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (SecurityElement_t2041609139), -1, sizeof(SecurityElement_t2041609139_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable768[9] = 
{
	SecurityElement_t2041609139::get_offset_of_text_0(),
	SecurityElement_t2041609139::get_offset_of_tag_1(),
	SecurityElement_t2041609139::get_offset_of_attributes_2(),
	SecurityElement_t2041609139::get_offset_of_children_3(),
	SecurityElement_t2041609139_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t2041609139_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t2041609139_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t2041609139_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t2041609139_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (SecurityAttribute_t2617373956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable769[2] = 
{
	SecurityAttribute_t2617373956::get_offset_of__name_0(),
	SecurityAttribute_t2617373956::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (SecurityException_t460755523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable770[8] = 
{
	SecurityException_t460755523::get_offset_of_permissionState_11(),
	SecurityException_t460755523::get_offset_of_permissionType_12(),
	SecurityException_t460755523::get_offset_of__granted_13(),
	SecurityException_t460755523::get_offset_of__refused_14(),
	SecurityException_t460755523::get_offset_of__demanded_15(),
	SecurityException_t460755523::get_offset_of__firstperm_16(),
	SecurityException_t460755523::get_offset_of__method_17(),
	SecurityException_t460755523::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (RuntimeDeclSecurityEntry_t1294868608)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t1294868608 ), 0, 0 };
extern const int32_t g_FieldOffsetTable771[3] = 
{
	RuntimeDeclSecurityEntry_t1294868608::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t1294868608::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t1294868608::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (RuntimeSecurityFrame_t3802568812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable772[5] = 
{
	RuntimeSecurityFrame_t3802568812::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t3802568812::get_offset_of_method_1(),
	RuntimeSecurityFrame_t3802568812::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t3802568812::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t3802568812::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (SecurityFrame_t258139900)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable773[5] = 
{
	SecurityFrame_t258139900::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t258139900::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t258139900::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t258139900::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t258139900::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (SecurityManager_t338823560), -1, sizeof(SecurityManager_t338823560_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable774[3] = 
{
	SecurityManager_t338823560_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t338823560_StaticFields::get_offset_of__declsecCache_1(),
	SecurityManager_t338823560_StaticFields::get_offset_of__execution_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (SecuritySafeCriticalAttribute_t455816589), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t4043464209), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (UnverifiableCodeAttribute_t3703492960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (ASCIIEncoding_t3080359094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (Decoder_t3743853803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[2] = 
{
	Decoder_t3743853803::get_offset_of_fallback_0(),
	Decoder_t3743853803::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (DecoderExceptionFallback_t764658574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (DecoderExceptionFallbackBuffer_t2336117571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (DecoderFallback_t1076525380), -1, sizeof(DecoderFallback_t1076525380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable782[3] = 
{
	DecoderFallback_t1076525380_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t1076525380_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t1076525380_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (DecoderFallbackBuffer_t1093455032), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (DecoderFallbackException_t4204559769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable784[2] = 
{
	DecoderFallbackException_t4204559769::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t4204559769::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (DecoderReplacementFallback_t262029281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable785[1] = 
{
	DecoderReplacementFallback_t262029281::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (DecoderReplacementFallbackBuffer_t3199137925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[3] = 
{
	DecoderReplacementFallbackBuffer_t3199137925::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t3199137925::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t3199137925::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (EncoderExceptionFallback_t1107903588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (EncoderExceptionFallbackBuffer_t342969077), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (EncoderFallback_t2886011065), -1, sizeof(EncoderFallback_t2886011065_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable789[3] = 
{
	EncoderFallback_t2886011065_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t2886011065_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t2886011065_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (EncoderFallbackBuffer_t484429160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (EncoderFallbackException_t445862953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable791[4] = 
{
	EncoderFallbackException_t445862953::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t445862953::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t445862953::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t445862953::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (EncoderReplacementFallback_t664715637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[1] = 
{
	EncoderReplacementFallback_t664715637::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (EncoderReplacementFallbackBuffer_t2871994335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable793[3] = 
{
	EncoderReplacementFallbackBuffer_t2871994335::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t2871994335::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t2871994335::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (Encoding_t4152569411), -1, sizeof(Encoding_t4152569411_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable794[29] = 
{
	Encoding_t4152569411::get_offset_of_codePage_0(),
	Encoding_t4152569411::get_offset_of_windows_code_page_1(),
	Encoding_t4152569411::get_offset_of_is_readonly_2(),
	Encoding_t4152569411::get_offset_of_decoder_fallback_3(),
	Encoding_t4152569411::get_offset_of_encoder_fallback_4(),
	Encoding_t4152569411_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t4152569411_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t4152569411_StaticFields::get_offset_of_encoding_infos_7(),
	Encoding_t4152569411_StaticFields::get_offset_of_encodings_8(),
	Encoding_t4152569411::get_offset_of_body_name_9(),
	Encoding_t4152569411::get_offset_of_encoding_name_10(),
	Encoding_t4152569411::get_offset_of_header_name_11(),
	Encoding_t4152569411::get_offset_of_is_mail_news_display_12(),
	Encoding_t4152569411::get_offset_of_is_mail_news_save_13(),
	Encoding_t4152569411::get_offset_of_is_browser_save_14(),
	Encoding_t4152569411::get_offset_of_is_browser_display_15(),
	Encoding_t4152569411::get_offset_of_web_name_16(),
	Encoding_t4152569411_StaticFields::get_offset_of_asciiEncoding_17(),
	Encoding_t4152569411_StaticFields::get_offset_of_bigEndianEncoding_18(),
	Encoding_t4152569411_StaticFields::get_offset_of_defaultEncoding_19(),
	Encoding_t4152569411_StaticFields::get_offset_of_utf7Encoding_20(),
	Encoding_t4152569411_StaticFields::get_offset_of_utf8EncodingWithMarkers_21(),
	Encoding_t4152569411_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_22(),
	Encoding_t4152569411_StaticFields::get_offset_of_unicodeEncoding_23(),
	Encoding_t4152569411_StaticFields::get_offset_of_isoLatin1Encoding_24(),
	Encoding_t4152569411_StaticFields::get_offset_of_utf8EncodingUnsafe_25(),
	Encoding_t4152569411_StaticFields::get_offset_of_utf32Encoding_26(),
	Encoding_t4152569411_StaticFields::get_offset_of_bigEndianUTF32Encoding_27(),
	Encoding_t4152569411_StaticFields::get_offset_of_lockobj_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (ForwardingDecoder_t1301436739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable795[1] = 
{
	ForwardingDecoder_t1301436739::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (EncodingInfo_t449048377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable796[2] = 
{
	EncodingInfo_t449048377::get_offset_of_codepage_0(),
	EncodingInfo_t449048377::get_offset_of_encoding_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (Latin1Encoding_t2365169646), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (StringBuilder_t2500992024), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable798[5] = 
{
	0,
	StringBuilder_t2500992024::get_offset_of__length_1(),
	StringBuilder_t2500992024::get_offset_of__str_2(),
	StringBuilder_t2500992024::get_offset_of__cached_str_3(),
	StringBuilder_t2500992024::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (UTF32Encoding_t1789740781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable799[2] = 
{
	UTF32Encoding_t1789740781::get_offset_of_bigEndian_29(),
	UTF32Encoding_t1789740781::get_offset_of_byteOrderMark_30(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif