/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class CAGradientLayer, CALayer, NLArcLayer, NLArcMaskLayer, NLArcSegmentLayer, UIImage;

@interface NLArcView : UIView {
    NLArcMaskLayer *_arcMaskLayer;
    double _arcStart;
    NLArcLayer *_baseRing;
    CALayer *_coloredDotIndicatorLayer;
    CAGradientLayer *_gradientLayer;
    UIImage *_icon;
    CALayer *_iconLayer;
    double _indicatorPercentage;
    long long _numberOfSegments;
    double _radius;
    NLArcSegmentLayer *_segmentLayer;
    CALayer *_whiteDotIndicatorLayer;
    bool_shouldDrawIndicator;
    bool_shouldDrawSegmented;
    bool_shouldShowIcon;
}

@property double arcStart;
@property(retain) UIImage * icon;
@property double indicatorPercentage;
@property double lineWidth;
@property long long numberOfSegments;
@property double radius;
@property bool shouldDrawIndicator;
@property bool shouldDrawSegmented;
@property bool shouldShowIcon;

- (void).cxx_destruct;
- (id)_coloredDotIndicatorLayer;
- (void)_positionIndicator;
- (id)_segmentLayer;
- (void)_showIndicatorIfNecessary;
- (void)_showSegmentsIfNecessary;
- (id)_whiteDotIndicatorLayer;
- (void)animateToCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4;
- (double)arcStart;
- (id)icon;
- (double)indicatorPercentage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineWidth;
- (long long)numberOfSegments;
- (double)percentageFull;
- (double)radius;
- (void)setArcStart:(double)arg1;
- (void)setBaseColor:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIndicatorPercentage:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setNumberOfSegments:(long long)arg1 animated:(bool)arg2;
- (void)setNumberOfSegments:(long long)arg1;
- (void)setPercentageFull:(double)arg1 animated:(bool)arg2;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2 completion:(id)arg3;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setPercentageFull:(double)arg1;
- (void)setPercentageUnfull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setRadius:(double)arg1 animated:(bool)arg2;
- (void)setRadius:(double)arg1;
- (void)setShouldDrawIndicator:(bool)arg1;
- (void)setShouldDrawSegmented:(bool)arg1;
- (void)setShouldShowIcon:(bool)arg1;
- (bool)shouldDrawIndicator;
- (bool)shouldDrawSegmented;
- (bool)shouldShowIcon;

@end