/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTextFieldViewController : UITableViewController {
    <_UIAlertControllerTextFieldViewControllerContaining> *_container;
    BOOL _textFieldsCanBecomeFirstResponder;
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
}

@property (nonatomic) <_UIAlertControllerTextFieldViewControllerContaining> *container;
@property (readonly) NSArray *textFields;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;

- (float)_bottomMarginForTextFields;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(BOOL)arg2;
- (id)container;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)numberOfTextFields;
- (void)removeAllTextFields;
- (void)setContainer:(id)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)textFieldAtIndex:(int)arg1;
- (id)textFields;
- (BOOL)textFieldsCanBecomeFirstResponder;
- (void)viewWillAppear:(BOOL)arg1;

@end
