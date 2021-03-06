/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSCECalculationEngine, TSCECellCoordinateVector, TSCEOwnerFormulaMap, TSDFill, TSDStroke, TSKDocumentRoot, TSTCell, TSTCellDictionary, TSTCellStyle, TSTConditionalStyleFormulaOwner, TSTHiddenStateFormulaOwner, TSTImportWarningSetByCoordinateMap, TSTSortRuleReferenceTracker, TSTTableDataStore, TSTTableFilterSet, TSTTableSortOrder, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle, TSWPStorage;

@interface TSTTableModel : TSPObject <TSTTableStrokeProviding, TSDMixing> {
    struct { 
        TSTTableStyle *tableStyle; 
        TSTCellStyle *bodyCellStyle; 
        TSTCellStyle *headerRowCellStyle; 
        TSTCellStyle *headerColumnCellStyle; 
        TSTCellStyle *footerRowCellStyle; 
        TSWPParagraphStyle *bodyTextStyle; 
        TSWPParagraphStyle *headerRowTextStyle; 
        TSWPParagraphStyle *headerColumnTextStyle; 
        TSWPParagraphStyle *footerRowTextStyle; 
        TSWPParagraphStyle *tableNameStyle; 
        TSWPShapeStyle *tableNameShapeStyle; 
    struct _TSTDefaultCellBlock { 
        TSTCell *defaultBodyCell; 
        TSTCell *defaultHeaderRowCell; 
        TSTCell *defaultHeaderColumnCell; 
        TSTCell *defaultFooterRowCell; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    TSCECalculationEngine *mCalcEngine;
    TSTCellDictionary *mCellsPendingWrite;
    TSCECellCoordinateVector *mCellsToInvalidateAfterRecalc;
    } mCellsToInvalidateAfterRecalcLock;
    TSCECellCoordinateVector *mCellsToInvalidateNonoverflowingAfterRecalc;
    TSTConditionalStyleFormulaOwner *mConditionalStyleFormulaOwner;
    TSTTableDataStore *mDataStore;
    } mDefaultCells;
    float mDefaultColumnWidth;
    float mDefaultRowHeight;
    TSWPStorage *mDeprecatedProvider;
    TSTTableFilterSet *mFilterSet;
    TSCEOwnerFormulaMap *mFormulasForUndo;
    struct __CFUUID { } *mFromTableID;
    BOOL mHeaderColumnsFrozen;
    BOOL mHeaderRowsFrozen;
    TSTHiddenStateFormulaOwner *mHiddenStateFormulaOwnerForColumns;
    TSTHiddenStateFormulaOwner *mHiddenStateFormulaOwnerForRows;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfFilteredRows;
    unsigned short mNumberOfFooterRows;
    unsigned short mNumberOfHeaderColumns;
    unsigned short mNumberOfHeaderRows;
    unsigned short mNumberOfHiddenColumns;
    unsigned short mNumberOfHiddenRows;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfUserHiddenColumns;
    unsigned short mNumberOfUserHiddenRows;
    unsigned int mPresetID;
    BOOL mRepeatingHeaderColumnsEnabled;
    BOOL mRepeatingHeaderRowsEnabled;
    TSTTableSortOrder *mSortOrder;
    TSTSortRuleReferenceTracker *mSortRuleReferenceTracker;
    BOOL mStyleApplyClearsAll;
    } mStyles;
    struct __CFUUID { } *mTableID;
    NSString *mTableName;
    BOOL mTableNameBorderEnabled;
    BOOL mTableNameEnabled;
    float mTableNameHeight;
    TSTImportWarningSetByCoordinateMap *mWarningSetsForUndo;
    BOOL mWasUnarchivedFromAProvidedTable;
}

@property(readonly) TSDFill * backgroundFill;
@property(readonly) TSTCellStyle * bodyCellStyle;
@property(readonly) TSDStroke * bodyColumnStroke;
@property(readonly) TSDFill * bodyFill;
@property(readonly) TSDStroke * bodyRowStroke;
@property(readonly) TSWPParagraphStyle * bodyTextStyle;
@property(readonly) TSDStroke * borderStrokeEvenIfNotVisible;
@property TSCECalculationEngine * calcEngine;
@property(readonly) TSTCellDictionary * cellsPendingWrite;
@property(readonly) TSCECellCoordinateVector * cellsToInvalidateAfterRecalc;
@property(readonly) TSCECellCoordinateVector * cellsToInvalidateNonoverflowingAfterRecalc;
@property NSArray * columnWidths;
@property TSTConditionalStyleFormulaOwner * conditionalStyleFormulaOwner;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) TSTCell * defaultBodyCell;
@property(readonly) TSTCell * defaultFooterRowCell;
@property(readonly) TSTCell * defaultHeaderColumnCell;
@property(readonly) TSTCell * defaultHeaderRowCell;
@property(readonly) TSDStroke * defaultHorizontalBorderStroke;
@property(readonly) TSDStroke * defaultVerticalBorderStroke;
@property(copy,readonly) NSString * description;
@property(readonly) TSKDocumentRoot * documentRoot;
@property(copy) TSTTableFilterSet * filterSet;
@property(readonly) TSDStroke * footerRowBodyColumnStroke;
@property(readonly) TSDStroke * footerRowBodyRowStroke;
@property(readonly) TSDStroke * footerRowBorderStroke;
@property(readonly) TSTCellStyle * footerRowCellStyle;
@property(readonly) TSDStroke * footerRowSeparatorStroke;
@property(readonly) TSWPParagraphStyle * footerRowTextStyle;
@property(readonly) TSDFill * footerRowsFill;
@property(retain) TSCEOwnerFormulaMap * formulasForUndo;
@property(readonly) struct __CFUUID { }* fromTableID;
@property(readonly) BOOL hasAlternatingRows;
@property(readonly) BOOL hasTableBorder;
@property(readonly) unsigned int hash;
@property(readonly) TSDStroke * headerColumnBodyColumnStroke;
@property(readonly) TSDStroke * headerColumnBodyRowStroke;
@property(readonly) TSDStroke * headerColumnBorderStroke;
@property(readonly) TSTCellStyle * headerColumnCellStyle;
@property(readonly) TSDStroke * headerColumnSeparatorStroke;
@property(readonly) TSWPParagraphStyle * headerColumnTextStyle;
@property(readonly) TSDFill * headerColumnsFill;
@property BOOL headerColumnsFrozen;
@property(readonly) TSDStroke * headerRowBodyColumnStroke;
@property(readonly) TSDStroke * headerRowBodyRowStroke;
@property(readonly) TSDStroke * headerRowBorderStroke;
@property(readonly) TSTCellStyle * headerRowCellStyle;
@property(readonly) TSDStroke * headerRowSeparatorStroke;
@property(readonly) TSWPParagraphStyle * headerRowTextStyle;
@property(readonly) TSDFill * headerRowsFill;
@property BOOL headerRowsFrozen;
@property(readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForColumns;
@property(readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForRows;
@property unsigned short numberOfColumns;
@property unsigned short numberOfFooterRows;
@property unsigned short numberOfHeaderColumns;
@property unsigned short numberOfHeaderRows;
@property(readonly) unsigned short numberOfHiddenColumns;
@property(readonly) unsigned short numberOfHiddenRows;
@property unsigned short numberOfRows;
@property(readonly) unsigned short numberOfUserHiddenColumns;
@property(readonly) unsigned short numberOfUserHiddenRows;
@property(readonly) unsigned short numberOfVisibleBodyColumns;
@property(readonly) unsigned short numberOfVisibleBodyRows;
@property unsigned int presetID;
@property BOOL repeatingHeaderColumnsEnabled;
@property BOOL repeatingHeaderRowsEnabled;
@property NSArray * rowHeights;
@property(copy) TSTTableSortOrder * sortOrder;
@property(readonly) TSTSortRuleReferenceTracker * sortRuleReferenceTracker;
@property BOOL styleApplyClearsAll;
@property(readonly) Class superclass;
@property(readonly) struct __CFUUID { }* tableID;
@property(retain) NSString * tableName;
@property BOOL tableNameBorderEnabled;
@property(readonly) TSDStroke * tableNameBorderStroke;
@property BOOL tableNameEnabled;
@property float tableNameHeight;
@property(readonly) TSWPShapeStyle * tableNameShapeStyle;
@property(readonly) TSWPParagraphStyle * tableNameStyle;
@property(readonly) TSTTableStyle * tableStyle;
@property(readonly) int tableWritingDirection;
@property(retain) TSTImportWarningSetByCoordinateMap * warningSetsForUndo;
@property BOOL wasUnarchivedFromAProvidedTable;

+ (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRangeForTableArea:(int)arg1 givenTableSize:(struct { unsigned short x1; unsigned short x2; })arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5;
+ (void)chooseUniqueNameForTables:(id)arg1 inContainer:(id)arg2 forPaste:(BOOL)arg3;
+ (void)load;
+ (struct __CFDictionary { }*)newIDMapForPastedTablesInDrawables:(id)arg1 calculationEngine:(id)arg2;
+ (int)tableAreaForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5;
+ (id)unnamedTableString;

- (id).cxx_construct;
- (id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned int)arg3 isNew:(BOOL)arg4;
- (id)addRules:(id)arg1 inFilter:(unsigned int)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allRichTextPayloadStorages;
- (id)applyCellDiff:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)backgroundFill;
- (void)bakeFormulas;
- (id)bandedFillObject;
- (id)bodyCellStyle;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })bodyColumnRange;
- (id)bodyColumnStroke;
- (id)bodyFill;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })bodyRange;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })bodyRowRange;
- (id)bodyRowStroke;
- (id)bodyTextStyle;
- (id)borderStrokeEvenIfNotVisible;
- (id)calcEngine;
- (BOOL)canTranspose;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRangeForTableArea:(int)arg1;
- (id)cellRegionWithConditionalStyleMatchingCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)cellWasModifiedInCurrentRecalcCycle:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)cellsPendingWrite;
- (id)cellsToInvalidateAfterRecalc;
- (id)cellsToInvalidateNonoverflowingAfterRecalc;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 needsNewName:(BOOL)arg3 avoidNames:(id)arg4;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 needsNewName:(BOOL)arg3;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2;
- (void)clearFromTableID;
- (id)columnNameForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 cellRangeContainingName:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg2 restrictToBodyRange:(BOOL)arg3;
- (id)columnWidths;
- (id)conditionalStyleFormulaOwner;
- (void)copyPasteboardCustomFormatsToDocumentAndUpdateCellsInRegion:(id)arg1;
- (id)dataStore;
- (void)dealloc;
- (id)defaultBodyCell;
- (int)defaultCell:(id)arg1 forTableArea:(int)arg2;
- (id)defaultCellForTableArea:(int)arg1;
- (id)defaultCellStyleForTableArea:(int)arg1;
- (id)defaultFooterRowCell;
- (id)defaultHeaderColumnCell;
- (id)defaultHeaderRowCell;
- (id)defaultHorizontalBorderStroke;
- (void)defaultStrokesForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalColumns:(unsigned short)arg5 totalRows:(unsigned short)arg6 tableArea:(int)arg7 outTopStroke:(id*)arg8 outLeftStroke:(id*)arg9 outBottomStroke:(id*)arg10 outRightStroke:(id*)arg11;
- (void)defaultStrokesForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 outTopStroke:(id*)arg2 outLeftStroke:(id*)arg3 outBottomStroke:(id*)arg4 outRightStroke:(id*)arg5;
- (id)defaultTextStyleForTableArea:(int)arg1;
- (id)defaultVerticalBorderStroke;
- (void)dirtyFilterState;
- (id)documentRoot;
- (id)duplicateFilterSet;
- (void)enableFilter:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)enableFilterSet:(BOOL)arg1;
- (void)enableRule:(BOOL)arg1 atIndex:(unsigned int)arg2 inFilterIndex:(unsigned int)arg3;
- (id)filterSet;
- (void)filterSetUpdated;
- (id)footerRowBodyColumnStroke;
- (id)footerRowBodyRowStroke;
- (id)footerRowBorderStroke;
- (id)footerRowCellStyle;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })footerRowRange;
- (id)footerRowSeparatorStroke;
- (id)footerRowTextStyle;
- (id)footerRowsFill;
- (id)formulasForUndo;
- (struct __CFUUID { }*)fromTableID;
- (BOOL)hasActiveFilters;
- (BOOL)hasAlternatingRows;
- (BOOL)hasFormulas;
- (BOOL)hasMergeRanges;
- (BOOL)hasTableBorder;
- (id)headerColumnBodyColumnStroke;
- (id)headerColumnBodyRowStroke;
- (id)headerColumnBorderStroke;
- (id)headerColumnCellStyle;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })headerColumnRange;
- (id)headerColumnSeparatorStroke;
- (id)headerColumnTextStyle;
- (id)headerColumnsFill;
- (BOOL)headerColumnsFrozen;
- (id)headerRowBodyColumnStroke;
- (id)headerRowBodyRowStroke;
- (id)headerRowBorderStroke;
- (id)headerRowCellStyle;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })headerRowRange;
- (id)headerRowSeparatorStroke;
- (id)headerRowTextStyle;
- (id)headerRowsFill;
- (BOOL)headerRowsFrozen;
- (id)hiddenStateFormulaOwnerForColumns;
- (id)hiddenStateFormulaOwnerForRows;
- (int)hidingStateForColumn:(unsigned char)arg1;
- (int)hidingStateForRow:(unsigned short)arg1;
- (id)init;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4 waitForCalcEngine:(BOOL)arg5;
- (id)initWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 tableInfo:(id)arg5;
- (BOOL)isColumnHidden:(unsigned char)arg1 forAction:(int)arg2;
- (BOOL)isRowHidden:(unsigned short)arg1 forAction:(int)arg2;
- (void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)mergedGridIndicesForDirection:(int)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })minPopulatedCellRange;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)moveCalcEngineReferencesFromSourceTable:(struct __CFUUID { }*)arg1 sourceRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 sourceOffset:(struct { int x1; int x2; })arg3;
- (void)mutateFormulaFiltersUsingBlock:(id)arg1;
- (BOOL)needsFilterFormulaRewriteForImport;
- (unsigned short)numberOfColumns;
- (unsigned short)numberOfFooterRows;
- (unsigned short)numberOfHeaderColumns;
- (unsigned short)numberOfHeaderRows;
- (unsigned short)numberOfHiddenColumns;
- (unsigned short)numberOfHiddenRows;
- (unsigned short)numberOfRows;
- (unsigned short)numberOfUserHiddenColumns;
- (unsigned short)numberOfUserHiddenRows;
- (unsigned short)numberOfVisibleBodyColumns;
- (unsigned short)numberOfVisibleBodyRows;
- (void)p_clearDataListEntriesInRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 ignoreSizeChecks:(BOOL)arg2;
- (void)p_fetchCellHoldingReadLock:(void*)arg1 returnCode:(void*)arg2;
- (void)p_releaseExistingDefaultStyles;
- (void)p_scaleStrokeFromProperty:(int)arg1 style:(id)arg2 pmap:(id)arg3 scale:(float)arg4;
- (void)p_scaleStrokesOnCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 transformedObjects:(id)arg3 scale:(float)arg4;
- (unsigned int)presetID;
- (void)private_validateMergeCellsPedantically;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })range;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })referenceToHiddenStateFromColumn:(unsigned char)arg1 toColumn:(unsigned char)arg2;
- (struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })referenceToHiddenStateFromRow:(unsigned short)arg1 toRow:(unsigned short)arg2;
- (void)registerAllFormulasWithCalculationEngine:(id)arg1;
- (void)remapTableIDsInFormulasWithMap:(struct __CFDictionary { }*)arg1 calcEngine:(id)arg2;
- (id)removeFilterRules:(id)arg1;
- (id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned int)arg2;
- (BOOL)repeatingHeaderColumnsEnabled;
- (BOOL)repeatingHeaderRowsEnabled;
- (id)replaceRule:(id)arg1 atRuleIndex:(unsigned int)arg2 inFilter:(unsigned int)arg3;
- (void)resetSortRuleReferenceTrackerForInsert;
- (void)resetStyles:(id)arg1;
- (id)rowHeights;
- (id)rowNameForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 cellRangeContainingName:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg2 restrictToBodyRange:(BOOL)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyCellStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setCalcEngine:(id)arg1;
- (void)setColumnWidths:(id)arg1;
- (void)setConditionalStyleFormulaOwner:(id)arg1;
- (void)setDrawableIsBeingCopied:(BOOL)arg1;
- (void)setFilterRulesAtAbsoluteIndices:(id)arg1 enabled:(BOOL)arg2;
- (void)setFilterSet:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setFooterRowCellStyle:(id)arg1;
- (void)setFooterRowTextStyle:(id)arg1;
- (void)setFormulasForUndo:(id)arg1;
- (void)setHeaderColumnCellStyle:(id)arg1;
- (void)setHeaderColumnTextStyle:(id)arg1;
- (void)setHeaderColumnsFrozen:(BOOL)arg1;
- (void)setHeaderRowCellStyle:(id)arg1;
- (void)setHeaderRowTextStyle:(id)arg1;
- (void)setHeaderRowsFrozen:(BOOL)arg1;
- (void)setHeight:(float)arg1 ofRow:(unsigned short)arg2;
- (void)setNeedsFilterFormulaRewriteForImport:(BOOL)arg1;
- (void)setNumberOfColumns:(unsigned short)arg1;
- (void)setNumberOfFooterRows:(unsigned short)arg1;
- (void)setNumberOfHeaderColumns:(unsigned short)arg1;
- (void)setNumberOfHeaderRows:(unsigned short)arg1;
- (void)setNumberOfRows:(unsigned short)arg1;
- (void)setPresetID:(unsigned int)arg1;
- (void)setRepeatingHeaderColumnsEnabled:(BOOL)arg1;
- (void)setRepeatingHeaderRowsEnabled:(BOOL)arg1;
- (void)setRowHeights:(id)arg1;
- (void)setSortOrder:(id)arg1;
- (void)setStorageParentToInfo:(id)arg1;
- (void)setStyleApplyClearsAll:(BOOL)arg1;
- (void)setTableID:(struct __CFUUID { }*)arg1;
- (void)setTableName:(id)arg1;
- (void)setTableNameBorderEnabled:(BOOL)arg1;
- (void)setTableNameEnabled:(BOOL)arg1;
- (void)setTableNameHeight:(float)arg1;
- (void)setTableNameShapeStyle:(id)arg1;
- (void)setTableNameStyle:(id)arg1;
- (void)setTableStyle:(id)arg1;
- (void)setWarningSetsForUndo:(id)arg1;
- (void)setWasUnarchivedFromAProvidedTable:(BOOL)arg1;
- (void)setWidth:(float)arg1 ofColumn:(unsigned char)arg2;
- (void)setupDefaultCells;
- (id)sortOrder;
- (id)sortRuleReferenceTracker;
- (BOOL)styleApplyClearsAll;
- (int)tableAreaForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct __CFUUID { }*)tableID;
- (id)tableName;
- (BOOL)tableNameBorderEnabled;
- (id)tableNameBorderStroke;
- (BOOL)tableNameEnabled;
- (float)tableNameHeight;
- (id)tableNameShapeStyle;
- (id)tableNameStyle;
- (id)tableStyle;
- (int)tableWritingDirection;
- (void)transformStrokes:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 transformedObjects:(id)arg2 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)upgradeFromPreUFF;
- (BOOL)useBandedFill;
- (void)validate;
- (void)validateStyles;
- (id)warningSetsForUndo;
- (BOOL)wasUnarchivedFromAProvidedTable;

@end
