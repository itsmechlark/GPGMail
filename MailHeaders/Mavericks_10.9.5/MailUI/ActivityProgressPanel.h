/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCActivityMonitor, NSPanel, NSProgressIndicator, NSTextField, NSTimer;

@interface ActivityProgressPanel : NSObject
{
    MCActivityMonitor *_monitor;
    NSTimer *_timer;
    NSPanel *_progressPanel;
    NSProgressIndicator *_progressBar;
    NSTextField *_statusMessageField;
}

@property(nonatomic) NSTextField *statusMessageField; // @synthesize statusMessageField=_statusMessageField;
@property(nonatomic) NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) NSPanel *progressPanel; // @synthesize progressPanel=_progressPanel;
- (void)cancel:(id)arg1;
- (void)_activityEnded:(id)arg1;
- (void)_activityStarted:(id)arg1;
- (void)_updateProgressBar;
- (void)setStatusMessage:(id)arg1;
- (id)statusMessage;
- (void)setActivityMonitor:(id)arg1;
- (id)activityMonitor;
- (void)dealloc;
- (void)_invalidateTimer;
- (id)init;

@end
