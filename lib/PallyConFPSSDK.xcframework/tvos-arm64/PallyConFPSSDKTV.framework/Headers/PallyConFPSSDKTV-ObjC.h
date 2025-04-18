#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.3 effective-5.10 (swiftlang-6.0.3.1.10 clang-1600.0.30.1)
#ifndef PALLYCONFPSSDKTV_SWIFT_H
#define PALLYCONFPSSDKTV_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PallyConFPSSDKTV",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("ContentKey")
@interface ContentKey : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSData;
@class NSString;
@class License;

@interface ContentKey (SWIFT_EXTENSION(PallyConFPSSDKTV))
@property (nonatomic, copy) NSData * _Nullable keyData;
@property (nonatomic, copy) NSString * _Nullable keyId;
@property (nonatomic, copy) NSString * _Nullable playbackExpiry;
@property (nonatomic, strong) License * _Nullable license;
@end


SWIFT_CLASS("_TtC16PallyConFPSSDKTV8Customer")
@interface Customer : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface Customer (SWIFT_EXTENSION(PallyConFPSSDKTV))
@property (nonatomic, copy) NSData * _Nullable siteCert;
@property (nonatomic, copy) NSString * _Nullable siteId;
@property (nonatomic, copy) NSString * _Nullable url;
@end

typedef SWIFT_ENUM(int8_t, DrmType, open) {
  DrmTypePlayReady = 0,
  DrmTypeWideVine = 1,
  DrmTypeFairPlay = 2,
};


SWIFT_CLASS("_TtC16PallyConFPSSDKTV7License")
@interface License : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSDate;

@interface License (SWIFT_EXTENSION(PallyConFPSSDKTV))
@property (nonatomic, copy) NSString * _Nullable cId;
@property (nonatomic, copy) NSDate * _Nullable downloadDate;
@property (nonatomic, copy) NSDate * _Nullable duration;
@property (nonatomic, copy) NSString * _Nullable key_id;
@property (nonatomic, copy) NSString * _Nullable licenseType;
@property (nonatomic, copy) NSString * _Nullable optionalId;
@property (nonatomic, copy) NSData * _Nullable persistentKey;
@property (nonatomic, copy) NSString * _Nullable playback_duration;
@property (nonatomic, copy) NSString * _Nullable rental_duration;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, strong) ContentKey * _Nullable contentkey;
@end


SWIFT_CLASS("_TtC16PallyConFPSSDKTV22PallyConCustomDataInfo")
@interface PallyConCustomDataInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull contentId;
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
@property (nonatomic, readonly, copy) NSString * _Nonnull optionalId;
@property (nonatomic, readonly) BOOL liveKeyRotation;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AVURLAsset;
@protocol PallyConFPSLicenseDelegate;

/// PallyConDrmConfiguration class to set DRM information.
SWIFT_CLASS("_TtC16PallyConFPSSDKTV24PallyConDrmConfiguration")
@interface PallyConDrmConfiguration : NSObject
/// Ceate a PallyConDrmConfiguration Object
- (nonnull instancetype)initWithAvURLAsset:(AVURLAsset * _Nonnull)avURLAsset contentId:(NSString * _Nonnull)id certificateUrl:(NSString * _Nonnull)url authData:(NSString * _Nullable)authData delegate:(id <PallyConFPSLicenseDelegate> _Nullable)delegate licenseUrl:(NSString * _Nullable)licenseUrl licenseHttpHeader:(NSDictionary<NSString *, NSString *> * _Nullable)licenseHttpHeader licenseCookies:(NSString * _Nullable)licenseCookies renewalInterval:(int64_t)renewalInterval OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class AVAssetResourceLoadingRequest;
@class PallyConResult;

/// A protocol which can be called during license acquisition.
SWIFT_PROTOCOL("_TtP16PallyConFPSSDKTV26PallyConFPSLicenseDelegate_")
@protocol PallyConFPSLicenseDelegate <NSObject>
@optional
- (void)fpsLicenseDidSuccessAcquiringWithContentId:(NSString * _Nonnull)contentId SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the license(result:) function instead.");
- (void)fpsLicenseWithContentId:(NSString * _Nonnull)contentId didFailWithError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the license(result:) function instead.");
- (NSData * _Nullable)contentKeyRequestWithKeyData:(NSData * _Nonnull)keyData requestData:(NSDictionary<NSString *, NSString *> * _Nonnull)requestData SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the licenseCallback(with:httpHeader:) function instead.");
- (BOOL)resourceLoaderRequest:(AVAssetResourceLoadingRequest * _Nonnull)requestResource SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the resourceLoaderCallback(requestResource:) function instead.");
/// Returns results from actions related to acquiring, deleting, saving, etc. licenses.
/// \param result <code>PallyConResult</code>
///
- (void)licenseWithResult:(PallyConResult * _Nonnull)result;
/// Protocol to allow content key requests. You can directly request the content key.
/// Implement licenseCallback() to request a license and return Content key(Data).
/// \param spcData FairPlay Streaming Drm Data
///
/// \param httpHeader PallyCon Request http Header
///
///
/// returns:
/// Returns the Content Key Data acquired from the PallyCon Server.
- (NSData * _Nullable)licenseCallbackWith:(NSData * _Nonnull)spcData httpHeader:(NSDictionary<NSString *, NSString *> * _Nullable)header SWIFT_WARN_UNUSED_RESULT;
/// You can modify the <code>requestResource</code> of <code>AVAssetResourceLoaderDelegate.resourceLoader()</code> used within PallyCon SDK as needed.
/// (e.g. add subtitles to the m3u8 content you want to play)
/// The <code>resourceLoaderCallback()</code> function is called when <code>PallyConFPSSDK.mainm3u8Scheme</code> is applied to the m3u8 URL.
/// Example:
/// \code
/// // Changed [https] URL Scheme to [PallyConFPSSDK.mainm3u8Scheme]
/// https://somedomain.com/playlist.m3u8 -> mainm3u8://somedomain.com/playlist.m3u8
///
/// \endcode@param         requestResource
/// An instance of AVAssetResourceLoadingRequest that provides information about the requested resource.
/// @result         TRUE  if the delegate can load the resource indicated by the AVAssetResourceLoadingRequest; otherwise FALSE.
- (BOOL)resourceLoaderCallbackWithRequestResource:(AVAssetResourceLoadingRequest * _Nonnull)requestResource SWIFT_WARN_UNUSED_RESULT;
@end

@class PallyConTokenInfo;

/// This is a <code>PallyConFPSSDK</code> class that can license FPS content and download content.
/// <code>PallyConFPSLicenseDelegate</code> is used to handle errors while acquiring license.
SWIFT_CLASS("_TtC16PallyConFPSSDKTV14PallyConFPSSDK")
@interface PallyConFPSSDK : NSObject
/// Creates and initializes an PallyConFPSSDK.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithFpsLicenseDelegate:(id <PallyConFPSLicenseDelegate> _Nullable)fpsLicenseDelegate error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `init()` instead");
- (nullable instancetype)initWithSiteId:(NSString * _Nonnull)siteId siteKey:(NSString * _Nonnull)siteKey fpsLicenseDelegate:(id <PallyConFPSLicenseDelegate> _Nullable)fpsLicenseDelegate error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `init()` instead");
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset token:(NSString * _Nonnull)token licenseUrl:(NSString * _Nonnull)licenseUrl appleCertUrl:(NSString * _Nonnull)appleCertUrl licenseRenewalInterval:(int64_t)licenseRenewalInterval SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId token:(NSString * _Nonnull)token licenseUrl:(NSString * _Nonnull)licenseUrl appleCertUrl:(NSString * _Nonnull)appleCertUrl liveKeyRotation:(BOOL)liveKeyRotation licenseRenewalInterval:(int64_t)licenseRenewalInterval SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset userId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId optionalId:(NSString * _Nonnull)optionalId liveKeyRotation:(BOOL)liveKeyRotation licenseUrl:(NSString * _Nonnull)licenseUrl SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (void)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset contentId:(NSString * _Nonnull)contentId licenseUrl:(NSString * _Nonnull)licenseUrl appleCertUrl:(NSString * _Nonnull)appleCertUrl liveKeyRotation:(BOOL)liveKeyRotation SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (BOOL)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset customData:(NSString * _Nonnull)customData error:(NSError * _Nullable * _Nullable)error SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (BOOL)prepareWithUrlAsset:(AVURLAsset * _Nonnull)urlAsset customData:(NSString * _Nonnull)customData appleCertUrl:(NSString * _Nonnull)appleCertUrl error:(NSError * _Nullable * _Nullable)error SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `prepare(_ config: PallyConDrmConfiguration)` instead");
- (NSString * _Nullable)getOfflineLicenseExpireDateWithContentId:(NSString * _Nonnull)contentId error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `getExpiryDateOfSavedLicense(contentId:)` instead") SWIFT_AVAILABILITY(ios,introduced=11.0);
- (BOOL)removeLicenseWithContentId:(NSString * _Nonnull)contentId error:(NSError * _Nullable * _Nullable)error SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `delete(contentId:)` instead");
- (PallyConCustomDataInfo * _Nullable)getCustomDataInfoFrom:(NSString * _Nonnull)customData error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1);
- (id _Nullable)getCustomDataForChromcastWithUserId:(NSString * _Nonnull)userId contentId:(NSString * _Nonnull)contentId optionalId:(NSString * _Nonnull)optionalId error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1);
- (id _Nullable)getCustomDataForChromcastWithToken:(NSString * _Nonnull)token SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use the `getChromcastLicenseRequestJson(authData:)` instead");
+ (PallyConTokenInfo * _Nullable)getTokenInfoFrom:(NSString * _Nonnull)token error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,deprecated=0.0.1);
@end


@interface PallyConFPSSDK (SWIFT_EXTENSION(PallyConFPSSDKTV))
/// The <code>prepare(config:)</code> function sets the information to request a license for <code>FairPlay Streaming</code> content.
/// If <code>PallyConFPSLicenseDelegate</code> is set, <code>PallyConFPSLicenseDelegate.license(result:)</code> returns the result.
/// \param config PallyConDrmConfiguration.
///
///
/// throws:
/// <code>PallyConError</code> Occurs when there is an error while storing data in license Database.
- (void)prepareWithContent:(PallyConDrmConfiguration * _Nonnull)config SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.2);
/// Get a json data for play in chromcast.
/// \param authData token or customData string of the content to be played.
///
///
/// returns:
/// Json data or <code>nil</code>
- (id _Nullable)getJsonforChromecastPlaybackWithAuthData:(NSString * _Nonnull)authData SWIFT_WARN_UNUSED_RESULT;
@end


/// Offline licence expiry information class.
SWIFT_CLASS("_TtC16PallyConFPSSDKTV25PallyConOfflineExpiryDate")
@interface PallyConOfflineExpiryDate : NSObject
- (nonnull instancetype)initWithDownloadDate:(NSDate * _Nullable)downloadDate rentalDuration:(NSString * _Nullable)rentalDuration playbackDuration:(NSString * _Nullable)playbackDuration OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;

/// License acquisition result information.
SWIFT_CLASS("_TtC16PallyConFPSSDKTV14PallyConResult")
@interface PallyConResult : NSObject
/// Content ID
@property (nonatomic, readonly, copy) NSString * _Nonnull contentId;
/// Indicates success or failure. false is 0. true is 1 or non-zero values.
@property (nonatomic) BOOL isSuccess;
/// NSNumber representation of isSuccess for Objective-C compatibility
@property (nonatomic, readonly, strong) NSNumber * _Nonnull isSuccessNumber;
/// Content Key ID
@property (nonatomic, copy) NSString * _Nullable keyId;
/// The expiration date for that <code>contentId</code>, if any, is displayed.
@property (nonatomic, strong) PallyConOfflineExpiryDate * _Nullable offlineExpiry;
/// This is a function that allows you to check the contents of an error in Objective-C.
/// In Swift, you can check PallyConError.error.
- (NSString * _Nonnull)getPallyConErrorForObjC SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16PallyConFPSSDKTV17PallyConTokenInfo") SWIFT_AVAILABILITY(ios,deprecated=0.0.1)
@interface PallyConTokenInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// License Renewal Interval.
/// It must be the same as the time(interval) specified in the PallyCon console.
/// If it is longer than the specified time, a license expiration error occurs, and if it is smaller than the specified time, the license cost will increases.
/// The value received from the PallyCon license server takes precedence over the API parameter value.
/// \code
/// case FiveMinute = 300    /// 300 Second
/// case TenMinute = 600     /// 600 Second
/// case FifteenMinute = 900 /// 900 Second
///
/// \endcode
typedef SWIFT_ENUM(int64_t, RenewalInterval, open) {
/// 5 minutes
  RenewalIntervalFiveMinute = 300,
/// 10 minutes
  RenewalIntervalTenMinute = 600,
/// 15 minutes
  RenewalIntervalFifteenMinute = 900,
/// 0 minutes
  RenewalIntervalZero = 0,
};


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
