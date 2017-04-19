//
//  AppDelegate.h
//  SpeakLine
//
//  Created by Jaycee Han on 4/14/17.
//  Copyright © 2017 Jaycee Han. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSSpeechSynthesizerDelegate>
{
	NSSpeechSynthesizer *_speechSynth;
}
@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;


@property (weak) IBOutlet NSButton *stopButton;
@property (weak) IBOutlet NSButton *speakButton;

- (IBAction)stopit:(id)sender;
- (IBAction)sayit:(id)sender;

@end

