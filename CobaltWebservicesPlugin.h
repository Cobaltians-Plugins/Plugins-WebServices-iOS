//
//  CobaltWebservicesPlugin.h
//  Cobalt
//
//  Created by Haploid on 22/10/14.
//  Copyright (c) 2014 Haploid. All rights reserved.
//

#import "WebServicesAPI.h"

#import <Cobalt/CobaltAbstractPlugin.h>

@interface CobaltWebservicesPlugin : CobaltAbstractPlugin
{
    CobaltViewController * _viewController;
}

@property NSNumber * callId;

@end
