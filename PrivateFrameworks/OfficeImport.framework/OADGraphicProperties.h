/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill, OADStroke;



@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
}


- (id)scene3D;
- (void)setScene3D:(id)arg1;
- (BOOL)hasScene3D;
- (id)shape3D;
- (void)setShape3D:(id)arg1;
- (BOOL)hasShape3D;
- (void)setIsBehindText:(BOOL)arg1;
- (BOOL)hasIsBehindText;
- (id)initWithDefaults;
- (BOOL)hasEffects;
- (void)removeUnnecessaryOverrides;
- (id)effects;
- (void)setEffects:(id)arg1;
- (BOOL)hasFill;
- (BOOL)hasStroke;
- (void)setStroke:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setFill:(id)arg1;
- (BOOL)isBehindText;
- (id)fill;
- (id)stroke;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end