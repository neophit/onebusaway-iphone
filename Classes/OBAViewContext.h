/**
 * Copyright (C) 2009 bdferris <bdferris@onebusaway.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "OBAApplicationContext.h"
#import "OBANavigationTarget.h"


@interface OBAViewContext : NSObject {
	OBAApplicationContext * _appContext;
	OBANavigationTarget * _target;
}

@property (nonatomic,readonly) OBAApplicationContext * appContext;
@property (nonatomic,readonly) OBANavigationTarget * target;		   

- (id) initWithAppContext:(OBAApplicationContext*)appContext navigationTarget:(OBANavigationTarget*)target;

/*
- (UIViewController*) getViewControllerForTargetType:(OBANavigationTargetType)targetType;
- (UIViewController*) getViewControllerForTargetType:(OBANavigationTargetType)targetType parameters:(NSDictionary*)parameters;
- (UIViewController*) getViewControllerForTarget:(OBANavigationTarget*)target;
 */

/*
- (OBANavigationTarget*) getNavigationTargetForTargetType:(OBANavigationTargetType)targetType parameters:(NSDictionary*)parameters;
- (OBAViewContext*) getContextForTarget:(OBANavigationTarget*)target;

- (void) navigateToTarget:(OBANavigationTarget*)navigationTarget;
*/

@end