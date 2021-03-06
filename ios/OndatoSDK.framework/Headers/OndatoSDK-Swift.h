// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef ONDATOSDK_SWIFT_H
#define ONDATOSDK_SWIFT_H
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="OndatoSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class OndatoGDRPAppearance;
@class UIColor;
@class UIImage;
@class NSString;

SWIFT_CLASS_NAMED("OndatoAppearance")
@interface OndatoAppearance : NSObject
@property (nonatomic, strong) OndatoGDRPAppearance * _Nonnull consentWindow;
@property (nonatomic, strong) UIColor * _Nonnull progressColor;
@property (nonatomic, strong) UIColor * _Nonnull errorColor;
@property (nonatomic, strong) UIColor * _Nonnull errorTextColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonTextColor;
@property (nonatomic, strong) UIImage * _Nullable logoImage;
@property (nonatomic, copy) NSString * _Nullable regularFontName;
@property (nonatomic, copy) NSString * _Nullable mediumFontName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIFont;
@class NSNumber;

SWIFT_CLASS_NAMED("OndatoButtonAppearance")
@interface OndatoButtonAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull tintColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic) CGFloat cornerRadius;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class OndatoLabelAppearance;
@class OndatoTextViewAppearance;

SWIFT_CLASS_NAMED("OndatoConsentAppearance")
@interface OndatoGDRPAppearance : NSObject
@property (nonatomic, strong) OndatoLabelAppearance * _Nonnull header;
@property (nonatomic, strong) OndatoTextViewAppearance * _Nonnull body;
@property (nonatomic, strong) OndatoButtonAppearance * _Nonnull acceptButton;
@property (nonatomic, strong) OndatoButtonAppearance * _Nonnull declineButton;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoDocumentType, "OndatoDocumentType", open) {
  OndatoDocumentTypePassport = 0,
  OndatoDocumentTypeIdCard = 1,
  OndatoDocumentTypeDrivingLicence = 2,
};

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoServerMode, "OndatoEnvironment", open) {
  OndatoServerModeTest = 0,
  OndatoServerModeLive = 1,
};


SWIFT_CLASS_NAMED("OndatoFlowConfiguration")
@interface OndatoFlowConfiguration : NSObject
@property (nonatomic) BOOL showSplashScreen;
@property (nonatomic) BOOL showStartScreen;
@property (nonatomic) BOOL showConsentScreen;
@property (nonatomic) BOOL showSelfieAndDocumentScreen;
@property (nonatomic) BOOL showSuccessWindow;
@property (nonatomic) BOOL ignoreLivenessErrors;
@property (nonatomic) BOOL ignoreVerificationErrors;
@property (nonatomic) BOOL recordProcess;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIViewController;
@class UIView;
enum OndatoError : NSInteger;

SWIFT_PROTOCOL_NAMED("OndatoFlowDelegate")
@protocol OndatoFlowDelegate
@optional
- (UIViewController * _Nonnull)viewControllerForStartWithStartPressed:(void (^ _Nonnull)(void))startPressed SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)viewForLoadingWithProgress:(float)progress SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)viewForSuccessWithContinue:(void (^ _Nonnull)(void))continue_ SWIFT_WARN_UNUSED_RESULT;
@required
- (void)flowDidSucceedWithIdentificationId:(NSString * _Nullable)identificationId;
- (void)flowDidFailWithIdentificationId:(NSString * _Nullable)identificationId error:(enum OndatoError)error;
@end


SWIFT_CLASS_NAMED("OndatoLabelAppearance")
@interface OndatoLabelAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull color;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum OndatoSupportedLanguage : NSInteger;
@class NSBundle;

SWIFT_CLASS_NAMED("OndatoLocalizeHelper")
@interface OndatoLocalizeHelper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum OndatoSupportedLanguage language;)
+ (enum OndatoSupportedLanguage)language SWIFT_WARN_UNUSED_RESULT;
+ (void)setLanguage:(enum OndatoSupportedLanguage)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)setLocalizationBundle:(NSBundle * _Nonnull)bundle for:(enum OndatoSupportedLanguage)language;
@end


SWIFT_CLASS("_TtC9OndatoSDK9OndatoLog")
@interface OndatoLog : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS("_TtC9OndatoSDK24OndatoMainViewController")
@interface OndatoMainViewController : UINavigationController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end






SWIFT_CLASS_NAMED("OndatoRecorderConfiguration")
@interface OndatoRecorderConfiguration : NSObject
@property (nonatomic) NSInteger bitrate;
@property (nonatomic) float resolutionRatio;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class OndatoServiceConfiguration;

SWIFT_CLASS_NAMED("OndatoService")
@interface OndatoService : NSObject
@property (nonatomic, strong) id <OndatoFlowDelegate> _Nullable flowDelegate;
@property (nonatomic, strong) OndatoServiceConfiguration * _Nonnull configuration;
@property (nonatomic, copy) NSString * _Nonnull identificationId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)initializeWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password;
- (void)initializeWithAccessToken:(NSString * _Nonnull)accessToken;
- (OndatoMainViewController * _Nonnull)instantiateOndatoViewController SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS_NAMED("OndatoServiceConfiguration")
@interface OndatoServiceConfiguration : NSObject
@property (nonatomic, strong) OndatoAppearance * _Nonnull appearance;
@property (nonatomic, strong) OndatoFlowConfiguration * _Nonnull flowConfiguration;
@property (nonatomic, strong) OndatoRecorderConfiguration * _Nonnull recorderConfiguration;
@property (nonatomic) enum OndatoServerMode mode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoError, "OndatoServiceError", open) {
  OndatoErrorCancelled = 0,
  OndatoErrorInvalidServerResponse = 1,
  OndatoErrorInvalidCredentials = 2,
  OndatoErrorUnexpectedInternalError = 3,
};
static NSString * _Nonnull const OndatoErrorDomain = @"OndatoSDK.OndatoServiceError";

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoSupportedLanguage, "OndatoSupportedLanguage", open) {
  OndatoSupportedLanguageDE = 0,
  OndatoSupportedLanguageEN = 1,
  OndatoSupportedLanguageET = 2,
  OndatoSupportedLanguageLT = 3,
  OndatoSupportedLanguageLV = 4,
  OndatoSupportedLanguageRU = 5,
};


SWIFT_CLASS_NAMED("OndatoTextViewAppearance")
@interface OndatoTextViewAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull textColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
