// Copyright 2005-2010 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <QuartzCore/CIFilter.h>

@interface OQSimpleFilter : CIFilter
+ (CIKernel *)kernel;
+ (NSString *)filterSourceFileName; // "<name>.cikernel" must existing in the class's bundle
@end

// Subclasses must implement this protocol
@protocol OQConcreteSimpleFilter
- (CIImage *)outputImage; // Instances must use the kernel and pass their variables.
@end

@interface OQSimpleFilter (OQConcreteSimpleFilter) <OQConcreteSimpleFilter>
@end

