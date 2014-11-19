//
//  AddToDoItemViewController.h
//  ToDoList
//
//  Created by student on 11/18/14.
//  Copyright (c) 2014 CILS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddToDoItemViewController : UIViewController

@property NSMutableArray *toDoListItems;
@property (weak, nonatomic) IBOutlet UITextField *AddItem;
@property ToDoItem *toDoItem;

@end
