/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRelativeRect;



@interface OADStretchTechnique : OADImageFillTechnique 
{
    OADRelativeRect *mFillRect;
    BOOL mIsFillRectOverridden;
}

+ (id)defaultProperties;

- (id)fillRect;
- (void)setFillRect:(id)arg1;
- (BOOL)isFillRectOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end