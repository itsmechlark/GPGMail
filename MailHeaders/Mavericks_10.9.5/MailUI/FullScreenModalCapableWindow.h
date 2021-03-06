/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSResponder, WindowTransformAnimation;

@interface FullScreenModalCapableWindow : NSWindow
{
    BOOL _hasTransform;
    BOOL _disableFrameConstraint;
    BOOL _isModal;
    BOOL _shouldNotSaveFrame;
    WindowTransformAnimation *_windowTransformAnimation;
    NSResponder *_nextFirstResponder;
}

@property BOOL shouldNotSaveFrame; // @synthesize shouldNotSaveFrame=_shouldNotSaveFrame;
@property BOOL isModal; // @synthesize isModal=_isModal;
@property(retain) NSResponder *nextFirstResponder; // @synthesize nextFirstResponder=_nextFirstResponder;
@property BOOL disableFrameConstraint; // @synthesize disableFrameConstraint=_disableFrameConstraint;
@property WindowTransformAnimation *windowTransformAnimation; // @synthesize windowTransformAnimation=_windowTransformAnimation;
- (void)setIdentityTransform;
- (void)setTransformForAnimation:(struct CGAffineTransform)arg1 anchorPoint:(struct CGPoint)arg2;
- (BOOL)isMainWindow;
- (BOOL)canEnterFullScreenMode;
- (void)makeKeyAndOrderFrontForAnimation;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)saveFrameUsingName:(id)arg1;
- (void)orderOut:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)dealloc;

@end

