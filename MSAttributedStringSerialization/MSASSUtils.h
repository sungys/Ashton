@interface MSASSUtils : NSObject

+ (void)diffDictionary:(NSDictionary *)prev to:(NSDictionary *)current created:(NSDictionary **)created removed:(NSDictionary **)removed;

#if TARGET_OS_IPHONE
// In iOS 6 the attributed of an NSAttributedString have changed a lot, so we need to special case iOS5
// YES - iOS 6+
// NO - iOS 5
+ (BOOL)NSASHasUIKitAdditions;
#endif

@end