/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableIndexSet;

@interface _MFRedundantTextIdentifierSolutionContext : NSObject
{
    BOOL _searchInForwardDirection;
    BOOL _matchedEntireOriginalContiguously;
    CDStruct_f9502b4c *_replyBuffer;
    unsigned long long _replyStartIndex;
    unsigned long long _replyLength;
    CDStruct_f9502b4c *_originalBuffer;
    unsigned long long _originalStartIndex;
    unsigned long long _originalLength;
    NSDictionary *_originalAttachmentContextsByURL;
    NSDictionary *_replyAttachmentContextsByURL;
    NSMutableArray *_redundantRanges;
    NSMutableIndexSet *_redundantAttachmentStartIndexes;
    NSMutableArray *_attributionLineRanges;
    unsigned long long _startingIndexForRedundantRanges;
    unsigned long long _startingIndexForAttributionLineRanges;
    long long _lastIndexMatchedInOriginal;
    long long _lastIndexMatchedInReply;
}

@property(nonatomic) BOOL matchedEntireOriginalContiguously; // @synthesize matchedEntireOriginalContiguously=_matchedEntireOriginalContiguously;
@property(nonatomic) BOOL searchInForwardDirection; // @synthesize searchInForwardDirection=_searchInForwardDirection;
@property(nonatomic) long long lastIndexMatchedInReply; // @synthesize lastIndexMatchedInReply=_lastIndexMatchedInReply;
@property(nonatomic) long long lastIndexMatchedInOriginal; // @synthesize lastIndexMatchedInOriginal=_lastIndexMatchedInOriginal;
@property(nonatomic) unsigned long long startingIndexForAttributionLineRanges; // @synthesize startingIndexForAttributionLineRanges=_startingIndexForAttributionLineRanges;
@property(nonatomic) unsigned long long startingIndexForRedundantRanges; // @synthesize startingIndexForRedundantRanges=_startingIndexForRedundantRanges;
@property(retain, nonatomic) NSMutableArray *attributionLineRanges; // @synthesize attributionLineRanges=_attributionLineRanges;
@property(retain, nonatomic) NSMutableIndexSet *redundantAttachmentStartIndexes; // @synthesize redundantAttachmentStartIndexes=_redundantAttachmentStartIndexes;
@property(retain, nonatomic) NSMutableArray *redundantRanges; // @synthesize redundantRanges=_redundantRanges;
@property(readonly, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, nonatomic) unsigned long long originalLength; // @synthesize originalLength=_originalLength;
@property(nonatomic) unsigned long long originalStartIndex; // @synthesize originalStartIndex=_originalStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) unsigned long long replyLength; // @synthesize replyLength=_replyLength;
@property(nonatomic) unsigned long long replyStartIndex; // @synthesize replyStartIndex=_replyStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *replyBuffer; // @synthesize replyBuffer=_replyBuffer;
- (BOOL)location:(unsigned long long)arg1 isInRangeArray:(id)arg2 startingIndex:(unsigned long long *)arg3;
- (long long)contentTypeForIndex:(unsigned long long)arg1;
- (void)addRangeWithStart:(long long)arg1 end:(long long)arg2 toArray:(id)arg3;
- (void)computeAttributionRangesInReply;
- (void)computeRedundantRangesInReply;
- (id)description;
- (void)dealloc;
- (id)initWithReply:(CDStruct_f9502b4c *)arg1 replyStartIndex:(unsigned long long)arg2 replyLength:(unsigned long long)arg3 replyAttachmentContextsByURL:(id)arg4 original:(CDStruct_f9502b4c *)arg5 originalStartIndex:(unsigned long long)arg6 originalLength:(unsigned long long)arg7 originalAttachmentContextsByURL:(id)arg8 searchInForwardDirection:(BOOL)arg9;

@end
