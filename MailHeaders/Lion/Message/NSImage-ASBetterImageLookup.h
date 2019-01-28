/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSImage.h"

@interface NSImage (ASBetterImageLookup)
+ (id)appIconIncludingUserCustomization;
+ (id)appIconWithUnreadBadge:(int)arg1 baseImageName:(id)arg2;
+ (id)newScaledImageFromImage:(id)arg1 desiredSize:(struct CGSize)arg2;
+ (id)imagePasteboardTypesWithPreferenceToPNG;
+ (id)imageDataForType:(id *)arg1 fromPasteboard:(id)arg2;
+ (id)rotateImage:(id)arg1 byDegrees:(double)arg2;
- (id)opaqueImage;
- (id)bitmapImageRep;
- (id)PNGData;
@property(readonly) unsigned long long frameCount;
@property(readonly) BOOL isAnimated;
- (void)drawTransformedInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 flip:(BOOL)arg5;
- (double)pixelsWide;
- (double)pixelsHigh;
@end
