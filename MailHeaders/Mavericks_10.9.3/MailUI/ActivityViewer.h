/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MVTerminationHandler.h"
#import "NSWindowDelegate.h"

@class FlippedView, NSMutableArray, NSPanel, NSScrollView, NSTimer;

@interface ActivityViewer : NSObject <MVTerminationHandler, NSWindowDelegate>
{
    NSMutableArray *_entries;
    long long _numActiveEntries;
    NSTimer *_updateTimer;
    BOOL _userIsBeingPromptedForTermination;
    FlippedView *_docView;
    NSScrollView *_scrollView;
    NSPanel *_window;
}

@property(retain, nonatomic) NSPanel *window; // @synthesize window=_window;
@property(nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) FlippedView *docView; // @synthesize docView=_docView;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)statusMessageForTarget:(id)arg1;
- (void)toggleActivityViewerVisible;
- (BOOL)isActivityViewerVisible;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_promptUserForTermination;
- (BOOL)needsToPromptUserBeforeTermination:(id)arg1;
- (long long)countOfBackgroundActivities;
- (BOOL)hasBackgroundActivity;
- (void)_tileViews;
- (void)removeEntry:(id)arg1;
- (void)_appendEntry:(id)arg1;
- (void)_addViewToViewerWindow:(id)arg1;
- (void)_updateAllEntries;
- (void)_handleNewActivity:(id)arg1;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)dealloc;
- (id)init;

@end
