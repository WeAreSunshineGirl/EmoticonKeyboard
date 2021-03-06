// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC12表情键盘11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
@class UIFont;
@class NSAttributedString;


/// 表情模型
SWIFT_CLASS("_TtC12表情键盘10STEmoticon")
@interface STEmoticon : NSObject

/// 表情类型 false - 图片表情 / true - emoji
@property (nonatomic) BOOL type;

/// 表情字符串 发送给新浪微博的服务器[节约流量]
@property (nonatomic, copy) NSString * _Nullable chs;

/// 表情图片名称 用于本地图文混排
@property (nonatomic, copy) NSString * _Nullable png;

/// emoji 的十六进制编码
@property (nonatomic, copy) NSString * _Nullable code;

/// 表情使用次数
@property (nonatomic) NSInteger times;

/// emoji的字符串
@property (nonatomic, copy) NSString * _Nullable emoji;

/// 表情模型所在目录  方便获取图像
@property (nonatomic, copy) NSString * _Nullable directory;
@property (nonatomic, readonly, strong) UIImage * _Nullable image;
- (NSAttributedString * _Nonnull)imageText:(UIFont * _Nonnull)font;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;
@class NSCoder;


/// 表情附件
SWIFT_CLASS("_TtC12表情键盘20STEmoticonAttachment")
@interface STEmoticonAttachment : NSTextAttachment

/// 表情纯文本 用于发送给服务器
@property (nonatomic, copy) NSString * _Nullable chs;
- (nonnull instancetype)initWithData:(NSData * _Nullable)contentData ofType:(NSString * _Nullable)uti OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol STEmoticonCellDelegate;
@class UILabel;

SWIFT_CLASS("_TtC12表情键盘14STEmoticonCell")
@interface STEmoticonCell : UICollectionViewCell

/// 代理
@property (nonatomic, weak) id <STEmoticonCellDelegate> _Nullable delegate;

/// 当前页面的表情模型数组 ‘最多’ 20 个
@property (nonatomic, copy) NSArray<STEmoticon *> * _Nullable emoticons;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified label;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
@end


@interface STEmoticonCell (SWIFT_EXTENSION(表情键盘))
@end



/// 表情 cell 的协议
SWIFT_PROTOCOL("_TtP12表情键盘22STEmoticonCellDelegate_")
@protocol STEmoticonCellDelegate <NSObject>

/// 表情 cell 选中表情模型
///
/// \param em 表情模型 /nil 表示删除
- (void)emoticonCellDidSelectedEmoticon:(STEmoticonCell * _Nonnull)cell em:(STEmoticon * _Nullable)em;
@end

@class UICollectionView;
@class STEmoticonToolbar;
@class UIPageControl;

SWIFT_CLASS("_TtC12表情键盘19STEmoticonInputView")
@interface STEmoticonInputView : UIView
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, weak) IBOutlet STEmoticonToolbar * _Null_unspecified toolbar;
@property (nonatomic, weak) IBOutlet UIPageControl * _Null_unspecified pageControl;
+ (STEmoticonInputView * _Nonnull)inputView:(void (^ _Nonnull)(STEmoticon * _Nullable emoticon))selectedEmoticon;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface STEmoticonInputView (SWIFT_EXTENSION(表情键盘)) <STEmoticonCellDelegate>

/// 选中的表情回调
///
/// \param cell 分页cell
///
/// \param em 选中的表情 删除键为 nil
- (void)emoticonCellDidSelectedEmoticon:(STEmoticonCell * _Nonnull)cell em:(STEmoticon * _Nullable)em;
@end


SWIFT_PROTOCOL("_TtP12表情键盘25STEmoticonToolbarDelegate_")
@protocol STEmoticonToolbarDelegate <NSObject>

/// 表情工具栏选中分组项索引
///
/// \param toolbar 工具栏
///
/// \param index 索引
- (void)emoticonToolbarDidSelectedItemIndex:(STEmoticonToolbar * _Nonnull)toolbar index:(NSInteger)index;
@end


@interface STEmoticonInputView (SWIFT_EXTENSION(表情键盘)) <STEmoticonToolbarDelegate>
- (void)emoticonToolbarDidSelectedItemIndex:(STEmoticonToolbar * _Nonnull)toolbar index:(NSInteger)index;
@end

@class UIScrollView;

@interface STEmoticonInputView (SWIFT_EXTENSION(表情键盘)) <UICollectionViewDelegate, UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end

@class NSIndexPath;

@interface STEmoticonInputView (SWIFT_EXTENSION(表情键盘)) <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end



/// 表情集合视图的布局
SWIFT_CLASS("_TtC12表情键盘16STEmoticonLayout")
@interface STEmoticonLayout : UICollectionViewFlowLayout
- (void)prepareLayout;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// 表情包模型
SWIFT_CLASS("_TtC12表情键盘17STEmoticonPackage")
@interface STEmoticonPackage : NSObject

/// 表情包的分组名
@property (nonatomic, copy) NSString * _Nullable groupName;

/// 背景图片名称
@property (nonatomic, copy) NSString * _Nullable bgImageName;

/// 表情包目录 从目录下加载 info.plst 可以创建表情模型数组
@property (nonatomic, copy) NSString * _Nullable directory;

/// 表情页面的数量
@property (nonatomic, readonly) NSInteger numberOfPages;

/// 懒加载的表情模型的空数组 使用懒加载可以避免后续的解包
@property (nonatomic, copy) NSArray<STEmoticon *> * _Nonnull emoticons;

/// 从懒加载的表情包中 按照 page 截取最多 20 个表情模型的数组
///
/// \param page 页数
///
/// \returns  返回的表情模型数组
/// 例如 有 26个表情
/// page= 0  返回0-19个模型
/// page=1   返回20-25个模型
- (NSArray<STEmoticon *> * _Nonnull)emoticon:(NSInteger)page;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// 表情选择提示视图
SWIFT_CLASS("_TtC12表情键盘17STEmoticonTipView")
@interface STEmoticonTipView : UIImageView

/// 提示视图的表情模型
@property (nonatomic, strong) STEmoticon * _Nullable emoticon;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// 表情键盘底部工具栏
SWIFT_CLASS("_TtC12表情键盘17STEmoticonToolbar")
@interface STEmoticonToolbar : UIView
@property (nonatomic, weak) id <STEmoticonToolbarDelegate> _Nullable delegate;
@property (nonatomic) NSInteger selectedIndex;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface STEmoticonToolbar (SWIFT_EXTENSION(表情键盘))
@end


@class UITextView;
@class NSBundle;

SWIFT_CLASS("_TtC12表情键盘14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified textView;
@property (nonatomic, strong) STEmoticonInputView * _Nonnull emoticonView;
- (IBAction)show:(id _Nonnull)sender;

/// 计算型属性 返回TextView 对应的纯文本字符串[将属性图片转换成文字]
@property (nonatomic, readonly, copy) NSString * _Nonnull emoticonText;

/// 向文本视图插入表情符号【图文混排】
///
/// \param em 选中的表情符号 nil 表示删除
- (void)insertEmoticon:(STEmoticon * _Nullable)em;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
