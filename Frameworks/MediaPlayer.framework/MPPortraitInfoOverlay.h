/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPItem, MPTextView, MPNowPlayingItemQueueInfoButton, MPPortraitControlsOverlay;



@interface MPPortraitInfoOverlay : UIView <MPPlaybackControlsDelegate>
{
    id _delegate;
    MPItem *_item;
    NSUInteger _visibleParts;
    MPPortraitControlsOverlay *_controlsView;
    MPTextView *_displayableTextView;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    unsigned int _transitioning : 1;
    unsigned int _allowsDetailScrubbing : 1;
}

@property BOOL allowsDetailScrubbing;
@property NSUInteger visibleParts;
@property(retain) MPItem *item;
@property id delegate;


- (BOOL)hide;
- (id)item;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAlpha:(float)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setItem:(id)arg1;
- (void)_displayableTextRemovalAnimationDidStop;
- (void)_hideSnapshotAnimationFinished;
- (void)_displayableTextAvailable:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (id)_itemQueueInfoButton:(BOOL)arg1;
- (void)_hideControlsAndTextView;
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (void)_updateDisplayableTextViewArtworkForItem:(id)arg1 time:(double)arg2;
- (void)_reloadDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (void)_removeDisplayableTextWithAnimation:(BOOL)arg1;
- (void)_reloadViews;
- (void)_updateDisplayableTextViewForItem:(id)arg1 animate:(BOOL)arg2;
- (BOOL)_configureNowPlayingQueueInfoButton:(id)arg1 item:(id)arg2 time:(double)arg3;
- (void)_updateItemQueueInfoButtonForItem:(id)arg1 atTime:(double)arg2 animate:(BOOL)arg3;
- (void)_updateAllItemDependenciesForItem:(id)arg1 animate:(BOOL)arg2;
- (id)_displayableTextView;
- (id)_controlsView;
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)willTransition;
- (void)didTransition;
- (BOOL)allowsDetailScrubbing;
- (void)startTicking;
- (void)stopTicking;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (NSUInteger)visibleParts;
- (void)setVisibleParts:(NSUInteger)arg1;

@end