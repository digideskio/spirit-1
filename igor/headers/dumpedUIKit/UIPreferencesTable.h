/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UIKeyboard, NSMutableArray, UIPreferencesTableCell;

@interface UIPreferencesTable : UITable {
@private
	UIPreferencesTableCell* _editingCell;
	int _editingCellRow;
	NSMutableArray* _groupItems;
	UIKeyboard* _keyboard;
	float _textOffset;
	CFDictionaryRef _piecesForCell;
	unsigned _datasourceCellForGroup : 1;
	unsigned _datasourceIsRadioGroup : 1;
	unsigned _datasourceIsLabelGroup : 1;
	unsigned _datasourceIsRowCheckedInRadioGroup : 1;
	unsigned _centersContent : 1;
	unsigned _reserved : 27;
}
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame;
-(BOOL)canHandleSwipes;
-(BOOL)canDeleteRow:(int)row;
-(BOOL)canInsertAtRow:(int)row;
-(void)addTableColumn:(id)column;
-(BOOL)canSelectRow:(int)row;
-(id)_visibleCheckedCellInTableRowRange:(NSRange)tableRowRange;
-(void)_fadeCellSelection;
-(void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;
-(int)tableRowForRow:(int)row inGroup:(int)group;
-(id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int*)index andRow:(int*)row inGroups:(id)groups;
-(id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int*)index andRow:(int*)row;
-(BOOL)getGroup:(int*)group row:(int*)row ofPreferencesTableCell:(id)preferencesTableCell;
-(int)groupForTableRow:(int)tableRow;
-(BOOL)getGroup:(int*)group row:(int*)row forTableRow:(int)tableRow;
-(void)setDataSource:(id)source;
-(BOOL)validateDataSource;
-(int)dataSourceGetRowCount;
-(int)_cellOutlineForRow:(int)row withChildCount:(int)childCount isLabelGroup:(BOOL)group;
-(id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;
-(CGRect)frameOfPreferencesCellAtRow:(int)row inGroup:(int)group;
-(BOOL)floatArray:(id)array loadValues:(float*)values count:(int)count;
-(int)_paddingForCenteringContent;
-(void)_updatePaddingForCenteringContent;
-(void)setCentersContent:(BOOL)content;
-(void)_updateContentSize;
-(BOOL)dataSourceSupportsVariableRowHeights;
-(id)visiblePreferencesCellForRow:(int)row inGroup:(int)group;
-(void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;
-(BOOL)shouldIndentRow:(int)row;
-(void)deleteRows:(id)rows viaEdge:(int)edge;
-(void)_setAlpha:(float)alpha forSubviewsOf:(id)of;
-(id)_existingPieceForCell:(id)cell;
-(id)_copyPieceOfCell:(id)cell withContentsPosition:(int)contentsPosition;
-(float)animationDuration;
-(void)reloadData;
-(void)insertItems:(id)items;
-(void)deleteItems:(id)items;
-(void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;
-(void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;
-(void)_removePiecesFromSuperview:(id)superview;
-(void)_removePiecesFromSuperview:(id)superview finished:(id)finished context:(id)context;
-(void)_fadeCellOutAnimationDidStopAndFixOutlines:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;
-(void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;
-(void)_animatePiecesOfCell:(id)cell isFirstItemInGroup:(BOOL)group isDeletion:(BOOL)deletion isDestinationRowFrame:(CGRect)frame;
-(BOOL)_userCanDeleteRows;
-(void)insertItems:(id)items deleteItems:(id)items2 andReloadIndexes:(id)indexes;
-(BOOL)keyboardVisible;
-(id)keyboard;
-(void)_keyboardRemoveAnimationCompleted:(id)completed;
-(void)setKeyboardVisible:(BOOL)visible;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)resumeWithNotification:(id)notification;
-(void)setBottomBufferHeight:(float)height;
-(void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;
-(void)setKeyboardVisible:(BOOL)visible animated:(BOOL)animated;
-(id)_editingCell;
-(void)_setEditingCell:(id)cell;
-(int)editingRow;
-(BOOL)_beginEditingNextCell;
@end

