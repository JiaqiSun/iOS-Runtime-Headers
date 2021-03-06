/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMDrawingContext, OADShape;

@interface PMDrawableMapper : CMDrawableMapper {
    CMDrawingContext *mDrawingContext;
    OADShape *mShape;
    BOOL mTopLevelMapper;
}

- (void)dealloc;
- (id)drawingContext;
- (BOOL)isTopLevelMapper;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 state:(id)arg4;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (void)setDrawingContext:(id)arg1;
- (void)setTopLevelMapper:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shapeTextBoxWithState:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })slideRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToPage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
